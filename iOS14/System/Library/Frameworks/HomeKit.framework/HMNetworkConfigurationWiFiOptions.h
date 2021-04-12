/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFObject.h>

@interface HMNetworkConfigurationWiFiOptions : HMFObject {

	BOOL _rotate;
	long long _credentialType;

}

@property (nonatomic,readonly) long long credentialType;              //@synthesize credentialType=_credentialType - In the implementation block
@property (assign,nonatomic) BOOL rotate;                             //@synthesize rotate=_rotate - In the implementation block
-(BOOL)rotate;
-(id)description;
-(long long)credentialType;
-(id)initWithCredentialType:(long long)arg1 ;
-(void)setRotate:(BOOL)arg1 ;
@end

