/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFaces:(ARGeometryElement *)arg1 ;
-(ARGeometryElement *)faces;
-(ARGeometrySource *)vertices;
-(ARGeometrySource *)classification;
-(void)setVertices:(ARGeometrySource *)arg1 ;
-(void)setClassification:(ARGeometrySource *)arg1 ;
-(ARGeometrySource *)normals;
-(id)initWithVertices:(id)arg1 normals:(id)arg2 faces:(id)arg3 ;
-(void)setNormals:(ARGeometrySource *)arg1 ;
@end

