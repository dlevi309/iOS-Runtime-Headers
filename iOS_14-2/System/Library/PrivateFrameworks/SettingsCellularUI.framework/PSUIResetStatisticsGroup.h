/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@protocol PSUIResetStatisticsGroupDelegate;
@class PSSpecifier, PSConfirmationSpecifier, CHManager;

@interface PSUIResetStatisticsGroup : NSObject {

	unsigned long long _policy;
	id<PSUIResetStatisticsGroupDelegate> _delegate;
	PSSpecifier* _groupSpecifier;
	PSConfirmationSpecifier* _resetButtonSpecifier;
	CHManager* _callHistoryManager;

}

@property (nonatomic,retain) PSSpecifier * groupSpecifier;                                      //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) PSConfirmationSpecifier * resetButtonSpecifier;                    //@synthesize resetButtonSpecifier=_resetButtonSpecifier - In the implementation block
@property (nonatomic,retain) CHManager * callHistoryManager;                                    //@synthesize callHistoryManager=_callHistoryManager - In the implementation block
@property (assign,nonatomic) unsigned long long policy;                                         //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic,__weak) id<PSUIResetStatisticsGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)specifiers;
-(void)setPolicy:(unsigned long long)arg1 ;
-(unsigned long long)policy;
-(id<PSUIResetStatisticsGroupDelegate>)delegate;
-(PSSpecifier *)groupSpecifier;
-(id)initWithPolicy:(unsigned long long)arg1 ;
-(void)setDelegate:(id<PSUIResetStatisticsGroupDelegate>)arg1 ;
-(void)setCallHistoryManager:(CHManager *)arg1 ;
-(id)_lastUpdateDate;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(CHManager *)callHistoryManager;
-(void)clearStats:(id)arg1 ;
-(void)_updateLastResetText;
-(PSConfirmationSpecifier *)resetButtonSpecifier;
-(void)setResetButtonSpecifier:(PSConfirmationSpecifier *)arg1 ;
@end

