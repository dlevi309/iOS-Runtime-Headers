/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class PSListController, CHManager, PSSpecifier;

@interface PSUICallTimeGroup : NSObject {

	PSListController* _hostController;
	CHManager* _callHistoryManager;
	PSSpecifier* _groupSpecifier;
	PSSpecifier* _currentCallTimeSpecifier;
	PSSpecifier* _lifetimeCallTimeSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (nonatomic,retain) CHManager * callHistoryManager;                        //@synthesize callHistoryManager=_callHistoryManager - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                          //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * currentCallTimeSpecifier;                //@synthesize currentCallTimeSpecifier=_currentCallTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * lifetimeCallTimeSpecifier;               //@synthesize lifetimeCallTimeSpecifier=_lifetimeCallTimeSpecifier - In the implementation block
-(id)initWithListController:(id)arg1 ;
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(CHManager *)callHistoryManager;
-(void)setCallHistoryManager:(CHManager *)arg1 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(id)callTime:(id)arg1 ;
-(id)lifetimeCallTime:(id)arg1 ;
-(void)handleCallTimersChanged;
-(PSSpecifier *)currentCallTimeSpecifier;
-(PSSpecifier *)lifetimeCallTimeSpecifier;
-(id)callTimeDurationRestrictedToCurrentPeriod:(BOOL)arg1 ;
-(void)setCurrentCallTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)setLifetimeCallTimeSpecifier:(PSSpecifier *)arg1 ;
@end

