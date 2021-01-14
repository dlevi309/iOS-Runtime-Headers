/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetectedObjectObservation.h>

@interface VNRectangleObservation : VNDetectedObjectObservation {

	CGPoint _topLeft;
	CGPoint _bottomLeft;
	CGPoint _bottomRight;
	CGPoint _topRight;

}

@property (nonatomic,readonly) CGPoint topLeft;                  //@synthesize topLeft=_topLeft - In the implementation block
@property (nonatomic,readonly) CGPoint topRight;                 //@synthesize topRight=_topRight - In the implementation block
@property (nonatomic,readonly) CGPoint bottomLeft;               //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (nonatomic,readonly) CGPoint bottomRight;              //@synthesize bottomRight=_bottomRight - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 ;
+(id)rectangleObservationWithRequestRevision:(unsigned long long)arg1 topLeft:(CGPoint)arg2 bottomLeft:(CGPoint)arg3 bottomRight:(CGPoint)arg4 topRight:(CGPoint)arg5 ;
-(CGPoint)bottomLeft;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(id)initWithTopLeft:(CGPoint)arg1 bottomLeft:(CGPoint)arg2 bottomRight:(CGPoint)arg3 topRight:(CGPoint)arg4 ;
-(CGPoint)bottomRight;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)excludesBoundingBoxFromCoding;
-(void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(CGPoint)arg1 topRight:(CGPoint)arg2 bottomRight:(CGPoint)arg3 bottomLeft:(CGPoint)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 topLeft:(CGPoint)arg2 bottomLeft:(CGPoint)arg3 bottomRight:(CGPoint)arg4 topRight:(CGPoint)arg5 ;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

