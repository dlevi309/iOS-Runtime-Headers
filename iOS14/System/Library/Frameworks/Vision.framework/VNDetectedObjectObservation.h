/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSUUID;

@interface VNDetectedObjectObservation : VNObservation {

	CGRect _boundingBox;
	NSUUID* _identifier;

}

@property (assign,nonatomic) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (copy) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)observationWithBoundingBox:(CGRect)arg1 ;
+(id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CGRect)boundingBox;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)excludesBoundingBoxFromCoding;
-(void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(CGPoint)arg1 topRight:(CGPoint)arg2 bottomRight:(CGPoint)arg3 bottomLeft:(CGPoint)arg4 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

