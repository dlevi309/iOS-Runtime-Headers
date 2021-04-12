/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKSecureElementObserver <NSObject>
@optional
-(void)secureElementDidEnterRestrictedMode:(id)arg1;
-(void)secureElementDidLeaveRestrictedMode:(id)arg1;
-(void)secureElement:(id)arg1 deletionOfAppletsDidUpdateToProgress:(double)arg2;
-(void)secureElement:(id)arg1 deletionOfAppletsDidFinishWithSuccess:(BOOL)arg2;
-(void)secureElementPairingDidChangeForReason:(unsigned long long)arg1;

@end

