/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTImageCache.h>

@protocol AVTImageCache;
@class NSString;

@interface AVTTwoLevelsImageCache : NSObject <AVTImageCache> {

	id<AVTImageCache> _firstLevelCache;
	id<AVTImageCache> _secondLevelCache;

}

@property (nonatomic,readonly) id<AVTImageCache> firstLevelCache;               //@synthesize firstLevelCache=_firstLevelCache - In the implementation block
@property (nonatomic,readonly) id<AVTImageCache> secondLevelCache;              //@synthesize secondLevelCache=_secondLevelCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFirstLevelCache:(id)arg1 secondLevelCache:(id)arg2 environment:(id)arg3 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id<AVTImageCache>)firstLevelCache;
-(id<AVTImageCache>)secondLevelCache;
@end

