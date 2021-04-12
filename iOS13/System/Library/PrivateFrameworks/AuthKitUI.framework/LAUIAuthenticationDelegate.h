/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

