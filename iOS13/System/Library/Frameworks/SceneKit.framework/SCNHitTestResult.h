/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(SCNNode *)node;
-(long long)faceIndex;
-(id)initWithResult:(C3DHitTestResultRef)arg1 ;
-(SCNVector3)worldCoordinates;
-()simdLocalCoordinates;
-()simdWorldCoordinates;
-()simdLocalNormal;
-()simdWorldNormal;
-(CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1 ;
-(long long)geometryIndex;
-(SCNNode *)boneNode;
-(SCNVector3)localCoordinates;
-(SCNVector3)localNormal;
-(SCNVector3)worldNormal;
-(CGPoint)textureCoordinate;
-(SCNMatrix4)modelTransform;
-(SCD_Struct_SC13)simdModelTransform;
@end

