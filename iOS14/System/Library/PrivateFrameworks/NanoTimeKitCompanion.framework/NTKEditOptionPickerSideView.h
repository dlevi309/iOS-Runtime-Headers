/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

