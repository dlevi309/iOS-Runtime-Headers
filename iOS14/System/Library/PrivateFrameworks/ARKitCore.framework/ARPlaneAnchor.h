/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARAnchor.h>

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
-(id)debugQuickLookObject;
-(ARPlaneGeometry *)geometry;
-()center;
-(long long)alignment;
-(float)area;
-(id)initWithAnchor:(id)arg1 ;
-()extent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setCenter:;
-(NSString *)classificationLabel;
-(long long)classification;
-(void)setExtent:;
-(void)setGeometry:(ARPlaneGeometry *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setClassification:(long long)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(long long)classificationStatus;
-(ARPatchGrid *)gridExtent;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 alignment:(long long)arg3 ;
-(void)setWorldAlignmentRotation:(long long)arg1 ;
-(void)setUncertaintyAlongNormal:(float)arg1 ;
-(long long)worldAlignmentRotation;
-(void)setGridExtent:(ARPatchGrid *)arg1 ;
-(void)setClassificationStatus:(long long)arg1 ;
-(void)setPossibleClassifications:(NSDictionary *)arg1 ;
-(void)setClassificationLabel:(NSString *)arg1 ;
-(id)_hitTestFromOrigin:(BOOL)arg1 withDirection:(BOOL)arg2 ;
-(float)uncertaintyAlongNormal;
-(NSDictionary *)possibleClassifications;
@end

