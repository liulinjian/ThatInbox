//
//  MCOIMAPCopyMessagesOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 3/25/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#import <MailCore/MCOIMAPBaseOperation.h>

#ifndef __MAILCORE_MCOCOPYMESSAGESOPERATION_H_

#define __MAILCORE_MCOCOPYMESSAGESOPERATION_H_

/** Implements an operation for copying messages between folders */

@class MCOIndexSet;

@interface MCOIMAPCopyMessagesOperation : MCOIMAPBaseOperation

/** 
 Starts the asynchronous copy operation.

 @param completionBlock Called when the operation is finished.

 - On success `error` will be nil and `destUids` will contain the UIDs of the messages created
   in the destination folder. If the server doesn't support UIDPLUS then `destUids` will be nil.
 
 - On failure, `error` will be set with `MCOErrorDomain` as domain and an 
   error code available in `MCOConstants.h`, `destUids` will be nil
*/

- (void) start:(void (^)(NSError * error, MCOIndexSet * destUids))completionBlock;

@end

#endif
