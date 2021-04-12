/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/


@protocol LAUIAuthentication
@required
-(BOOL)disableMechanism:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)enableMechanism:(unsigned long long)arg1 error:(id*)arg2;
-(id)initWithMechanisms:(unsigned long long)arg1;
-(BOOL)isMechanismAvailable:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)isMechanismEnabled:(unsigned long long)arg1;
-(BOOL)isMechanismActive:(unsigned long long)arg1;

@end

