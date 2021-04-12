/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView;

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView {

	UIView*<NTKComplicationImageView> _imageView;

}

@property (nonatomic,retain) UIView*<NTKComplicationImageView> imageView;              //@synthesize imageView=_imageView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setUsesMediumLayout:(BOOL)arg1 ;
-(void)_updateForTemplateChange;
@end

