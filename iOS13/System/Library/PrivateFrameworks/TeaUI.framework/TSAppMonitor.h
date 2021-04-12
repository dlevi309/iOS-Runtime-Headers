/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TSAppMonitorType.h>

@interface TSAppMonitor : NSObject <TSAppMonitorType> {

	 isActive;
	 onWindowDidBecomeBackgroundBlock;
	 onWindowWillBecomeForegroundBlock;

}

@property (assign,nonatomic) BOOL isActive; 
-(id)init;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
-(id)onWindowDidBecomeBackgroundWithBlock:(/*^block*/id)arg1 ;
-(id)onWindowWillBecomeForegroundWithBlock:(/*^block*/id)arg1 ;
-(void)triggerWithEvent:(long long)arg1 ;
@end

