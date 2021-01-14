/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTileServerProxyDelegate, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileServerProxy : NSObject {

	id<GEOTileServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	int _resourceNotificationToken;

}

@property (nonatomic,__weak,readonly) id<GEOTileServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 batchID:(int)arg3 ;
-(void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const GEOTileKey*)arg2 options:(unsigned long long)arg3 ;
-(void)open;
-(id<GEOTileServerProxyDelegate>)delegate;
-(void)flushPendingWrites;
-(void)close;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5 ;
-(void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned*)arg3 hasAdditionalInfos:(const BOOL*)arg4 additionalInfos:(const GEOTileLoaderAdditionalInfo*)arg5 signpostIDs:(const unsigned long long*)arg6 createTimes:(const double*)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10 ;
-(void)endPreloadSession;
-(void)cancel:(const GEOTileKey*)arg1 batchID:(int)arg2 ;
-(void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1 ;
-(unsigned long long)calculateFreeableSizeSync;
-(void)calculateFreeableSize;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

