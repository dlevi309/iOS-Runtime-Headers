/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol WLKNotificationsImpl
@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate; 
@required
-(id<WLKNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
-(BOOL)isCategoryEnabledByUser:(long long)arg1;

@end

