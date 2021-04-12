/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSScene.h>
#import <libobjc.A.dylib/FBSSceneDelegate.h>
#import <libobjc.A.dylib/FBSSceneUpdaterDelegate.h>

@protocol FBSSceneDelegate;
@class FBSSceneImpl, NSString;

@interface _FBSImplicitWindowScene : FBSScene <FBSSceneDelegate, FBSSceneUpdaterDelegate> {

	FBSSceneImpl* _scene;
	id<FBSSceneDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)identifier;
-(id)layers;
-(id)settings;
-(id)identityToken;
-(id)specification;
-(void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)clientSettings;
-(void)detachContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)sendActions:(id)arg1 ;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(id)snapshotRequest;
-(id)_initWithSceneImpl:(id)arg1 ;
@end

