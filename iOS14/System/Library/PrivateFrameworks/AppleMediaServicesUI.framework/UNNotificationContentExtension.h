/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

@class UIColor;


@protocol UNNotificationContentExtension <NSObject>
@property (nonatomic,readonly) unsigned long long mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
@optional
-(void)mediaPause;
-(void)didReceiveNotificationResponse:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)mediaPlay;
-(unsigned long long)mediaPlayPauseButtonType;
-(CGRect)mediaPlayPauseButtonFrame;
-(UIColor *)mediaPlayPauseButtonTintColor;

@required
-(void)didReceiveNotification:(id)arg1;

@end

