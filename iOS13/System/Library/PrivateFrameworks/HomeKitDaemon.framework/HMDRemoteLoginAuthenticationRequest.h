/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)messageName;
-(id)messagePayload;
-(id)xpcMessageName;
-(void)setTargetedAccountType:(unsigned long long)arg1 ;
-(unsigned long long)targetedAccountType;
@end

