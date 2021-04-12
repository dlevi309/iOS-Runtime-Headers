/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringView.h>

@interface NTKRingOverlapArcView : NTKColoringView {

	double _ringWidth;
	double _overlapWidth;
	double _radius;
	double _fillFraction;

}

@property (nonatomic,readonly) double ringWidth;                 //@synthesize ringWidth=_ringWidth - In the implementation block
@property (nonatomic,readonly) double overlapWidth;              //@synthesize overlapWidth=_overlapWidth - In the implementation block
@property (nonatomic,readonly) double radius;                    //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double fillFraction;                //@synthesize fillFraction=_fillFraction - In the implementation block
-(double)radius;
-(void)drawRect:(CGRect)arg1 ;
-(double)ringWidth;
-(double)fillFraction;
-(void)setFillFraction:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 radius:(double)arg2 ringWidth:(double)arg3 overlapWidth:(double)arg4 ;
-(double)overlapWidth;
@end

