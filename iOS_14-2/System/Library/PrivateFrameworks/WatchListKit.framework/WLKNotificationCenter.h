/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol WLKNotificationsImpl, WLKNotificationCenterDelegate;
@interface WLKNotificationCenter : NSObject {

	id<WLKNotificationsImpl> _impl;
	id<WLKNotificationCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultCenter;
-(id)init;
-(id<WLKNotificationCenterDelegate>)delegate;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<WLKNotificationCenterDelegate>)arg1 ;
-(BOOL)isCategoryEnabledByUser:(long long)arg1 ;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
@end

