/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKit/HMRemoteLoginMessage.h>

@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage {

	unsigned long long _targetedAccountType;

}

@property (assign,nonatomic) unsigned long long targetedAccountType;              //@synthesize targetedAccountType=_targetedAccountType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(id)messageName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)messagePayload;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)xpcMessageName;
-(void)setTargetedAccountType:(unsigned long long)arg1 ;
-(unsigned long long)targetedAccountType;
@end

