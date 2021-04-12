/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
*/

@class UIColor;


@protocol UNNotificationContentExtension <NSObject>
@property (nonatomic,readonly) unsigned long long mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
@optional
-(void)didReceiveNotificationResponse:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)mediaPlay;
-(void)mediaPause;
-(unsigned long long)mediaPlayPauseButtonType;
-(CGRect)mediaPlayPauseButtonFrame;
-(UIColor *)mediaPlayPauseButtonTintColor;

@required
-(void)didReceiveNotification:(id)arg1;

@end

