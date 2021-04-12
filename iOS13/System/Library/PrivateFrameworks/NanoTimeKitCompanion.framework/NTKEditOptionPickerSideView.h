/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface NTKEditOptionPickerSideView : UIView {

	double _contentAlpha;
	CGAffineTransform _contentTransform;
	UIView* _optionView;

}

@property (nonatomic,retain) UIView * optionView;              //@synthesize optionView=_optionView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOptionView:(UIView *)arg1 ;
-(UIView *)optionView;
-(void)setRotationFromFront:(double)arg1 ;
-(void)applyContentTransform:(CGAffineTransform)arg1 ;
-(void)_applyContentAlpha;
@end

