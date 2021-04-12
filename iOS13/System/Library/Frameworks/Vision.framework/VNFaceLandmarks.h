/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSData;

@interface VNFaceLandmarks : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {

	float _confidence;
	unsigned long long _pointCount;
	NSData* _pointsData;
	Geometry2D_rect2D_ _alignedBBox;
	CGRect _userFacingBBox;
	unsigned long long _requestRevision;

}

@property (retain) NSData * pointsData;                                         //@synthesize pointsData=_pointsData - In the implementation block
@property (assign) Geometry2D_rect2D_ alignedBBox;                              //@synthesize alignedBBox=_alignedBBox - In the implementation block
@property (assign) CGRect userFacingBBox;                                       //@synthesize userFacingBBox=_userFacingBBox - In the implementation block
@property (assign) unsigned long long pointCount;                               //@synthesize pointCount=_pointCount - In the implementation block
@property (readonly) float confidence;                                          //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)confidence;
-(unsigned long long)requestRevision;
-(unsigned long long)pointCount;
-(void)setPointCount:(unsigned long long)arg1 ;
-(void*)_createPointArray:(const int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isUserFacingBBoxEquivalentToAlignedBBox;
-(id)initWithRequestRevision:(unsigned long long)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 userFacingBBox:(CGRect)arg4 alignedBBox:(Geometry2D_rect2D_)arg5 landmarkScore:(float)arg6 ;
-(NSData *)pointsData;
-(void)setPointsData:(NSData *)arg1 ;
-(Geometry2D_rect2D_)alignedBBox;
-(void)setAlignedBBox:(Geometry2D_rect2D_)arg1 ;
-(CGRect)userFacingBBox;
-(void)setUserFacingBBox:(CGRect)arg1 ;
@end

