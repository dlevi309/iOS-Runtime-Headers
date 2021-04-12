/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNHitTestResult : NSObject {

	C3DHitTestResultRef _result;

}

@property (nonatomic,readonly)  simdLocalCoordinates; 
@property (nonatomic,readonly)  simdWorldCoordinates; 
@property (nonatomic,readonly)  simdLocalNormal; 
@property (nonatomic,readonly)  simdWorldNormal; 
@property (nonatomic,readonly) SCD_Struct_SC13 simdModelTransform; 
@property (nonatomic,readonly) SCNNode * node; 
@property (nonatomic,readonly) long long geometryIndex; 
@property (nonatomic,readonly) long long faceIndex; 
@property (nonatomic,readonly) SCNVector3 localCoordinates; 
@property (nonatomic,readonly) SCNVector3 worldCoordinates; 
@property (nonatomic,readonly) SCNVector3 localNormal; 
@property (nonatomic,readonly) SCNVector3 worldNormal; 
@property (nonatomic,readonly) SCNMatrix4 modelTransform; 
@property (nonatomic,readonly) SCNNode * boneNode; 
+(id)hitTestResultsFromHitTestResultRef:(CFArrayRef)arg1 ;
-(id)initWithResult:(C3DHitTestResultRef)arg1 ;
-(SCNNode *)node;
-(id)description;
-(void)dealloc;
-(SCNVector3)worldCoordinates;
-()simdLocalCoordinates;
-()simdWorldCoordinates;
-()simdLocalNormal;
-()simdWorldNormal;
-(CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1 ;
-(long long)geometryIndex;
-(SCNNode *)boneNode;
-(long long)faceIndex;
-(SCNVector3)localCoordinates;
-(SCNVector3)localNormal;
-(SCNVector3)worldNormal;
-(CGPoint)textureCoordinate;
-(SCNMatrix4)modelTransform;
-(SCD_Struct_SC13)simdModelTransform;
@end

