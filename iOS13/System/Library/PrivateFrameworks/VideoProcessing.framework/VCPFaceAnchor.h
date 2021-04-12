/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, VCPFaceGeometry;

@interface VCPFaceAnchor : NSObject <NSSecureCoding> {

	NSDictionary* _blendShapes;
	VCPFaceGeometry* _geometry;
	SCD_Struct_VC41 _transform;

}

@property (nonatomic,readonly) SCD_Struct_VC41 transform;               //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) NSDictionary * blendShapes;              //@synthesize blendShapes=_blendShapes - In the implementation block
@property (nonatomic,readonly) VCPFaceGeometry * geometry;              //@synthesize geometry=_geometry - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_VC41)transform;
-(VCPFaceGeometry *)geometry;
-(NSDictionary *)blendShapes;
-(id)initWithTransform:(SCD_Struct_VC41)arg1 blendShapes:(id)arg2 geometry:(id)arg3 ;
@end

