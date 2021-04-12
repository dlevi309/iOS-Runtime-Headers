/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@protocol MTLDevice;
@class NSArray, NSString;

@interface ARSpatialMappingResultData : NSObject <ARResultData> {

	BOOL _empty;
	NSArray* _meshChunks;
	CV3DReconMeshListRef _meshList;
	unsigned long long _sceneReconstruction;
	double _timestamp;
	id<MTLDevice> _mtlDevice;

}

@property (nonatomic,retain) NSArray * meshChunks;                                //@synthesize meshChunks=_meshChunks - In the implementation block
@property (assign,nonatomic) CV3DReconMeshListRef meshList;                       //@synthesize meshList=_meshList - In the implementation block
@property (assign,nonatomic) unsigned long long sceneReconstruction;              //@synthesize sceneReconstruction=_sceneReconstruction - In the implementation block
@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                           //@synthesize empty=_empty - In the implementation block
@property (nonatomic,retain) id<MTLDevice> mtlDevice;                             //@synthesize mtlDevice=_mtlDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emptyResultData;
-(double)timestamp;
-(id<MTLDevice>)mtlDevice;
-(BOOL)isEmpty;
-(void)setTimestamp:(double)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(void)dealloc;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(unsigned long long)sceneReconstruction;
-(void)setSceneReconstruction:(unsigned long long)arg1 ;
-(id)initWithMeshList:(CV3DReconMeshListRef)arg1 sceneReconstruction:(unsigned long long)arg2 timestamp:(double)arg3 ;
-(NSArray *)meshChunks;
-(id)anchorsFromMeshListForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(id)anchorsFromMeshChunksForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(id)initWithMeshChunks:(id)arg1 ;
-(void)updateSemanticsFromSamplingData:(CFDataRef)arg1 ;
-(void)setMeshChunks:(NSArray *)arg1 ;
-(CV3DReconMeshListRef)meshList;
-(void)setMeshList:(CV3DReconMeshListRef)arg1 ;
-(void)setMtlDevice:(id<MTLDevice>)arg1 ;
@end

