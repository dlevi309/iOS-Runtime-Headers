/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {

	NSArray* colorStops;
	NSArray* colorMidpointLocations;
	NSArray* opacityStops;
	NSArray* opacityMidpointLocations;
	double smoothingCoefficient;
	psdGradientColor fillColor;
	int blendMode;
	struct {
		unsigned colorEdgePixel : 2;
		unsigned opacityEdgePixel : 2;
		unsigned isDithered : 1;
		unsigned reserved : 3;
	}  pgeFlags;

}

@property (assign,nonatomic) int blendMode; 
+(void)initialize;
-(int)blendMode;
-(id)colorStops;
-(id)colorMidpointLocations;
-(id)opacityStops;
-(id)opacityMidpointLocations;
-(double)smoothingCoefficient;
-(psdGradientColor)fillColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillColor:(psdGradientColor)arg6 dither:(BOOL)arg7 ;
-(id)_cleanedUpMidpointLocationsFromLocations:(id)arg1 ;
-(void)_createOrderedStops:(id*)arg1 midpoints:(id*)arg2 fromStops:(id)arg3 midpoints:(id)arg4 edgePixel:(long long*)arg5 ;
-(psdGradientColor)_smoothedGradientColorAtLocation:(double)arg1 ;
-(double)fillCoefficient;
-(double)_smoothedInterpolationOfLocation:(double)arg1 betweenLower:(double)arg2 upper:(double)arg3 scaledMidpoint:(double)arg4 ;
-(void)setOpacityStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setSmoothingCoefficient:(double)arg1 ;
-(void)setFillCoefficient:(double)arg1 ;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillCoefficient:(double)arg6 ;
-(BOOL)hasEdgePixel;
-(void)setColorStops:(id)arg1 midpoints:(id)arg2 ;
-(void)customizeForDistance:(double)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isDithered;
-(void)dealloc;
@end

