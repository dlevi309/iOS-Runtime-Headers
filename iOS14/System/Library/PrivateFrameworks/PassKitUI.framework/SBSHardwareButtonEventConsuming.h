/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol SBSHardwareButtonEventConsuming <NSObject>
@optional
-(void)consumeSinglePressUpForButtonKind:(long long)arg1;
-(void)consumeDoublePressUpForButtonKind:(long long)arg1;
-(void)consumeSinglePressDownForButtonKind:(long long)arg1;
-(void)consumeDoublePressDownForButtonKind:(long long)arg1;
-(void)consumeTriplePressUpForButtonKind:(long long)arg1;
-(void)consumeLongPressForButtonKind:(long long)arg1;
-(void)consumeAnyPressEventForButtonKind:(long long)arg1;
-(void)consumeStateChange:(long long)arg1 forButtonKind:(long long)arg2;

@end

