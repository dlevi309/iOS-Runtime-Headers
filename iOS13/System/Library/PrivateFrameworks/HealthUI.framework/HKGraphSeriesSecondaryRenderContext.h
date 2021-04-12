/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSMutableArray;

@interface HKGraphSeriesSecondaryRenderContext : NSObject {

	NSMutableArray* _aboveScreenRegions;
	NSMutableArray* _belowScreenRegions;

}
-(id)init;
-(void)addOffScreenRegionWithStartLocation:(double)arg1 endLocation:(double)arg2 color:(id)arg3 aboveScreen:(BOOL)arg4 ;
-(void)addOffScreenRegionAtLocation:(double)arg1 color:(id)arg2 aboveScreen:(BOOL)arg3 ;
-(void)drawInAxisRect:(CGRect)arg1 backgroundColor:(id)arg2 renderContext:(CGContextRef)arg3 ;
@end

