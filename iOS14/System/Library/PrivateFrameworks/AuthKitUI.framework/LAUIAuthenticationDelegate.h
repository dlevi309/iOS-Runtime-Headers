/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol LAUIAuthenticationDelegate <NSObject>
@optional
-(id)localizedCallerName;
-(void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;
-(void)biometricNoMatch;
-(id)localizedSubTitleForMechanisms:(unsigned long long)arg1;
-(void)processBiometricMatchWithCompletionHandler:(/*^block*/id)arg1;
-(id)callerIconBundlePath;

@end

