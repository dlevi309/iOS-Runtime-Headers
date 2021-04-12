/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView;

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView {

	BOOL _needsLayoutContent;
	UIView*<NTKComplicationImageView> _imageView;

}

@property (nonatomic,retain) UIView*<NTKComplicationImageView> imageView;              //@synthesize imageView=_imageView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(void)_layoutContentView;
-(void)_updateForTemplateChange;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_setNeedsLayoutContent;
@end

