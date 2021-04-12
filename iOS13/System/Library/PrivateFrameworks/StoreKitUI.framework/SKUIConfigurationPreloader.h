/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString, NSOperationQueue, NSMutableArray, SKUIReloadConfigurationOperation, NSDictionary;

@interface SKUIConfigurationPreloader : NSObject {

	NSString* _configurationCachePath;
	NSOperationQueue* _workQueue;
	NSMutableArray* _completionBlocks;
	SKUIReloadConfigurationOperation* _pendingReloadOperation;
	NSDictionary* _loadedConfiguration;

}

@property (readonly) BOOL hasExistingConfigurationCache; 
@property (nonatomic,readonly) NSOperationQueue * workQueue;                                         //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                                    //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) SKUIReloadConfigurationOperation * pendingReloadOperation;              //@synthesize pendingReloadOperation=_pendingReloadOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * loadedConfiguration;                                     //@synthesize loadedConfiguration=_loadedConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSString * configurationCachePath;                               //@synthesize configurationCachePath=_configurationCachePath - In the implementation block
-(id)init;
-(NSOperationQueue *)workQueue;
-(NSMutableArray *)completionBlocks;
-(id)initWithConfigurationCachePath:(id)arg1 ;
-(NSString *)configurationCachePath;
-(NSDictionary *)loadedConfiguration;
-(BOOL)hasExistingConfigurationCache;
-(SKUIReloadConfigurationOperation *)pendingReloadOperation;
-(id)newReloadConfigurationOperation;
-(void)setPendingReloadOperation:(SKUIReloadConfigurationOperation *)arg1 ;
-(void)finishPreloadingConfiguration:(id)arg1 error:(id)arg2 ;
-(void)setLoadedConfiguration:(NSDictionary *)arg1 ;
-(void)preloadConfigurationForPurpose:(long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

