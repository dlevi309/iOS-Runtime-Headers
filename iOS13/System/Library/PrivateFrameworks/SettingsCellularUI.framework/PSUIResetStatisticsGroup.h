/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@protocol PSUIResetStatisticsGroupDelegate;
@class PSSpecifier, PSConfirmationSpecifier, CHManager;

@interface PSUIResetStatisticsGroup : NSObject {

	id<PSUIResetStatisticsGroupDelegate> _delegate;
	unsigned long long _policy;
	PSSpecifier* _groupSpecifier;
	PSConfirmationSpecifier* _resetButtonSpecifier;
	CHManager* _callHistoryManager;

}

@property (assign,nonatomic) unsigned long long policy;                                         //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                                      //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) PSConfirmationSpecifier * resetButtonSpecifier;                    //@synthesize resetButtonSpecifier=_resetButtonSpecifier - In the implementation block
@property (nonatomic,retain) CHManager * callHistoryManager;                                    //@synthesize callHistoryManager=_callHistoryManager - In the implementation block
@property (assign,nonatomic,__weak) id<PSUIResetStatisticsGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PSUIResetStatisticsGroupDelegate>)delegate;
-(void)setDelegate:(id<PSUIResetStatisticsGroupDelegate>)arg1 ;
-(unsigned long long)policy;
-(void)setPolicy:(unsigned long long)arg1 ;
-(id)initWithPolicy:(unsigned long long)arg1 ;
-(id)_lastUpdateDate;
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(CHManager *)callHistoryManager;
-(void)setCallHistoryManager:(CHManager *)arg1 ;
-(void)clearStats:(id)arg1 ;
-(void)_updateLastResetText;
-(PSConfirmationSpecifier *)resetButtonSpecifier;
-(void)setResetButtonSpecifier:(PSConfirmationSpecifier *)arg1 ;
@end

