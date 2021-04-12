/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkRegion.h>

@class NSMutableDictionary, NSArray;

@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion {

	NSMutableDictionary* _sizedPointsCache;
	os_unfair_lock_s _pointsCalculatorLock;
	* _points;
	NSArray* _precisionEstimatesPerPoint;
	NSArray* _occlusionFlagsPerPoint;

}

@property (readonly) const * points;                                    //@synthesize points=_points - In the implementation block
@property (readonly) NSArray * occlusionFlagsPerPoint;                  //@synthesize occlusionFlagsPerPoint=_occlusionFlagsPerPoint - In the implementation block
@property (readonly) const CGPoint* normalizedPoints; 
@property (readonly) NSArray * precisionEstimatesPerPoint;              //@synthesize precisionEstimatesPerPoint=_precisionEstimatesPerPoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_initLocks;
-(const CGPoint*)pointsInImageOfSize:(CGSize)arg1 ;
-(2)pointAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(const CGPoint*)normalizedPoints;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 points:(5*)arg3 pointCount:(unsigned long long)arg4 precisionEstimatesPerPoint:(id)arg5 occlusionFlagsPerPoint:(id)arg6 ;
-(NSArray *)precisionEstimatesPerPoint;
-(NSArray *)occlusionFlagsPerPoint;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const *)points;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

