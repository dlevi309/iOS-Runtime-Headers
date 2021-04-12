/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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

