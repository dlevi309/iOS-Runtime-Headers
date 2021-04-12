/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation {

	/*^block*/id _discoverUserIdentitiesProgressBlock;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,retain) NSArray * userIdentityLookupInfos;                 //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id discoverUserIdentitiesProgressBlock;              //@synthesize discoverUserIdentitiesProgressBlock=_discoverUserIdentitiesProgressBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(void)setDiscoverUserIdentitiesProgressBlock:(id)arg1 ;
-(id)discoverUserIdentitiesProgressBlock;
-(void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3 ;
-(void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

