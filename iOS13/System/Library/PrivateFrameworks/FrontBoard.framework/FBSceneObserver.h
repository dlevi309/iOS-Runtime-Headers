/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBSceneDelegate.h>

@protocol FBSceneObserver;
@class NSString;

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneObserver, FBSceneDelegate> {

	id<FBSceneObserver> _observer;
	unsigned long long _observerAddress;
	Class _observerClass;
	BOOL _isDelegate;
	struct {
		BOOL contentStateDidChange;
		BOOL updatePrepared;
		BOOL updateApplied;
		BOOL updateCompleted;
		BOOL clientSettingsUpdated;
		BOOL didInvalidate;
	}  _observerFlags;
	struct {
		BOOL clientSettingsUpdated;
		BOOL didReceiveActions;
	}  _delegateFlags;

}

@property (nonatomic,__weak,readonly) id<FBSceneObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSceneDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<FBSceneObserver>)observer;
-(id<FBSceneDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2 ;
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2 ;
-(void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id)_initWithObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(BOOL)isDelegate;
@end

