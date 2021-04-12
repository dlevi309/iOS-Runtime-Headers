/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)contactStoreDidChange;
-(id)SOSLegacyContacts;
-(id)_SOSFriends;
-(id)_SOSDestinationsForFriend:(id)arg1 ;
-(id)_SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2 ;
-(id)_contactFromFriend:(id)arg1 ;
-(BOOL)SOSLegacyContactsExist;
-(id)SOSLegacyContactsDestinations;
-(FKFriendsManager *)friendsManager;
-(void)setFriendsManager:(FKFriendsManager *)arg1 ;
@end

