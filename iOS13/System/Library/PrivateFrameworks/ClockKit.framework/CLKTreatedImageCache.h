/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@protocol OS_dispatch_queue;
#import <ClockKit/ClockKit-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface CLKTreatedImageCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableArray* _recentlyUsedKeys;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)imageForRawImage:(id)arg1 scale:(double)arg2 maskMode:(long long)arg3 ;
-(id)imageForRawImage:(id)arg1 maxSize:(CGSize)arg2 cornerRadius:(double)arg3 ;
-(id)_imageForKey:(id)arg1 ;
-(void)_queue_pruneCacheIfNecessary;
-(id)imageForRawImage:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3 ;
-(id)imageForRawImage:(id)arg1 maxSize:(CGSize)arg2 maskMode:(long long)arg3 ;
@end

