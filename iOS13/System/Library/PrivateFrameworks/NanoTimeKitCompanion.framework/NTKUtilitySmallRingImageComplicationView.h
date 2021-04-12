/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(id)ringColor;
-(void)updateRingWithProgressProvider:(id)arg1 ;
-(void)_updateForTemplateChange;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateWithImageProvider:(id)arg1 ;
@end

