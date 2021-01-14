/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveCDNDownloader.framework/ProactiveCDNDownloader
*/

#import <libobjc.A.dylib/ATXGEOTileLoaderProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ATXGEOTileLoader : NSObject <ATXGEOTileLoaderProtocol> {

	NSObject*<OS_dispatch_queue> _callbackQueue;

}
-(id)init;
-(id)tileKeyListForLocation:(id)arg1 ;
-(void)requestGEOTileDataForLocation:(id)arg1 tileLoader:(id)arg2 tileDataHandler:(/*^block*/id)arg3 ;
-(void)requestGEOTileDataForLocation:(id)arg1 tileDataHandler:(/*^block*/id)arg2 ;
@end

