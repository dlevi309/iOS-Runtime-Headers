/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolEnrollReferralResponse : RMModelPayloadBase {

	NSString* _responseReferralBaseURL;

}

@property (nonatomic,copy) NSString * responseReferralBaseURL;              //@synthesize responseReferralBaseURL=_responseReferralBaseURL - In the implementation block
+(id)requestWithReferralBaseURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseReferralBaseURL:(NSString *)arg1 ;
-(NSString *)responseReferralBaseURL;
@end

