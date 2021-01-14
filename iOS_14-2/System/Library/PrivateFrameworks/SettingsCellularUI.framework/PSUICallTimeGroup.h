/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/Loggable.h>

@class Logger, PSListController, CHManager, PSSpecifier, NSString;

@interface PSUICallTimeGroup : NSObject <Loggable> {

	Logger* _logger;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setCallHistoryManager:(CHManager *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithListController:(id)arg1 ;
-(CHManager *)callHistoryManager;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(id)getLogger;
-(id)callTime:(id)arg1 ;
-(id)lifetimeCallTime:(id)arg1 ;
-(void)handleCallTimersChanged;
-(PSSpecifier *)currentCallTimeSpecifier;
-(PSSpecifier *)lifetimeCallTimeSpecifier;
-(id)callTimeDurationRestrictedToCurrentPeriod:(BOOL)arg1 ;
-(void)setCurrentCallTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)setLifetimeCallTimeSpecifier:(PSSpecifier *)arg1 ;
@end

