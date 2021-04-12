/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class FBWorkspace, FBSSceneDefinition, FBSSceneParameters, NSObject, BSSimpleAssertion, BSAtomicSignal, FBSSceneClientSettings, FBSSceneSettings, NSString;

@interface FBSceneRemnant : NSObject <BSInvalidatable> {

	FBWorkspace* _workspace;
	FBSSceneDefinition* _definition;
	FBSSceneParameters* _parameters;
	NSObject*<OS_dispatch_queue> _assertionQueue;
	BSSimpleAssertion* _assertion;
	BSAtomicSignal* _invalidated;

}

@property (nonatomic,__weak,readonly) FBWorkspace * _workspace;                            //@synthesize workspace=_workspace - In the implementation block
@property (getter=_hasBeenInvalidated,nonatomic,readonly) BOOL _invalidated; 
@property (nonatomic,copy,readonly) FBSSceneClientSettings * _clientSettings; 
@property (nonatomic,readonly) BSSimpleAssertion * _assertion;                             //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneDefinition * definition;                       //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSettings * lastSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BSSimpleAssertion *)_assertion;
-(NSString *)description;
-(FBSSceneClientSettings *)_clientSettings;
-(FBWorkspace *)_workspace;
-(FBSSceneDefinition *)definition;
-(void)invalidate;
-(void)dealloc;
-(FBSSceneSettings *)lastSettings;
-(id)_initWithIdentity:(id)arg1 client:(id)arg2 workspace:(id)arg3 parameters:(id)arg4 assertionQueue:(id)arg5 assertion:(id)arg6 ;
-(BOOL)_hasBeenInvalidated;
@end

