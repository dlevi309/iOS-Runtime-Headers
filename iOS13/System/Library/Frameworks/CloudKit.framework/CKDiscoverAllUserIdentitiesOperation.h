/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSMutableDictionary;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation {

	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverAllUserIdentitiesCompletionBlock;
	NSMutableDictionary* _identityToContactIdentifiers;

}

@property (nonatomic,retain) NSMutableDictionary * identityToContactIdentifiers;              //@synthesize identityToContactIdentifiers=_identityToContactIdentifiers - In the implementation block
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                                    //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverAllUserIdentitiesCompletionBlock;                       //@synthesize discoverAllUserIdentitiesCompletionBlock=_discoverAllUserIdentitiesCompletionBlock - In the implementation block
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(void)setDiscoverAllUserIdentitiesCompletionBlock:(id)arg1 ;
-(id)discoverAllUserIdentitiesCompletionBlock;
-(NSMutableDictionary *)identityToContactIdentifiers;
-(id)userIdentityDiscoveredBlock;
-(void)setIdentityToContactIdentifiers:(NSMutableDictionary *)arg1 ;
@end

