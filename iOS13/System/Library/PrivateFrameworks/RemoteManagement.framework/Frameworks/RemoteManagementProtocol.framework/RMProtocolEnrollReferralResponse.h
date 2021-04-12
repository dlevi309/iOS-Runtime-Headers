/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

