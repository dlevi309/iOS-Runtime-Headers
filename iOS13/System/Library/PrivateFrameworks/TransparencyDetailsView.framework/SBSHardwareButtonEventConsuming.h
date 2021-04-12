/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
*/


@protocol SBSHardwareButtonEventConsuming <NSObject>
@optional
-(void)consumeSinglePressDownForButtonKind:(long long)arg1;
-(void)consumeSinglePressUpForButtonKind:(long long)arg1;
-(void)consumeDoublePressDownForButtonKind:(long long)arg1;
-(void)consumeDoublePressUpForButtonKind:(long long)arg1;
-(void)consumeTriplePressUpForButtonKind:(long long)arg1;
-(void)consumeLongPressForButtonKind:(long long)arg1;
-(void)consumeAnyPressEventForButtonKind:(long long)arg1;
-(void)consumeStateChange:(long long)arg1 forButtonKind:(long long)arg2;

@end

