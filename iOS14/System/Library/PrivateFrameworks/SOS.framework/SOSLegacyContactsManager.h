/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/


@class FKFriendsManager;

@interface SOSLegacyContactsManager : NSObject {

	FKFriendsManager* _friendsManager;

}

@property (nonatomic,retain) FKFriendsManager * friendsManager;              //@synthesize friendsManager=_friendsManager - In the implementation block
@property (nonatomic,readonly) BOOL SOSLegacyContactsExist; 
+(id)contactStore;
+(BOOL)authorizedToUseContactStore;
+(void)preloadContactStoreIfNecessary;
-(id)init;
-(void)contactStoreDidChange;
-(id)SOSLegacyContacts;
-(void)dealloc;
-(BOOL)SOSLegacyContactsExist;
-(id)_SOSFriends;
-(id)_SOSDestinationsForFriend:(id)arg1 ;
-(id)_SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2 ;
-(id)_contactFromFriend:(id)arg1 ;
-(id)SOSLegacyContactsDestinations;
-(FKFriendsManager *)friendsManager;
-(void)setFriendsManager:(FKFriendsManager *)arg1 ;
@end

