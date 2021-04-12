/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <libobjc.A.dylib/MFDASyncActionsConsumer.h>

@class NSString;

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleItems:(id)arg1 ;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(void)drainMailbox;
-(void)receiveSyncActions:(id)arg1 ;
-(void)commitSyncActions;
@end

