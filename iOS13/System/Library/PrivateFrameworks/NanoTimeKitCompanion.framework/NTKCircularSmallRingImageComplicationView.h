/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCircularSmallRingComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView, CLKProgressProvider, NSNumber;

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView {

	UIView*<NTKComplicationImageView> _imageView;
	CLKProgressProvider* _progressProvider;
	NSNumber* _progressUpdateToken;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(double)_imageScaleForTemplate:(id)arg1 ;
-(void)layoutSubviews;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)updateRingWithProgressProvider:(id)arg1 ;
-(void)_updateForTemplateChange;
@end

