/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCAssetKeyManagerType.h>

@protocol FCAssetKeyServiceType, FCAssetKeyCacheType, FCAssetKeyManagerDelegate, FCOperationThrottler;
@class FCThreadSafeMutableSet, FCThreadSafeMutableDictionary, NSString;

@interface FCAssetKeyManager : NSObject <FCOperationThrottlerDelegate, FCAssetKeyManagerType> {

	id<FCAssetKeyServiceType> _service;
	id<FCAssetKeyCacheType> _cache;
	id<FCAssetKeyManagerDelegate> _delegate;
	id<FCOperationThrottler> _throttler;
	FCThreadSafeMutableSet* _pendingWrappingKeyIDs;
	FCThreadSafeMutableDictionary* _errorsByKey;

}

@property (nonatomic,readonly) id<FCAssetKeyServiceType> service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<FCAssetKeyCacheType> cache;                               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,__weak,readonly) id<FCAssetKeyManagerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FCOperationThrottler> throttler;                          //@synthesize throttler=_throttler - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableSet * pendingWrappingKeyIDs;              //@synthesize pendingWrappingKeyIDs=_pendingWrappingKeyIDs - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * errorsByKey;                 //@synthesize errorsByKey=_errorsByKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id<FCAssetKeyCacheType>)cache;
-(id<FCAssetKeyManagerDelegate>)delegate;
-(FCThreadSafeMutableDictionary *)errorsByKey;
-(FCThreadSafeMutableSet *)pendingWrappingKeyIDs;
-(id)initWithService:(id)arg1 cache:(id)arg2 delegate:(id)arg3 ;
-(void)clearUnauthorizedAssetKeys;
-(BOOL)_canRetryAfterNetworkError:(id)arg1 ;
-(id<FCOperationThrottler>)throttler;
-(id)cachedWrappingKeyWithID:(id)arg1 ;
-(void)eraseAllKeys;
-(void)fetchWrappingKeyWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FCAssetKeyServiceType>)service;
@end

