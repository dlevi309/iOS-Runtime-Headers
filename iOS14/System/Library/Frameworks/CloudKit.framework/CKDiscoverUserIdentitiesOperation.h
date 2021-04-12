/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKDiscoverUserIdentitiesOperationCallbacks.h>

@class NSArray, CKDiscoverUserIdentitiesOperationInfo;

@interface CKDiscoverUserIdentitiesOperation : CKOperation <CKDiscoverUserIdentitiesOperationCallbacks> {

	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverUserIdentitiesCompletionBlock;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,readonly) id<CKDiscoverUserIdentitiesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKDiscoverUserIdentitiesOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * userIdentityLookupInfos;                                                            //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                                                               //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverUserIdentitiesCompletionBlock;                                                     //@synthesize discoverUserIdentitiesCompletionBlock=_discoverUserIdentitiesCompletionBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(id)discoverUserIdentitiesCompletionBlock;
-(void)handleUserIdentityDiscoveryForLookupInfo:(id)arg1 userIdentity:(id)arg2 ;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(id)initWithUserIdentityLookupInfos:(id)arg1 ;
-(void)setDiscoverUserIdentitiesCompletionBlock:(id)arg1 ;
-(id)userIdentityDiscoveredBlock;
@end

