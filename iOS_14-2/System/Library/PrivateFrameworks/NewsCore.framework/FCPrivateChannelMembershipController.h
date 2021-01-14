/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(BOOL)requiresPushNotificationSupport;
+(id)backingRecordIDs;
+(BOOL)requiresHighPriorityFirstSync;
+(id)desiredKeys;
+(id)backingRecordZoneIDs;
+(unsigned long long)localStoreVersion;
+(long long)commandQueueUrgency;
+(id)localStoreFilename;
+(id)commandStoreFileName;
+(BOOL)requiresBatchedSync;
-(void)addObserver:(id)arg1 ;
-(void)refreshPublicMemberships;
-(void)isAllowedToSeeIssueID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setMembershipsByChannelID:(NSDictionary *)arg1 ;
-(id)feedDescriptorForDraftFeedForChannel:(id)arg1 ;
-(NSMutableSet *)membershipReferences;
-(BOOL)isAllowedToSeeDraftsForChannelID:(id)arg1 ;
-(void)changedMembershipsFrom:(id)arg1 toMemberships:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(id)membershipChannelIDs;
-(void)setMembershipReferences:(NSMutableSet *)arg1 ;
-(void)addItem:(id)arg1 toStore:(BOOL)arg2 ;
-(void)fetchMembershipsWithIDs:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)_refreshPublicMembershipsWithCompletion:(/*^block*/id)arg1 ;
-(void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)membershipsByChannelID;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)_fetchPrivateChannelMembershipsWithCompletion:(/*^block*/id)arg1 ;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(void)removeItemWithItemID:(id)arg1 ;
-(id)referenceToMembershipForMembershipID:(id)arg1 ;
-(BOOL)isMemberOfChannelID:(id)arg1 ;
-(BOOL)hasMemberships;
-(BOOL)shouldShowAllDraftContent;
-(void)dealloc;
@end

