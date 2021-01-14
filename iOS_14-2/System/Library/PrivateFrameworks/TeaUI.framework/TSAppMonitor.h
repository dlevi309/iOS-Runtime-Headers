/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TSAppMonitorType.h>

@interface TSAppMonitor : NSObject <TSAppMonitorType> {

	 isActive;
	 isTracking;
	 onWindowDidBecomeBackgroundBlock;
	 onWindowWillBecomeForegroundBlock;

}

@property (assign,nonatomic) BOOL isActive; 
@property (assign,nonatomic) BOOL isTracking; 
-(void)triggerWithEvent:(long long)arg1 ;
-(id)init;
-(BOOL)isTracking;
-(BOOL)isActive;
-(id)onWindowWillBecomeForegroundWithBlock:(/*^block*/id)arg1 ;
-(void)setIsTracking:(BOOL)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(id)onWindowDidBecomeBackgroundWithBlock:(/*^block*/id)arg1 ;
@end

