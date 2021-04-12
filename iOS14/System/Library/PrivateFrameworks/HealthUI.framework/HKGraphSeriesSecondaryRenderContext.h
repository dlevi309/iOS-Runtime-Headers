/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

