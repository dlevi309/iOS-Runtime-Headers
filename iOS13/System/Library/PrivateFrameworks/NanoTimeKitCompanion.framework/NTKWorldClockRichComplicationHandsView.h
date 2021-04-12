/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class CALayer, UIColor, NSString;

@interface NTKWorldClockRichComplicationHandsView : NTKAnalogHandsView <CLKMonochromeComplicationView> {

	CALayer* _pegDot;
	id<CLKMonochromeFilterProvider> _filterProvider;
	UIColor* _pegDotColor;

}

@property (nonatomic,retain) UIColor * pegDotColor;                                              //@synthesize pegDotColor=_pegDotColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(long long)displayedHour;
-(void)setPegDotColor:(UIColor *)arg1 ;
-(double)_timeAnimationFramesPerSecondForDevice:(id)arg1 ;
-(UIColor *)pegDotColor;
@end

