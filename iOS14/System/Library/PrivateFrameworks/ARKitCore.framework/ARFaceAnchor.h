/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARAnchor.h>
#import <ARKitCore/ARTrackable.h>

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
-(SCD_Struct_AR1)_avt_rawTransform;
-(float)_avt_rawBlendShapeAtLocation:(id)arg1 ;
-(ARFaceGeometry *)geometry;
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSDictionary *)blendShapes;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTracked;
-()lookAtPoint;
-(ARFaceTrackingData *)trackingData;
-(const 1*)imageVertices;
-(SCD_Struct_AR1)leftEyeTransform;
-(SCD_Struct_AR1)rightEyeTransform;
-(1)gazePoint;
-(NSError *)trackingError;
-(id)initWithIdentifier:(id)arg1 trackingData:(id)arg2 ;
-(id)initWithExistingFaceAnchor:(id)arg1 tracked:(BOOL)arg2 trackingError:(id)arg3 ;
-(void)setIsTracked:(BOOL)arg1 ;
-(BOOL)isEqualToFaceAnchor:(id)arg1 ;
-(void)setTrackingData:(ARFaceTrackingData *)arg1 ;
-(void)setTrackingError:(NSError *)arg1 ;
@end

