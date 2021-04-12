/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSChatSuggestControllerProtocol.h>

@protocol BCSItemRemoteFetching, BCSUserDefaultsProviding, BCSIdentityServiceProtocol, BCSLocaleHelperProtocol;
@class BCSBusinessItemPersistentStore, NSString;

@interface BCSChatSuggestController : NSObject <BCSChatSuggestControllerProtocol> {

	BCSBusinessItemPersistentStore* _businessItemPersistentStore;
	id<BCSItemRemoteFetching> _itemRemoteFetcher;
	id<BCSUserDefaultsProviding> _userDefaults;
	id<BCSIdentityServiceProtocol> _identityService;
	id<BCSLocaleHelperProtocol> _localeHelper;

}

@property (nonatomic,readonly) BCSBusinessItemPersistentStore * businessItemPersistentStore;              //@synthesize businessItemPersistentStore=_businessItemPersistentStore - In the implementation block
@property (nonatomic,readonly) id<BCSItemRemoteFetching> itemRemoteFetcher;                               //@synthesize itemRemoteFetcher=_itemRemoteFetcher - In the implementation block
@property (nonatomic,readonly) id<BCSUserDefaultsProviding> userDefaults;                                 //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) id<BCSIdentityServiceProtocol> identityService;                            //@synthesize identityService=_identityService - In the implementation block
@property (nonatomic,readonly) id<BCSLocaleHelperProtocol> localeHelper;                                  //@synthesize localeHelper=_localeHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BCSUserDefaultsProviding>)userDefaults;
-(id<BCSItemRemoteFetching>)itemRemoteFetcher;
-(id)initWithBusinessItemPersistentStore:(id)arg1 itemRemoteFetcher:(id)arg2 userDefaults:(id)arg3 identityService:(id)arg4 localeHelper:(id)arg5 ;
-(BOOL)chatSuggestVisibilityForBusinessItem:(id)arg1 ;
-(id<BCSIdentityServiceProtocol>)identityService;
-(void)fetchBusinessItemWithBizID:(id)arg1 TTL:(double)arg2 forClientBundleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id<BCSLocaleHelperProtocol>)localeHelper;
-(BCSBusinessItemPersistentStore *)businessItemPersistentStore;
-(BOOL)_deleteBusinessItemIfExpiredWithBusinessItemObject:(id)arg1 ;
-(BOOL)_deleteBusinessItemFromPersistentStore;
@end

