/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HRElectrocardiogramSessionScreenView;

@interface HRElectrocardiogramSessionSimulationView : UIView {

	BOOL _isLargeDevice;
	HRElectrocardiogramSessionScreenView* _screenView;

}

@property (nonatomic,readonly) HRElectrocardiogramSessionScreenView * screenView;              //@synthesize screenView=_screenView - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,readonly) BOOL isLargeDevice;                                             //@synthesize isLargeDevice=_isLargeDevice - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(double)cornerRadius;
-(void)setTimeRemaining:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isLargeDevice:(BOOL)arg2 ;
-(void)_setUpUI;
-(HRElectrocardiogramSessionScreenView *)screenView;
-(BOOL)isLargeDevice;
@end

