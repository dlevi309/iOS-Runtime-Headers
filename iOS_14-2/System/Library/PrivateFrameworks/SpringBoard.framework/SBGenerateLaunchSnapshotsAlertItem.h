/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBGenerateLaunchSnapshotsAlertItem : SBAlertItem {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)setHandler:(id)arg1 ;
-(BOOL)behavesSuperModally;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldShowInLockScreen;
-(id)handler;
-(BOOL)forcesModalAlertAppearance;
-(void)regenerateApplications:(id)arg1 ;
@end

