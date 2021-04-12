/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class CAFilter, UIColor;

@interface SSMaterial : NSObject {

	CAFilter* _filter;
	UIColor* _color;

}

@property (nonatomic,readonly) CAFilter * filter; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) double colorAlpha; 
+(id)cropHandle;
+(id)vellumOpacitySliderTrack;
+(id)vellumOpacitySliderValueImage;
-(UIColor *)color;
-(CAFilter *)filter;
-(void)applyToView:(id)arg1 ;
-(id)_initWithFilterType:(id)arg1 color:(id)arg2 ;
-(double)colorAlpha;
@end

