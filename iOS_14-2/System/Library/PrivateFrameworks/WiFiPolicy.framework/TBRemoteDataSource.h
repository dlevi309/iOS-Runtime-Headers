/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/TBDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TBRemoteDataSource : TBDataSource {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(unsigned long long)type;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)executeFetchRequest:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_executeNetworkFetchRequest:(id)arg1 ;
-(void)_executeLocationFetchRequest:(id)arg1 ;
-(void)_executeTileFetchRequest:(id)arg1 ;
-(void)_fetchTilesWithRequest:(id)arg1 ;
-(void)_submitNetworkSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchTilesForTileItems:(id)arg1 completionHandler:(/*^block*/id)arg2 trigger:(unsigned long long)arg3 ;
-(void)_captureTileFetchError:(id)arg1 tileKey:(id)arg2 duration:(double)arg3 trigger:(unsigned long long)arg4 ;
-(void)_writeSearchTileToFile:(id)arg1 ;
@end

