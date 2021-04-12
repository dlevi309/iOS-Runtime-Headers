/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol OS_dispatch_queue;
#import <PassKitUI/PassKitUI-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSMutableOrderedSet, NSObject, PKObjectDownloader, PKPeerPaymentContactResolver;

@interface PKPaymentTransactionCellController : NSObject {

	NSMutableDictionary* _iconCache;
	NSMutableArray* _iconCacheKeys;
	NSMutableOrderedSet* _highPriorityIconRequests;
	NSMutableOrderedSet* _lowPriorityIconRequests;
	NSMutableArray* _inflightRequests;
	BOOL _processingRequest;
	NSObject*<OS_dispatch_queue> _queueIcons;
	os_unfair_lock_s _lockRequests;
	PKObjectDownloader* _fileDownloader;
	PKPeerPaymentContactResolver* _contactResolver;

}

@property (nonatomic,readonly) PKPeerPaymentContactResolver * contactResolver;              //@synthesize contactResolver=_contactResolver - In the implementation block
+(id)presentationInformationForTransaction:(id)arg1 pass:(id)arg2 account:(id)arg3 deviceName:(id)arg4 context:(unsigned long long)arg5 ;
+(id)_relativeDateForTransaction:(id)arg1 ;
+(id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 includeBankAccountSuffix:(BOOL)arg2 useGenericNameIfNoDescriptionAvailable:(BOOL)arg3 ;
+(id)_billPaymentFundingSourceForTransaction:(id)arg1 ;
+(id)_statusAnnotationForTransaction:(id)arg1 ;
-(PKPeerPaymentContactResolver *)contactResolver;
-(id)initWithContactResolver:(id)arg1 ;
-(id)iconForMerchant:(id)arg1 size:(CGSize)arg2 requestType:(unsigned long long)arg3 iconHandler:(/*^block*/id)arg4 ;
-(void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3 ;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3 ;
-(id)iconForTransaction:(id)arg1 size:(CGSize)arg2 requestType:(unsigned long long)arg3 iconHandler:(/*^block*/id)arg4 ;
-(id)_iconForTransaction:(id)arg1 merchant:(id)arg2 size:(CGSize)arg3 requestType:(unsigned long long)arg4 iconHandler:(/*^block*/id)arg5 ;
-(id)_iconCacheKeyForPaymentTransaction:(id)arg1 size:(CGSize)arg2 imageOut:(id*)arg3 ;
-(id)_iconCacheKeyForMerchant:(id)arg1 size:(CGSize)arg2 imageOut:(id*)arg3 ;
-(id)_iconForCacheKey:(id)arg1 ;
-(void)queue_processNextIconRequest;
-(id)fileDownloader;
-(id)_cacheImageFromDownloaderCacheForURL:(id)arg1 ;
-(void)configureCell:(id)arg1 forTransaction:(id)arg2 paymentPass:(id)arg3 account:(id)arg4 detailStyle:(long long)arg5 deviceName:(id)arg6 avatarViewDelegate:(id)arg7 ;
@end

