/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, AAUIProfilePictureStore, NSString;

@interface ASKProfilePictureStore : NSObject {

	BOOL _hasRequestedImages;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	ACAccountStore* _accountStore;
	AAUIProfilePictureStore* _profilePictureStore;
	NSString* _primaryAccountName;
	NSString* _storeAccountName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                    //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                               //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) AAUIProfilePictureStore * profilePictureStore;               //@synthesize profilePictureStore=_profilePictureStore - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountName;                                 //@synthesize primaryAccountName=_primaryAccountName - In the implementation block
@property (nonatomic,copy) NSString * storeAccountName;                                   //@synthesize storeAccountName=_storeAccountName - In the implementation block
@property (assign) BOOL hasRequestedImages;                                               //@synthesize hasRequestedImages=_hasRequestedImages - In the implementation block
+(id)sharedStore;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_markAsHasRequestedImages;
-(void)storeAccountsDidChange:(id)arg1 ;
-(void)configureProfilePictureStoreAndNotifyIfNeeded;
-(NSString *)primaryAccountName;
-(BOOL)hasRequestedImages;
-(id)init;
-(void)setPrimaryAccountName:(NSString *)arg1 ;
-(void)profilePictureWithMonogramFallbackForFamilyMember:(id)arg1 pictureDiameter:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProfilePictureStore:(AAUIProfilePictureStore *)arg1 ;
-(void)profilePictureForAccountOwnerWithoutMonogramFallbackWithPictureDiameter:(double)arg1 completion:(/*^block*/id)arg2 ;
-(ACAccountStore *)accountStore;
-(id)_profilePictureForFamilyMember:(id)arg1 withProfilePictureStore:(id)arg2 usingMonogrammer:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)appleAccountsDidChange:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)profilePictureStoreDidChange:(id)arg1 ;
-(void)setHasRequestedImages:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)notifyIfNeeded;
-(void)_updateMonogrammerWithDiameter:(double)arg1 ;
-(void)setStoreAccountName:(NSString *)arg1 ;
-(void)profilePictureWithMonogramFallbackForFamilyMembers:(id)arg1 pictureDiameter:(double)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)storeAccountName;
-(AAUIProfilePictureStore *)profilePictureStore;
-(void)dealloc;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

