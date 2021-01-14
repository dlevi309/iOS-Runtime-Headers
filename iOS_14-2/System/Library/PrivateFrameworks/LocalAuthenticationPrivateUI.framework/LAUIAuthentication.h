/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/


@protocol LAUIAuthentication
@required
-(BOOL)disableMechanism:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)isMechanismEnabled:(unsigned long long)arg1;
-(BOOL)enableMechanism:(unsigned long long)arg1 error:(id*)arg2;
-(id)initWithMechanisms:(unsigned long long)arg1;
-(BOOL)isMechanismAvailable:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)isMechanismActive:(unsigned long long)arg1;

@end

