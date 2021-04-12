/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchor.h>

@class ARPlaneGeometry, ARPatchGrid, NSDictionary, NSString;

@interface ARPlaneAnchor : ARAnchor {

	float _uncertaintyAlongNormal;
	long long _alignment;
	ARPlaneGeometry* _geometry;
	long long _classificationStatus;
	long long _classification;
	ARPatchGrid* _gridExtent;
	long long _worldAlignmentRotation;
	NSDictionary* _possibleClassifications;
	NSString* _classificationLabel;
	 _center;
	 _extent;

}

@property (assign,nonatomic)  center;                                           //@synthesize center=_center - In the implementation block
@property (assign,nonatomic)  extent;                                           //@synthesize extent=_extent - In the implementation block
@property (retain) ARPlaneGeometry * geometry;                                  //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) ARPatchGrid * gridExtent;                          //@synthesize gridExtent=_gridExtent - In the implementation block
@property (assign,nonatomic) float uncertaintyAlongNormal;                      //@synthesize uncertaintyAlongNormal=_uncertaintyAlongNormal - In the implementation block
@property (assign,nonatomic) long long worldAlignmentRotation;                  //@synthesize worldAlignmentRotation=_worldAlignmentRotation - In the implementation block
@property (assign,nonatomic) long long classificationStatus;                    //@synthesize classificationStatus=_classificationStatus - In the implementation block
@property (assign,nonatomic) long long classification;                          //@synthesize classification=_classification - In the implementation block
@property (nonatomic,copy) NSDictionary * possibleClassifications;              //@synthesize possibleClassifications=_possibleClassifications - In the implementation block
@property (nonatomic,retain) NSString * classificationLabel;                    //@synthesize classificationLabel=_classificationLabel - In the implementation block
@property (nonatomic,readonly) long long alignment;                             //@synthesize alignment=_alignment - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isClassificationSupported;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(long long)alignment;
-()extent;
-(id)debugQuickLookObject;
-()center;
-(void)setCenter:;
-(void)setExtent:;
-(ARPlaneGeometry *)geometry;
-(void)setGeometry:(ARPlaneGeometry *)arg1 ;
-(float)area;
-(long long)classification;
-(NSString *)classificationLabel;
-(void)setClassification:(long long)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(long long)classificationStatus;
-(ARPatchGrid *)gridExtent;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 alignment:(long long)arg3 ;
-(id)_hitTestFromOrigin:(BOOL)arg1 withDirection:(BOOL)arg2 ;
-(void)setWorldAlignmentRotation:(long long)arg1 ;
-(void)setUncertaintyAlongNormal:(float)arg1 ;
-(long long)worldAlignmentRotation;
-(void)setGridExtent:(ARPatchGrid *)arg1 ;
-(void)setClassificationStatus:(long long)arg1 ;
-(void)setPossibleClassifications:(NSDictionary *)arg1 ;
-(void)setClassificationLabel:(NSString *)arg1 ;
-(float)uncertaintyAlongNormal;
-(NSDictionary *)possibleClassifications;
@end

