/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/DAResolveRecipientsConsumer.h>

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer> {

	MFConditionLock* _conditionLock;
	NSDictionary* _resolvedRecipientsByEmailAddress;
	NSError* _error;

}

@property (readonly) NSError * error; 
-(id)init;
-(NSError *)error;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(id)waitForResolvedRecipients;
-(void)resolvedRecipientsByEmailAddress:(id)arg1 ;
@end

