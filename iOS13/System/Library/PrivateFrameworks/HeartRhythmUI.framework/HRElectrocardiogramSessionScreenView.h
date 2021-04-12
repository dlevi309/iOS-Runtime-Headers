/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface HRElectrocardiogramSessionScreenView : UIView {

	BOOL _isLargeDevice;
	UIImageView* _waveformView;
	UILabel* _countdownValueLabel;
	UILabel* _countdownUnitLabel;

}

@property (nonatomic,readonly) BOOL isLargeDevice;                         //@synthesize isLargeDevice=_isLargeDevice - In the implementation block
@property (nonatomic,readonly) UIImageView * waveformView;                 //@synthesize waveformView=_waveformView - In the implementation block
@property (nonatomic,readonly) UILabel * countdownValueLabel;              //@synthesize countdownValueLabel=_countdownValueLabel - In the implementation block
@property (nonatomic,readonly) UILabel * countdownUnitLabel;               //@synthesize countdownUnitLabel=_countdownUnitLabel - In the implementation block
-(UIImageView *)waveformView;
-(void)_setUpUI;
-(UILabel *)countdownValueLabel;
-(BOOL)isLargeDevice;
-(UILabel *)countdownUnitLabel;
-(id)initWithLargeDevice:(BOOL)arg1 ;
@end

