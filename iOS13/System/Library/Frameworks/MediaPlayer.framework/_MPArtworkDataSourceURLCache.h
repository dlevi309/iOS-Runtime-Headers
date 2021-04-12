/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)setRepresentationSize:(CGSize)arg1 forRequest:(id)arg2 ;
@end

