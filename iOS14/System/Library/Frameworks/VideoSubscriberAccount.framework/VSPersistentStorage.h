/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class VSAccountStore, VSAccountChannelsCenter, VSPrivacyVoucherLockbox, VSPrivacyFacade;

@interface VSPersistentStorage : NSObject {

	VSAccountStore* _accountStore;
	VSAccountChannelsCenter* _channelsCenter;
	VSPrivacyVoucherLockbox* _voucherLockbox;
	VSPrivacyFacade* _privacyFacade;

}

@property (nonatomic,readonly) VSAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) VSAccountChannelsCenter * channelsCenter;              //@synthesize channelsCenter=_channelsCenter - In the implementation block
@property (nonatomic,readonly) VSPrivacyVoucherLockbox * voucherLockbox;              //@synthesize voucherLockbox=_voucherLockbox - In the implementation block
@property (nonatomic,readonly) VSPrivacyFacade * privacyFacade;                       //@synthesize privacyFacade=_privacyFacade - In the implementation block
+(id)defaultStorageDirectoryURL;
-(id)init;
-(VSAccountStore *)accountStore;
-(VSAccountChannelsCenter *)channelsCenter;
-(VSPrivacyVoucherLockbox *)voucherLockbox;
-(id)initWithAccountStoreClass:(Class)arg1 channelsCenterClass:(Class)arg2 ;
-(id)initWithAccountStoreClass:(Class)arg1 ;
-(VSPrivacyFacade *)privacyFacade;
@end

