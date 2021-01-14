/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <libobjc.A.dylib/SiriUICarDNDDelegate.h>

@class NSString;

@interface SBCarDoNotDisturbExitConfirmationAlertItem : SBAlertItem <SiriUICarDNDDelegate> {

	BOOL _showSiriHeaderViewController;
	/*^block*/id _notDrivingActionHandler;

}

@property (nonatomic,copy) id notDrivingActionHandler;                       //@synthesize notDrivingActionHandler=_notDrivingActionHandler - In the implementation block
@property (assign,nonatomic) BOOL showSiriHeaderViewController;              //@synthesize showSiriHeaderViewController=_showSiriHeaderViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)reappearsAfterUnlock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(void)controllerDidProvideContext:(id)arg1 ;
-(id)notDrivingActionHandler;
-(BOOL)showSiriHeaderViewController;
-(void)setNotDrivingActionHandler:(id)arg1 ;
-(void)setShowSiriHeaderViewController:(BOOL)arg1 ;
@end

