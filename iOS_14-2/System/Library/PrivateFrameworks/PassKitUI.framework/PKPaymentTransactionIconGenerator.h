/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol OS_dispatch_queue;
#import <PassKitUI/PassKitUI-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSMutableOrderedSet, NSObject, PKObjectDownloader, PKPaymentService;

@interface PKPaymentTransactionIconGenerator : NSObject {

	NSMutableDictionary* _iconCache;
	NSMutableArray* _iconCacheKeys;
	BOOL _useCache;
	BOOL _hasNetworkAccess;
	double _scale;
	NSMutableOrderedSet* _highPriorityIconRequests;
	NSMutableOrderedSet* _lowPriorityIconRequests;
	NSMutableArray* _inflightRequests;
	BOOL _processingRequest;
	NSObject*<OS_dispatch_queue> _queueIcons;
	os_unfair_lock_s _lockRequests;
	PKObjectDownloader* _fileDownloader;
	PKPaymentService* _paymentService;

}
-(id)iconForMerchant:(id)arg1 size:(CGSize)arg2 ignoreLogoURL:(BOOL)arg3 requestType:(unsigned long long)arg4 iconHandler:(/*^block*/id)arg5 ;
-(id)_iconForCacheKey:(id)arg1 ;
-(id)_iconForTransaction:(id)arg1 merchant:(id)arg2 size:(CGSize)arg3 ignoreLogoURL:(BOOL)arg4 requestType:(unsigned long long)arg5 iconHandler:(/*^block*/id)arg6 ;
-(id)_iconCacheKeyForPaymentTransaction:(id)arg1 size:(CGSize)arg2 ignoreLogoURL:(BOOL)arg3 imageOut:(id*)arg4 ;
-(id)_iconCacheKeyForMerchant:(id)arg1 size:(CGSize)arg2 ignoreLogoURL:(BOOL)arg3 imageOut:(id*)arg4 ;
-(void)queue_processNextIconRequest;
-(void)_downloadLogoForTransaction:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_cacheImageFromDownloaderCacheForURL:(id)arg1 ;
-(id)fileDownloader;
-(id)iconForTransaction:(id)arg1 size:(CGSize)arg2 ignoreLogoURL:(BOOL)arg3 requestType:(unsigned long long)arg4 iconHandler:(/*^block*/id)arg5 ;
-(id)iconCacheKeyForTransaction:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithCache:(BOOL)arg1 scale:(double)arg2 ;
@end

