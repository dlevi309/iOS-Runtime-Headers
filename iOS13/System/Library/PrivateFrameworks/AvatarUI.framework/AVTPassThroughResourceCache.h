/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTImageCache.h>
#import <libobjc.A.dylib/AVTResourceCache.h>

@class NSString;

@interface AVTPassThroughResourceCache : NSObject <AVTImageCache, AVTResourceCache>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearCache;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
@end

