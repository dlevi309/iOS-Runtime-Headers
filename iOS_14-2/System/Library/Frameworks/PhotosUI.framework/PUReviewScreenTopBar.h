/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSSet, PUReviewScreenDoneButton, UIButton;

@interface PUReviewScreenTopBar : UIView {

	NSSet* _availableButtons;
	NSSet* _enabledButtons;
	unsigned long long _backgroundStyle;
	PUReviewScreenDoneButton* _doneButton;
	UIButton* _retakeButton;
	CGPoint _doneButtonCenterAlignmentPoint;

}

@property (nonatomic,copy) NSSet * availableButtons;                               //@synthesize availableButtons=_availableButtons - In the implementation block
@property (nonatomic,copy) NSSet * enabledButtons;                                 //@synthesize enabledButtons=_enabledButtons - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;                   //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) CGPoint doneButtonCenterAlignmentPoint;               //@synthesize doneButtonCenterAlignmentPoint=_doneButtonCenterAlignmentPoint - In the implementation block
@property (nonatomic,readonly) PUReviewScreenDoneButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * retakeButton;                            //@synthesize retakeButton=_retakeButton - In the implementation block
+(id)supportedButtons;
-(PUReviewScreenDoneButton *)doneButton;
-(void)_updateBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)backgroundStyle;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSSet *)enabledButtons;
-(BOOL)_isButtonAvailable:(long long)arg1 ;
-(BOOL)_isButtonEnabled:(long long)arg1 ;
-(id)_buttonForButtonType:(long long)arg1 ;
-(void)_updateButtonVisibility;
-(NSSet *)availableButtons;
-(void)setDoneButtonCenterAlignmentPoint:(CGPoint)arg1 ;
-(CGPoint)doneButtonCenterAlignmentPoint;
-(void)setEnabledButtons:(NSSet *)arg1 ;
-(void)setAvailableButtons:(NSSet *)arg1 ;
-(UIButton *)retakeButton;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
@end

