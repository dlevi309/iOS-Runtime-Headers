/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, VCPFaceGeometry;

@interface VCPFaceAnchor : NSObject <NSSecureCoding> {

	NSDictionary* _blendShapes;
	VCPFaceGeometry* _geometry;
	SCD_Struct_VC45 _transform;

}

@property (nonatomic,readonly) SCD_Struct_VC45 transform;               //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) NSDictionary * blendShapes;              //@synthesize blendShapes=_blendShapes - In the implementation block
@property (nonatomic,readonly) VCPFaceGeometry * geometry;              //@synthesize geometry=_geometry - In the implementation block
+(BOOL)supportsSecureCoding;
-(VCPFaceGeometry *)geometry;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)blendShapes;
-(SCD_Struct_VC45)transform;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTransform:(SCD_Struct_VC45)arg1 blendShapes:(id)arg2 geometry:(id)arg3 ;
@end

