/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
*/

#import <MechanismBase/MechanismBase-Structs.h>
#import <MechanismBase/MechanismBase.h>

@interface MechanismACM : MechanismBase {

	ACMHandleRef _acmContext;
	unsigned long long _acmFlags;

}

@property (nonatomic,readonly) ACMHandleRef acmContext;                  //@synthesize acmContext=_acmContext - In the implementation block
@property (nonatomic,readonly) unsigned long long acmFlags;              //@synthesize acmFlags=_acmFlags - In the implementation block
-(ACMHandleRef)acmContext;
-(id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 acmContextRecord:(id)arg3 request:(id)arg4 ;
-(unsigned long long)acmFlags;
@end

