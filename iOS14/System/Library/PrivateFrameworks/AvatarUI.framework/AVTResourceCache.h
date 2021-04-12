/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTResourceCache <NSObject>
@optional
-(void)clearCache;
-(void)evictResourceFromCache:(id)arg1 scope:(id)arg2;

@required
-(id)resourceForItem:(id)arg1 scope:(id)arg2;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3;
-(BOOL)resourceExistsInCacheForItem:(id)arg1 scope:(id)arg2;

@end

