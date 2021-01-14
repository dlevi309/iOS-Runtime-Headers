/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBApplicationUpdateScenesTransactionObserver.h>

@protocol BSInvalidatable;
@class FBSSceneDefinition, FBApplicationUpdateScenesTransaction, FBSSceneParameters, FBSSceneTransitionContext, NSString;

@interface FBSceneCreator : NSObject <FBApplicationUpdateScenesTransactionObserver> {

	FBSSceneDefinition* _definition;
	/*^block*/id _configurator;
	FBApplicationUpdateScenesTransaction* _transaction;
	id<BSInvalidatable> _captureToken;
	BOOL _executed;
	BOOL _invalidated;
	FBSSceneParameters* _parameters;
	FBSSceneTransitionContext* _transitionContext;

}

@property (nonatomic,copy) FBSSceneParameters * parameters;                              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSSceneParameters *)parameters;
-(void)setParameters:(FBSSceneParameters *)arg1 ;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(void)interrupt;
-(FBSSceneTransitionContext *)transitionContext;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2 ;
-(void)invalidate;
-(id)initWithDefinition:(id)arg1 configuration:(/*^block*/id)arg2 ;
-(void)executeWithCompletion:(/*^block*/id)arg1 ;
@end

