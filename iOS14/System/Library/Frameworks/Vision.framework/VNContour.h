/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class VNContoursObservation, NSIndexPath, NSArray;

@interface VNContour : NSObject <NSCopying, VNRequestRevisionProviding> {

	VNContoursObservation* _observation;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _contourPoints;
	unsigned long long _topLevelIndex;
	os_unfair_lock_s _pathLock;
	CGPathRef _normalizedPath;
	float _aspectRatio;
	NSIndexPath* _indexPath;

}

@property (readonly) unsigned long long topLevelIndex;                          //@synthesize topLevelIndex=_topLevelIndex - In the implementation block
@property (readonly) NSIndexPath * indexPath;                                   //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) long long childContourCount; 
@property (readonly) NSArray * childContours; 
@property (readonly) long long pointCount; 
@property (readonly) const * normalizedPoints; 
@property (readonly) const CGPathRef normalizedPath; 
@property (readonly) float aspectRatio;                                         //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision; 
-(NSIndexPath *)indexPath;
-(const *)normalizedPoints;
-(float)aspectRatio;
-(const CGPathRef)normalizedPath;
-(unsigned long long)hash;
-(id)initWithObservation:(id)arg1 topLevelIndex:(unsigned long long)arg2 indexPath:(id)arg3 aspectRatio:(float)arg4 ;
-(id)initWithPoints:(const vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >}Ref)arg1 topLevelIndex:(unsigned long long)arg2 indexPath:(id)arg3 aspectRatio:(float)arg4 ;
-(long long)childContourCount;
-(NSArray *)childContours;
-(id)childContourAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(const 1*)createNormalizedPointsCorrectedForAspectRatio;
-(id)polygonApproximationWithEpsilon:(float)arg1 error:(id*)arg2 ;
-(unsigned long long)topLevelIndex;
-(unsigned long long)requestRevision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)pointCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

