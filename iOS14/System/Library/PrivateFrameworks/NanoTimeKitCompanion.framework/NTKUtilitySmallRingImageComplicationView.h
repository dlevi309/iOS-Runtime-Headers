/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKUtilitySmallRingComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView, CLKProgressProvider, NSNumber;

@interface NTKUtilitySmallRingImageComplicationView : NTKUtilitySmallRingComplicationView {

	UIView*<NTKComplicationImageView> _imageView;
	CLKProgressProvider* _progressProvider;
	NSNumber* _progressUpdateToken;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)ringColor;
-(void)layoutSubviews;
-(void)updateRingWithProgressProvider:(id)arg1 ;
-(void)_updateForTemplateChange;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateWithImageProvider:(id)arg1 ;
@end

