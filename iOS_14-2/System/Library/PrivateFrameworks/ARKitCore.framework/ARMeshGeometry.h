/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARGeometrySource, ARGeometryElement;

@interface ARMeshGeometry : NSObject <NSSecureCoding> {

	ARGeometrySource* _vertices;
	ARGeometrySource* _normals;
	ARGeometryElement* _faces;
	ARGeometrySource* _classification;

}

@property (nonatomic,retain) ARGeometrySource * vertices;                    //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) ARGeometrySource * normals;                     //@synthesize normals=_normals - In the implementation block
@property (nonatomic,retain) ARGeometryElement * faces;                      //@synthesize faces=_faces - In the implementation block
@property (nonatomic,retain) ARGeometrySource * classification;              //@synthesize classification=_classification - In the implementation block
+(BOOL)supportsSecureCoding;
-(ARGeometryElement *)faces;
-(void)encodeWithCoder:(id)arg1 ;
-(ARGeometrySource *)classification;
-(void)setFaces:(ARGeometryElement *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setClassification:(ARGeometrySource *)arg1 ;
-(ARGeometrySource *)normals;
-(ARGeometrySource *)vertices;
-(void)setVertices:(ARGeometrySource *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithVertices:(id)arg1 normals:(id)arg2 faces:(id)arg3 ;
-(void)setNormals:(ARGeometrySource *)arg1 ;
@end

