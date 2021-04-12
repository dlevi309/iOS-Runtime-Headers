/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

