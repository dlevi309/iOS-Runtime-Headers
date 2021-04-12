/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableSet, NSMutableDictionary;

@interface CKFetchShareParticipantsOperation : CKOperation {

	/*^block*/id _shareParticipantFetchedBlock;
	/*^block*/id _fetchShareParticipantsCompletionBlock;
	NSArray* _userIdentityLookupInfos;
	NSMutableSet* _discoveredUserIdentities;
	NSMutableDictionary* _lookupErrors;

}

@property (nonatomic,retain) NSMutableSet * discoveredUserIdentities;              //@synthesize discoveredUserIdentities=_discoveredUserIdentities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lookupErrors;                   //@synthesize lookupErrors=_lookupErrors - In the implementation block
@property (nonatomic,copy) NSArray * userIdentityLookupInfos;                      //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id shareParticipantFetchedBlock;                        //@synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock - In the implementation block
@property (nonatomic,copy) id fetchShareParticipantsCompletionBlock;               //@synthesize fetchShareParticipantsCompletionBlock=_fetchShareParticipantsCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithUserIdentityLookupInfos:(id)arg1 ;
-(void)setShareParticipantFetchedBlock:(id)arg1 ;
-(void)setFetchShareParticipantsCompletionBlock:(id)arg1 ;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(id)shareParticipantFetchedBlock;
-(id)fetchShareParticipantsCompletionBlock;
-(NSMutableSet *)discoveredUserIdentities;
-(NSMutableDictionary *)lookupErrors;
-(void)setDiscoveredUserIdentities:(NSMutableSet *)arg1 ;
-(void)setLookupErrors:(NSMutableDictionary *)arg1 ;
@end

