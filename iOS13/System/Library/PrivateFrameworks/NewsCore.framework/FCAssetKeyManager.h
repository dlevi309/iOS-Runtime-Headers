/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<FCAssetKeyManagerDelegate>)delegate;
-(id<FCAssetKeyCacheType>)cache;
-(id<FCAssetKeyServiceType>)service;
-(id<FCOperationThrottler>)throttler;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)clearUnauthorizedAssetKeys;
-(FCThreadSafeMutableDictionary *)errorsByKey;
-(BOOL)_canRetryAfterNetworkError:(id)arg1 ;
-(FCThreadSafeMutableSet *)pendingWrappingKeyIDs;
-(id)cachedWrappingKeyWithID:(id)arg1 ;
-(void)fetchWrappingKeyWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)eraseAllKeys;
-(id)initWithService:(id)arg1 cache:(id)arg2 delegate:(id)arg3 ;
@end

