/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

