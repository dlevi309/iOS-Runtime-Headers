/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

