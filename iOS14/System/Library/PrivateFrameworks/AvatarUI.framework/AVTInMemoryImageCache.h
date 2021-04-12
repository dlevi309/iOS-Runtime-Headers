/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AVTInMemoryResourceCache.h>
#import <libobjc.A.dylib/AVTImageCache.h>

@class NSString;

@interface AVTInMemoryImageCache : AVTInMemoryResourceCache <AVTImageCache>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForItem:(id)arg1 scope:(id)arg2 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id)initWithLockProvider:(/*^block*/id)arg1 logger:(id)arg2 ;
@end

