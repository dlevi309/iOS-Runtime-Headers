/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveCDNDownloader.framework/ProactiveCDNDownloader
*/

#import <libobjc.A.dylib/ATXProactiveCDNDownloaderProtocol.h>

@protocol ATXGEOTileLoaderProtocol, ATXGEOTileDataReaderProtocol, OS_dispatch_queue;
@class NSObject;

@interface ATXProactiveCDNDownloader : NSObject <ATXProactiveCDNDownloaderProtocol> {

	id<ATXGEOTileLoaderProtocol> _tileLoader;
	id<ATXGEOTileDataReaderProtocol> _tileDataReader;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<ATXGEOTileLoaderProtocol> tileLoader;                      //@synthesize tileLoader=_tileLoader - In the implementation block
@property (nonatomic,readonly) id<ATXGEOTileDataReaderProtocol> tileDataReader;              //@synthesize tileDataReader=_tileDataReader - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
-(id)init;
-(id)initWithTileLoader:(id)arg1 tileDataReader:(id)arg2 ;
-(id<ATXGEOTileDataReaderProtocol>)tileDataReader;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_heroAppPredictionsForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<ATXGEOTileLoaderProtocol>)tileLoader;
-(void)heroAppPredictionsForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

