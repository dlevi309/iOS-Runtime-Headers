/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCKeyedOperationQueueDelegate.h>
#import <libobjc.A.dylib/FCAVAssetPrewarming.h>

@protocol FCAVAssetResourceLoaderType;
@class FCKeyedOperationQueue, NSCountedSet, NSMutableDictionary, NSTimer, NSString;

@interface FCAVAssetPrewarmer : NSObject <FCKeyedOperationQueueDelegate, FCAVAssetPrewarming> {

	id<FCAVAssetResourceLoaderType> _assetResourceLoader;
	FCKeyedOperationQueue* _prefetchQueue;
	NSCountedSet* _interestedAssets;
	NSMutableDictionary* _interestModificationDates;
	NSMutableDictionary* _interestTokensByAsset;
	unsigned long long _highWaterMark;
	NSTimer* _reprocessTimer;

}

@property (nonatomic,retain) id<FCAVAssetResourceLoaderType> assetResourceLoader;              //@synthesize assetResourceLoader=_assetResourceLoader - In the implementation block
@property (nonatomic,retain) FCKeyedOperationQueue * prefetchQueue;                            //@synthesize prefetchQueue=_prefetchQueue - In the implementation block
@property (nonatomic,retain) NSCountedSet * interestedAssets;                                  //@synthesize interestedAssets=_interestedAssets - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interestModificationDates;                  //@synthesize interestModificationDates=_interestModificationDates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interestTokensByAsset;                      //@synthesize interestTokensByAsset=_interestTokensByAsset - In the implementation block
@property (assign,nonatomic) unsigned long long highWaterMark;                                 //@synthesize highWaterMark=_highWaterMark - In the implementation block
@property (nonatomic,retain) NSTimer * reprocessTimer;                                         //@synthesize reprocessTimer=_reprocessTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<FCAVAssetResourceLoaderType>)assetResourceLoader;
-(void)_flushIfNeeded;
-(void)_revisitSuspendedState;
-(NSCountedSet *)interestedAssets;
-(NSMutableDictionary *)interestModificationDates;
-(NSTimer *)reprocessTimer;
-(void)_didChangeInterestedAssets;
-(NSMutableDictionary *)interestTokensByAsset;
-(void)_prewarmAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_reprocessInterestedAssets;
-(void)setReprocessTimer:(NSTimer *)arg1 ;
-(FCKeyedOperationQueue *)prefetchQueue;
-(void)addInterestInAsset:(id)arg1 ;
-(void)removeInterestInAsset:(id)arg1 ;
-(void)setAssetResourceLoader:(id<FCAVAssetResourceLoaderType>)arg1 ;
-(void)setPrefetchQueue:(FCKeyedOperationQueue *)arg1 ;
-(void)setInterestedAssets:(NSCountedSet *)arg1 ;
-(void)setInterestModificationDates:(NSMutableDictionary *)arg1 ;
-(void)setInterestTokensByAsset:(NSMutableDictionary *)arg1 ;
-(void)setHighWaterMark:(unsigned long long)arg1 ;
-(unsigned long long)highWaterMark;
@end

