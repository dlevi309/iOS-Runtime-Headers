/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkRegion.h>

@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion {

	const * _points;

}

@property (assign) const * points;              //@synthesize points=_points - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPoints:(const *)arg1 ;
-(2)pointAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 points:(5*)arg3 pointCount:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const *)points;
-(void)dealloc;
@end

