/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTResourceCache <NSObject>
@optional
-(void)clearCache;
-(void)evictResourceFromCache:(id)arg1 scope:(id)arg2;

@required
-(id)resourceForItem:(id)arg1 scope:(id)arg2;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3;

@end

