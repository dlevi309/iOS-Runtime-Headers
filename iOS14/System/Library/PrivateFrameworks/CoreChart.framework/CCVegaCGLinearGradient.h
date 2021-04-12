/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaCGGradientInterface.h>

@class NSMutableArray, CCVegaCGContext;

@interface CCVegaCGLinearGradient : NSObject <CCVegaCGGradientInterface> {

	double _x0;
	double _y0;
	double _x1;
	double _y1;
	NSMutableArray* _colorStops;
	CCVegaCGContext* _context;

}
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)addColorStopWithOffset:(double)arg1 color:(id)arg2 ;
-(id)initWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 ;
-(void)fillWithContext:(CGContextRef)arg1 ;
@end

