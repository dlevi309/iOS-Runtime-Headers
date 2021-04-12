/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PLCloudSharedAlbumInvitationRecord, NSString;

@interface PXSharedAlbumSubscriberInfo : NSObject {

	BOOL _isOwner;
	PLCloudSharedAlbumInvitationRecord* _invitationRecord;
	NSString* _identifier;
	NSString* _email;
	NSString* _phone;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;

}

@property (nonatomic,retain,readonly) PLCloudSharedAlbumInvitationRecord * invitationRecord;              //@synthesize invitationRecord=_invitationRecord - In the implementation block
@property (nonatomic,readonly) BOOL isOwner;                                                              //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * email;                                                          //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * phone;                                                          //@synthesize phone=_phone - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                                                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                                                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                                    //@synthesize displayName=_displayName - In the implementation block
+(id)allSubscribersForAlbumWithObjectID:(id)arg1 includingCurrentUser:(BOOL)arg2 managedObjectContext:(id)arg3 ;
+(id)allSubscribersForAlbum:(id)arg1 ;
+(id)_allSubscribersForAlbum:(id)arg1 includeMyself:(BOOL)arg2 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)contactStore;
-(id)init;
-(PLCloudSharedAlbumInvitationRecord *)invitationRecord;
-(id)initWithInvitationRecord:(id)arg1 identifier:(id)arg2 email:(id)arg3 phone:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 displayName:(id)arg7 isOwner:(BOOL)arg8 ;
-(id)matchingContactWithKeysToFetch:(id)arg1 outMatchingKey:(id*)arg2 outMatchingIdentifier:(id*)arg3 ;
-(NSString *)phone;
-(BOOL)isOwner;
-(NSString *)identifier;
-(NSString *)email;
-(NSString *)displayName;
@end

