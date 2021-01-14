/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARSceneReconstructionDelegate <NSObject>
@required
-(void)sceneReconstructionHandler:(id)arg1 didOutputMeshList:(const CV3DReconMeshListRef)arg2 withTimestamp:(double)arg3;
-(void)sceneReconstructionHandler:(id)arg1 didFailWithError:(id)arg2;

@end

