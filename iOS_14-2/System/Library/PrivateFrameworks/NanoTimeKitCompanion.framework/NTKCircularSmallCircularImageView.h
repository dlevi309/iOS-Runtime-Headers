/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)layoutSubviews;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setUsesMediumLayout:(BOOL)arg1 ;
-(void)_updateForTemplateChange;
@end

