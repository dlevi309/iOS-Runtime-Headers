/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class FBWorkspaceIdentity, RBSProcessHandle, BSSimpleAssertion, NSSet, NSString;

@interface FBWorkspaceEventDispatcherRegistration : NSObject <BSInvalidatable> {

	FBWorkspaceIdentity* _identity;
	RBSProcessHandle* _processHandle;
	BSSimpleAssertion* _underlyingAssertion;
	os_unfair_lock_s _lock;
	NSSet* _lock_remnants;

}

@property (nonatomic,copy,readonly) FBWorkspaceIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) RBSProcessHandle * processHandle;                 //@synthesize processHandle=_processHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(FBWorkspaceIdentity *)identity;
-(RBSProcessHandle *)processHandle;
-(id)_initWithIdentity:(id)arg1 processHandle:(id)arg2 underlyingAssertion:(id)arg3 ;
-(id)consumeRemnantsPassingTest:(/*^block*/id)arg1 ;
-(void)noteHandshakeWithRemnants:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

