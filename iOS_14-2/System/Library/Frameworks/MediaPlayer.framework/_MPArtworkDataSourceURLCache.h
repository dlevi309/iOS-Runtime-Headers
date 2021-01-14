/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CFNetwork/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface _MPArtworkDataSourceURLCache : NSURLCache {

	NSMapTable* _requestSizeMap;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
-(void)setRepresentationSize:(CGSize)arg1 forRequest:(id)arg2 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
@end

