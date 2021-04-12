/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchor.h>
#import <ARKit/ARTrackable.h>

@class NSDictionary, ARFaceGeometry, ARFaceTrackingData, NSError, NSString;

@interface ARFaceAnchor : ARAnchor <ARTrackable> {

	NSDictionary* _blendShapeCoefficientsDictionary;
	BOOL _isTracked;
	ARFaceGeometry* _geometry;
	ARFaceTrackingData* _trackingData;
	NSError* _trackingError;

}

@property (nonatomic,retain) ARFaceTrackingData * trackingData;               //@synthesize trackingData=_trackingData - In the implementation block
@property (assign,nonatomic) BOOL isTracked;                                  //@synthesize isTracked=_isTracked - In the implementation block
@property (nonatomic,retain) NSError * trackingError;                         //@synthesize trackingError=_trackingError - In the implementation block
@property (nonatomic,readonly) ARFaceGeometry * geometry;                     //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 leftEyeTransform; 
@property (nonatomic,readonly) SCD_Struct_AR1 rightEyeTransform; 
@property (nonatomic,readonly)  lookAtPoint; 
@property (nonatomic,readonly) NSDictionary * blendShapes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)blendShapeToMirroredBlendShapeMapping;
+(id)blendShapeMapping;
+(id)mirroredBlendShapeMapping;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(ARFaceGeometry *)geometry;
-(ARFaceTrackingData *)trackingData;
-(const 1*)imageVertices;
-(SCD_Struct_AR1)leftEyeTransform;
-(SCD_Struct_AR1)rightEyeTransform;
-(1)gazePoint;
-(NSError *)trackingError;
-(id)initWithIdentifier:(id)arg1 trackingData:(id)arg2 ;
-(BOOL)isTracked;
-(id)initWithExistingFaceAnchor:(id)arg1 tracked:(BOOL)arg2 trackingError:(id)arg3 ;
-(NSDictionary *)blendShapes;
-()lookAtPoint;
-(void)setIsTracked:(BOOL)arg1 ;
-(BOOL)isEqualToFaceAnchor:(id)arg1 ;
-(void)setTrackingData:(ARFaceTrackingData *)arg1 ;
-(void)setTrackingError:(NSError *)arg1 ;
@end

