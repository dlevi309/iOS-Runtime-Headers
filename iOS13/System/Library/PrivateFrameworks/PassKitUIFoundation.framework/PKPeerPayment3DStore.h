/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <libobjc.A.dylib/PKMotionManagerClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSCache, SCNMaterial, NSObject, NSMutableArray, PKMotionManager, NSString;

@interface PKPeerPayment3DStore : NSObject <PKMotionManagerClientProtocol> {

	NSCache* _cache;
	SCNMaterial* _textMaterial;
	NSObject*<OS_dispatch_queue> _scenesQueue;
	NSObject*<OS_dispatch_queue> _sceneLoadingQueue;
	NSMutableArray* _activeScenes;
	SCD_Struct_PK0 _rotationMatrix;
	 _skew;
	 _lastRollPitch;
	SCD_Struct_PK0 _staticRotationMatrix;
	 _staticSkew;
	PKMotionManager* _motionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(id)material;
-(void)newSceneWithCompletion:(/*^block*/id)arg1 synchronously:(BOOL)arg2 ;
-(void)relinquishScene:(id)arg1 ;
-(void)charactersForText:(id)arg1 completion:(/*^block*/id)arg2 synchronously:(BOOL)arg3 ;
-(void)sceneDidBecomeInactive:(id)arg1 ;
-(void)setRollPitch:;
-(id)nodeForCharacter:(id)arg1 ;
-(void)motionManager:(id)arg1 didReceiveMotion:(id)arg2 ;
@end

