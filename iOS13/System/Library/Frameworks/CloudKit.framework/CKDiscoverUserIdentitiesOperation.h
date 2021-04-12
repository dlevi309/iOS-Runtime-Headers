/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKDiscoverUserIdentitiesOperation : CKOperation {

	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverUserIdentitiesCompletionBlock;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,copy) NSArray * userIdentityLookupInfos;                     //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                        //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverUserIdentitiesCompletionBlock;              //@synthesize discoverUserIdentitiesCompletionBlock=_discoverUserIdentitiesCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(id)initWithUserIdentityLookupInfos:(id)arg1 ;
-(void)setDiscoverUserIdentitiesCompletionBlock:(id)arg1 ;
-(id)userIdentityDiscoveredBlock;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(id)discoverUserIdentitiesCompletionBlock;
@end

