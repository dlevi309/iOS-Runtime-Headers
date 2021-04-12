/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)open;
-(void)close;
-(id<GEOTileServerProxyDelegate>)delegate;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5 ;
-(void)cancel:(const GEOTileKey*)arg1 batchID:(int)arg2 ;
-(void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const GEOTileKey*)arg2 options:(unsigned long long)arg3 ;
-(void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 batchID:(int)arg3 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)endPreloadSession;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1 ;
-(void)calculateFreeableSize;
-(unsigned long long)calculateFreeableSizeSync;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned*)arg3 hasAdditionalInfos:(const BOOL*)arg4 additionalInfos:(const GEOTileLoaderAdditionalInfo*)arg5 signpostIDs:(const unsigned long long*)arg6 createTimes:(const double*)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10 ;
-(void)flushPendingWrites;
@end

