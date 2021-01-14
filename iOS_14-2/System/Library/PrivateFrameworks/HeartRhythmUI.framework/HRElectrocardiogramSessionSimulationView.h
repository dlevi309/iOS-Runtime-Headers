/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)cornerRadius;
-(void)setTimeRemaining:(double)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(void)_setUpUI;
-(id)initWithFrame:(CGRect)arg1 isLargeDevice:(BOOL)arg2 ;
-(HRElectrocardiogramSessionScreenView *)screenView;
-(BOOL)isLargeDevice;
@end

