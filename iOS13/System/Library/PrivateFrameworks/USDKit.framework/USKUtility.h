/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


#import <USDKit/USDKit-Structs.h>
@interface USKUtility : NSObject
+(id)constantMaterialPropertiesWithMaterial:(id)arg1 ;
+(id)shaderNodeType:(id)arg1 ;
+(id)targetPropertyWithProperty:(id)arg1 ;
+(BOOL)isSceneGraphNode:(id)arg1 ;
+(BOOL)isTransformNode:(id)arg1 ;
+(SCD_Struct_US19)localTransformWithNode:(id)arg1 time:(double)arg2 ;
+(id)transformKeyTimesWithNode:(id)arg1 ;
+(id)meshGroupsWithNode:(id)arg1 ;
+(id)firstUVMeshAttributeNameInMaterial:(id)arg1 ;
+(id)USDPreviewSurfaceDefaults;
+(id)textureMaterialPropertiesWithMaterial:(id)arg1 ;
+(void)setLocalTransformWithNode:(id)arg1 transform:(SCD_Struct_US19)arg2 time:(double)arg3 ;
+(BOOL)isShaderOutputProperty:(id)arg1 ;
+(id)bufferMaterialPropertiesWithMaterial:(id)arg1 ;
+(id)meshUniqueAndTriangulate:(id)arg1 names:(id)arg2 ;
@end

