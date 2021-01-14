/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CAFilter *)filter;
-(UIColor *)color;
-(void)applyToView:(id)arg1 ;
-(id)_initWithFilterType:(id)arg1 color:(id)arg2 ;
-(double)colorAlpha;
@end

