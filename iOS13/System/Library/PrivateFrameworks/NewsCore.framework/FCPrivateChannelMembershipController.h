/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@class NSDictionary, NSMutableSet, NSString;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {

	NSDictionary* _membershipsByChannelID;
	NSMutableSet* _membershipReferences;

}

@property (nonatomic,retain) NSDictionary * membershipsByChannelID;              //@synthesize membershipsByChannelID=_membershipsByChannelID - In the implementation block
@property (nonatomic,retain) NSMutableSet * membershipReferences;                //@synthesize membershipReferences=_membershipReferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(BOOL)shouldShowAllDraftContent;
-(void)isAllowedToSeeIssueID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)membershipsByChannelID;
-(BOOL)isAllowedToSeeDraftsForChannelID:(id)arg1 ;
-(void)_fetchPrivateChannelMembershipsWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableSet *)membershipReferences;
-(void)addItem:(id)arg1 toStore:(BOOL)arg2 ;
-(void)setMembershipsByChannelID:(NSDictionary *)arg1 ;
-(void)refreshPublicMemberships;
-(void)setMembershipReferences:(NSMutableSet *)arg1 ;
-(id)referenceToMembershipForMembershipID:(id)arg1 ;
-(void)removeItemWithItemID:(id)arg1 ;
-(void)_refreshPublicMembershipsWithCompletion:(/*^block*/id)arg1 ;
-(void)changedMembershipsFrom:(id)arg1 toMemberships:(id)arg2 ;
-(void)fetchMembershipsWithIDs:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isMemberOfChannelID:(id)arg1 ;
-(id)feedDescriptorForDraftFeedForChannel:(id)arg1 ;
-(void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)hasMemberships;
-(id)membershipChannelIDs;
@end

