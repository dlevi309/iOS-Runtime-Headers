/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestEvent_EventMessage : CEMPayloadBase {

	NSString* _eventmessageEcho;

}

@property (nonatomic,copy) NSString * eventmessageEcho;              //@synthesize eventmessageEcho=_eventmessageEcho - In the implementation block
+(id)allowedReasons;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
+(id)allowedEventMessageKeys;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setEventmessageEcho:(NSString *)arg1 ;
-(NSString *)eventmessageEcho;
@end

