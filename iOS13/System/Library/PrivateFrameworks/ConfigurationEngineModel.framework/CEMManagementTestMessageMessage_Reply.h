/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestMessageMessage_Reply : CEMPayloadBase {

	NSString* _replyEcho;

}

@property (nonatomic,copy) NSString * replyEcho;              //@synthesize replyEcho=_replyEcho - In the implementation block
+(id)allowedReasons;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
+(id)allowedReplyKeys;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setReplyEcho:(NSString *)arg1 ;
-(NSString *)replyEcho;
@end

