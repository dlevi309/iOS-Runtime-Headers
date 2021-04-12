/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


@class NSMutableDictionary, NSMutableArray;

@interface CLKUIResourceManager : NSObject {

	NSMutableDictionary* _recentProvidersForUuid;
	NSMutableDictionary* _atlasesByUuid;
	NSMutableDictionary* _providersByKey;
	unsigned long long _memoryUsed;
	NSMutableArray* _textureLoaderQueues;

}
+(id)sharedInstance;
-(void)purge:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)purgeAllUnused;
-(void)_purgeAllUnconditionally;
-(id)_newAtlasForUuid:(id)arg1 ;
-(void)_purgeAtlases:(id)arg1 ;
-(id)_fetchOldestAtlas;
-(id)textureForUuid:(id)arg1 delegate:(id)arg2 ;
-(id)borrowTextureLoadingQueue;
-(void)returnTextureLoadingQueue:(id)arg1 ;
-(BOOL)memoryIsAvailable:(unsigned long long)arg1 ;
-(BOOL)ensureMemoryAvailable:(unsigned long long)arg1 ;
-(void)notifyAtlas:(id)arg1 willChangeToMemoryCost:(unsigned long long)arg2 ;
-(id)delegateForUuid:(id)arg1 ;
@end

