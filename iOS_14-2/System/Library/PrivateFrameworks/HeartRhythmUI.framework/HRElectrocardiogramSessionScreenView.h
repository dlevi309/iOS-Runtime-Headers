/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setUpUI;
-(UIImageView *)waveformView;
-(UILabel *)countdownValueLabel;
-(BOOL)isLargeDevice;
-(UILabel *)countdownUnitLabel;
-(id)initWithLargeDevice:(BOOL)arg1 ;
@end

