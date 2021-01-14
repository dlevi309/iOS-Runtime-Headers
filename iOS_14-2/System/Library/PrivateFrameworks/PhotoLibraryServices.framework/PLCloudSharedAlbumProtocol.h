/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSDictionary, NSDate, NSOrderedSet, NSNumber;


@protocol PLCloudSharedAlbumProtocol <PLAlbumProtocol>
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSDictionary * cloudMetadata; 
@property (nonatomic,retain) NSString * cloudOwnerFirstName; 
@property (nonatomic,retain) NSString * cloudOwnerLastName; 
@property (nonatomic,retain) NSString * cloudOwnerFullName; 
@property (nonatomic,retain) NSString * cloudOwnerEmail; 
@property (nonatomic,retain) NSString * cloudOwnerHashedPersonID; 
@property (assign,nonatomic) BOOL cloudOwnerIsWhitelisted; 
@property (nonatomic,retain) NSDate * cloudSubscriptionDate; 
@property (nonatomic,retain) NSString * publicURL; 
@property (nonatomic,retain) NSOrderedSet * invitationRecords; 
@property (nonatomic,retain) NSNumber * unseenAssetsCount; 
@property (assign) unsigned long long unseenAssetsCountIntegerValue; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabled; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabledLocal; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabled; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabledLocal; 
@property (nonatomic,retain) NSDate * cloudLastInterestingChangeDate; 
@property (nonatomic,retain) NSDate * cloudCreationDate; 
@property (nonatomic,retain) NSDate * cloudLastContributionDate; 
@property (nonatomic,retain) NSString * cloudPersonID; 
@property (readonly) int cloudRelationshipStateValue; 
@property (readonly) int cloudRelationshipStateLocalValue; 
@property (nonatomic,retain,readonly) NSString * localizedSharedWithLabel; 
@property (nonatomic,retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords; 
@property (nonatomic,retain,readonly) NSDate * cloudFirstRecentBatchDate; 
@property (assign,nonatomic) BOOL cloudNotificationsEnabled; 
@required
-(NSDate *)cloudFirstRecentBatchDate;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
-(NSString *)cloudGUID;
-(BOOL)cloudOwnerIsWhitelisted;
-(void)updateCloudLastContributionDateWithDate:(id)arg1;
-(void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1;
-(unsigned long long)unseenAssetsCountIntegerValue;
-(NSString *)cloudOwnerEmail;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
-(void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(BOOL*)arg3;
-(void)setCloudOwnerEmail:(id)arg1;
-(NSString *)localizedSharedWithLabel;
-(NSOrderedSet *)cloudAlbumSubscriberRecords;
-(int)cloudRelationshipStateValue;
-(int)cloudRelationshipStateLocalValue;
-(void)userDeleteSubscriberRecord:(id)arg1;
-(void)setCloudGUID:(id)arg1;
-(NSDictionary *)cloudMetadata;
-(void)setCloudMetadata:(id)arg1;
-(void)setCloudOwnerLastName:(id)arg1;
-(void)setCloudOwnerFirstName:(id)arg1;
-(NSString *)cloudOwnerFullName;
-(void)setCloudOwnerFullName:(id)arg1;
-(NSString *)cloudOwnerHashedPersonID;
-(void)setCloudOwnerHashedPersonID:(id)arg1;
-(void)setCloudOwnerIsWhitelisted:(BOOL)arg1;
-(NSDate *)cloudSubscriptionDate;
-(void)setPublicURL:(id)arg1;
-(void)setCloudSubscriptionDate:(id)arg1;
-(NSOrderedSet *)invitationRecords;
-(void)setInvitationRecords:(id)arg1;
-(NSNumber *)unseenAssetsCount;
-(void)setUnseenAssetsCount:(id)arg1;
-(NSNumber *)cloudPublicURLEnabled;
-(void)setCloudPublicURLEnabled:(id)arg1;
-(NSNumber *)cloudPublicURLEnabledLocal;
-(void)setCloudPublicURLEnabledLocal:(id)arg1;
-(NSNumber *)cloudMultipleContributorsEnabled;
-(void)setCloudMultipleContributorsEnabled:(id)arg1;
-(NSNumber *)cloudMultipleContributorsEnabledLocal;
-(void)setCloudMultipleContributorsEnabledLocal:(id)arg1;
-(NSDate *)cloudLastInterestingChangeDate;
-(void)setCloudLastInterestingChangeDate:(id)arg1;
-(NSDate *)cloudCreationDate;
-(void)setCloudCreationDate:(id)arg1;
-(NSDate *)cloudLastContributionDate;
-(void)setCloudLastContributionDate:(id)arg1;
-(NSString *)cloudPersonID;
-(void)setCloudPersonID:(id)arg1;
-(BOOL)cloudNotificationsEnabled;
-(void)setCloudNotificationsEnabled:(BOOL)arg1;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
-(NSString *)cloudOwnerFirstName;
-(NSString *)cloudOwnerLastName;
-(NSString *)publicURL;

@end
