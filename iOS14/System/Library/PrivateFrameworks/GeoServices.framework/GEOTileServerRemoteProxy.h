/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy {

	NSObject*<OS_dispatch_queue> _connectionIncomingQueue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionSendIsolation;
	int _diskCacheDeletedExternalDataNotifyToken;

}
-(BOOL)_sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 batchID:(int)arg3 ;
-(void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const GEOTileKey*)arg2 options:(unsigned long long)arg3 ;
-(void)open;
-(void)_sendMessage:(id)arg1 ;
-(void)_handleError:(id)arg1 ;
-(void)flushPendingWrites;
-(void)_handleNetworkBegan:(id)arg1 ;
-(void)close;
-(void)_handleTile:(id)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5 ;
-(void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned*)arg3 hasAdditionalInfos:(const BOOL*)arg4 additionalInfos:(const GEOTileLoaderAdditionalInfo*)arg5 signpostIDs:(const unsigned long long*)arg6 createTimes:(const double*)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10 ;
-(void)_handleEvent:(id)arg1 ;
-(void)endPreloadSession;
-(void)cancel:(const GEOTileKey*)arg1 batchID:(int)arg2 ;
-(void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1 ;
-(unsigned long long)calculateFreeableSizeSync;
-(void)calculateFreeableSize;
-(void)_handleEditionUpgrade:(id)arg1 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)_sendMessageWithReplySync:(id)arg1 ;
@end

