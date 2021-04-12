/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@interface VNFaceLandmarkRegion : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {

	CGRect _faceBoundingBox;
	unsigned long long _pointCount;
	unsigned long long _requestRevision;

}

@property (assign) CGRect faceBoundingBox;                                      //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
@property (assign) unsigned long long pointCount;                               //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPointCount:(unsigned long long)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 ;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pointCount;
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)faceBoundingBox;
@end

