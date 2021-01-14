/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface SSModelLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _pendingUpdates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingUpdates;                   //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
+(id)sharedInstance;
+(id)assetDirectoryPathForType:(unsigned long long)arg1 forUpdate:(BOOL)arg2 ;
-(void)removeAssetsWithName:(id)arg1 ;
-(id)init;
-(void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 intoDirectory:(id)arg3 group:(id)arg4 completion:(/*^block*/id)arg5 ;
-(NSMutableSet *)pendingUpdates;
-(void)moveNewlyPackagedAssets:(id)arg1 ;
-(void)setPendingUpdates:(NSMutableSet *)arg1 ;
-(void)unpackageModelAssets:(id)arg1 assetName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 group:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasPendingUpdates;
-(void)removeAssetsForType:(unsigned long long)arg1 group:(id)arg2 ;
@end

