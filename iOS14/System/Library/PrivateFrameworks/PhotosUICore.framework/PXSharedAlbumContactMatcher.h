/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class CNContactStore, NSCache;

@interface PXSharedAlbumContactMatcher : NSObject {

	CNContactStore* _contactStore;
	NSCache* _avatarRendererByContactImageDiameter;
	NSCache* _contactIdentifiersBySubscriberIdentifiers;
	NSCache* _contactPhotosCache;

}
+(id)sharedMatcher;
-(id)contactsMatchingSubscriberInfos:(id)arg1 keysToFetch:(id)arg2 ;
-(void)requestContactPhotoForContact:(id)arg1 diameter:(double)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)_observeContactStoreNotifications;
-(id)_fetchContactMatchingIdentifier:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_fetchContactsMatchingIdentifiers:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_fetchContactMatchingSubscriberInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(void)contactsDidChange:(id)arg1 ;
@end

