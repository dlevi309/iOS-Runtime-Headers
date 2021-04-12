/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringView.h>

@protocol CLKMonochromeFilterProvider;
@interface NTKRingView : NTKColoringView {

	double _ringWidth;
	double _radius;
	double _fillFraction;
	id<CLKMonochromeFilterProvider> _filterProvider;

}

@property (nonatomic,readonly) double ringWidth;                                                 //@synthesize ringWidth=_ringWidth - In the implementation block
@property (nonatomic,readonly) double radius;                                                    //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double fillFraction;                                                //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(double)radius;
-(double)ringWidth;
-(void)setFillFraction:(double)arg1 ;
-(double)fillFraction;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(id)initWithFrame:(CGRect)arg1 radius:(double)arg2 ringWidth:(double)arg3 ;
-(void)_drawBackgroundRings;
-(void)_drawRingWithRadius:(double)arg1 fillFraction:(double)arg2 alpha:(double)arg3 ;
@end

