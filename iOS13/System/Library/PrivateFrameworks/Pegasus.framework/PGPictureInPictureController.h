/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PGPictureInPictureRemoteObjectDelegate.h>

@protocol OS_dispatch_queue, PGPictureInPictureControllerDelegate;
@class NSMutableSet, NSXPCListener, NSObject, PGPictureInPictureRemoteObject, NSSet, PGPictureInPictureApplication, NSString;

@interface PGPictureInPictureController : NSObject <NSXPCListenerDelegate, PGPictureInPictureRemoteObjectDelegate> {

	NSMutableSet* _pictureInPictureRemoteObjects;
	NSMutableSet* _pictureInPictureRemoteObjectsSupportingActiveSessionCancellationOnStart;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _listenerQueue;
	PGPictureInPictureRemoteObject* _activePictureInPictureRemoteObject;
	PGPictureInPictureRemoteObject* _suspendedPictureInPictureRemoteObject;
	id<PGPictureInPictureControllerDelegate> _delegate;
	SCD_Struct_PG0 _delegateRespondsTo;
	BOOL _pictureInPictureActive;
	NSSet* _pictureInPictureApplications;
	PGPictureInPictureApplication* _activePictureInPictureApplication;

}

@property (getter=isPictureInPictureActive,nonatomic,readonly) BOOL pictureInPictureActive;                    //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (nonatomic,readonly) NSSet * pictureInPictureApplications;                                           //@synthesize pictureInPictureApplications=_pictureInPictureApplications - In the implementation block
@property (nonatomic,readonly) PGPictureInPictureApplication * activePictureInPictureApplication;              //@synthesize activePictureInPictureApplication=_activePictureInPictureApplication - In the implementation block
@property (nonatomic,readonly) BOOL isStartingStoppingOrCancellingPictureInPicture; 
@property (nonatomic,readonly) BOOL isStoppingPictureInPictureForAlert; 
@property (assign,nonatomic,__weak) id<PGPictureInPictureControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPictureInPictureSupported;
-(id)init;
-(void)dealloc;
-(id<PGPictureInPictureControllerDelegate>)delegate;
-(void)setDelegate:(id<PGPictureInPictureControllerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)isPictureInPictureActive;
-(BOOL)isStartingStoppingOrCancellingPictureInPicture;
-(BOOL)_pictureInPictureRemoteObjectIsFaceTime:(id)arg1 ;
-(CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 ;
-(CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 ;
-(BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 ;
-(void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 ;
-(id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_remoteObjectThatCanStopPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_remoteObjectThatCanCancelPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)pictureInPictureInterruptionBegan;
-(void)pictureInPictureInterruptionEnded;
-(id)_remoteObjectsForPictureInPictureApplication:(id)arg1 ;
-(id)_remoteObjectForPictureInPictureApplication:(id)arg1 passingTest:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1 ;
-(BOOL)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(id)arg1 ;
-(BOOL)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(id)arg1 ;
-(void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 didHidePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2 ;
-(BOOL)isStoppingPictureInPictureForAlert;
-(CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 ;
-(CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 ;
-(BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1 ;
-(void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopPictureInPictureForApplication:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelPictureInPictureForApplication:(id)arg1 ;
-(NSSet *)pictureInPictureApplications;
-(PGPictureInPictureApplication *)activePictureInPictureApplication;
@end

