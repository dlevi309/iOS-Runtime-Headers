/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)layoutSubviews;
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

