/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/


@class _TtC3VFX8VFXScene;

@interface VFXREScene : NSObject {

	 scene;
	 transientDrawCall;
	 rootEntity;
	 cameraEntity;
	 device;
	 lock;
	 remappingTable;

}

@property (retain,nonatomic) _TtC3VFX8VFXScene * scene; 
@property (retain,nonatomic) id transientDrawCall; 
@property (readonly,nonatomic) void* opaqueECS; 
@property (readonly,nonatomic) float deltaTime; 
-(void)clear;
-(_TtC3VFX8VFXScene *)scene;
-(void)tick;
-(void)setScene:(_TtC3VFX8VFXScene *)arg1 ;
-(id)init;
-(float)deltaTime;
-(id)transientDrawCall;
-(void)setTransientDrawCall:(id)arg1 ;
-(void*)opaqueECS;
-(id)initWithDevice:(id)arg1 model:(id)arg2 ;
-(id)initWithDevice:(id)arg1 contentsOf:(id)arg2 error:(id*)arg3 ;
-(id)generateMaterialsAndReturnError:(id*)arg1 ;
-(void)copyBindingValueWithObjectName:(id)arg1 bindingName:(id)arg2 action:(long long)arg3 storageGetterBlock:(/*^block*/id)arg4 ;
-(/*^block*/id)recycleBuffersGetCompletion;
-(void)setRootEntityTransform:::;
-(void)setCameraEntityTransformProjection:::::::;
@end

