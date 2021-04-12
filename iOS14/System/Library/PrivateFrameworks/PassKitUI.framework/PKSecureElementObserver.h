/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

