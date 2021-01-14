/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKDiscoverAllUserIdentitiesOperationCallbacks.h>

@class NSMutableDictionary, CKDiscoverUserIdentitiesOperationInfo;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation <CKDiscoverAllUserIdentitiesOperationCallbacks> {

	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverAllUserIdentitiesCompletionBlock;
	NSMutableDictionary* _identityToContactIdentifiers;

}

@property (nonatomic,retain) NSMutableDictionary * identityToContactIdentifiers;                                            //@synthesize identityToContactIdentifiers=_identityToContactIdentifiers - In the implementation block
@property (nonatomic,readonly) id<CKDiscoverAllUserIdentitiesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKDiscoverUserIdentitiesOperationInfo * operationInfo; 
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                                                                  //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverAllUserIdentitiesCompletionBlock;                                                     //@synthesize discoverAllUserIdentitiesCompletionBlock=_discoverAllUserIdentitiesCompletionBlock - In the implementation block
+(Class)operationInfoClass;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(void)setDiscoverAllUserIdentitiesCompletionBlock:(id)arg1 ;
-(id)discoverAllUserIdentitiesCompletionBlock;
-(NSMutableDictionary *)identityToContactIdentifiers;
-(id)userIdentityDiscoveredBlock;
-(void)handleUserIdentityDiscovery:(id)arg1 ;
-(void)setIdentityToContactIdentifiers:(NSMutableDictionary *)arg1 ;
@end

