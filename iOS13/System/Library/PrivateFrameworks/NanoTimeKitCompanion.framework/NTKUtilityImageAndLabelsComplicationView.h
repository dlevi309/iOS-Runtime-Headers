/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel;

@interface NTKUtilityImageAndLabelsComplicationView : NTKUtilityComplicationView {

	UIView*<NTKComplicationImageView> _imageView;
	NTKColoringLabel* _firstLabel;
	NTKColoringLabel* _secondLabel;

}

@property (nonatomic,retain) UIView*<NTKComplicationImageView> imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * firstLabel;                            //@synthesize firstLabel=_firstLabel - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * secondLabel;                           //@synthesize secondLabel=_secondLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(void)setSecondLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)secondLabel;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(double)_widthThatFits;
-(void)_updateContentForMaxSizeChange;
-(BOOL)_shouldLayoutWithImageView;
-(void)setFirstLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)firstLabel;
-(void)_layoutSubviewsHorizontally:(id)arg1 ;
-(void)_updateFirstLabelMaxSize;
-(BOOL)_isViewVisible:(id)arg1 ;
-(double)_gapBetweenView:(id)arg1 nextView:(id)arg2 ;
-(void)_setLabelTextProvider:(id)arg1 ;
-(void)_setLabelText:(id)arg1 ;
-(void)_setLabelAttributedText:(id)arg1 ;
-(void)_setSecondLabelText:(id)arg1 ;
-(void)_updateWithImageProvider:(id)arg1 ;
@end

