/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@protocol TSAppMonitorType
@property (assign,nonatomic) BOOL isActive; 
@property (readonly,nonatomic) BOOL isTracking; 
@required
-(BOOL)isTracking;
-(BOOL)isActive;
-(id)onWindowWillBecomeForegroundWithBlock:(/*^block*/id)arg1;
-(void)setIsActive:(BOOL)arg1;
-(id)onWindowDidBecomeBackgroundWithBlock:(/*^block*/id)arg1;

@end

