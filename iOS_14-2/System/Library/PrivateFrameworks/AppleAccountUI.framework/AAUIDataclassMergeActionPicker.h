/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AccountsUI/ACUIDataclassActionPicker.h>

@class NSString;

@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker {

	BOOL _isPerformingBatchMerge;
	BOOL _isTetheredSyncingEnabled;
	BOOL _isAnotherAccountSyncingDataclass;
	BOOL _isDataclassSyncingUsingExchangeOnly;
	BOOL _localStoreHasReadOnlyCalendars;
	NSString* _tetheredSyncingSource;

}

@property (assign,setter=setPerformingBatchMerge:,nonatomic) BOOL isPerformingBatchMerge;                                          //@synthesize isPerformingBatchMerge=_isPerformingBatchMerge - In the implementation block
@property (assign,setter=setTetheredSyncingEnabled:,nonatomic) BOOL isTetheredSyncingEnabled;                                      //@synthesize isTetheredSyncingEnabled=_isTetheredSyncingEnabled - In the implementation block
@property (assign,setter=setAnotherAccountIsSyncingDataclass:,nonatomic) BOOL isAnotherAccountSyncingDataclass;                    //@synthesize isAnotherAccountSyncingDataclass=_isAnotherAccountSyncingDataclass - In the implementation block
@property (assign,setter=setDataclassIsSyncingUsingExchangeOnly:,nonatomic) BOOL isDataclassSyncingUsingExchangeOnly;              //@synthesize isDataclassSyncingUsingExchangeOnly=_isDataclassSyncingUsingExchangeOnly - In the implementation block
@property (assign,nonatomic) BOOL localStoreHasReadOnlyCalendars;                                                                  //@synthesize localStoreHasReadOnlyCalendars=_localStoreHasReadOnlyCalendars - In the implementation block
@property (assign,nonatomic) NSString * tetheredSyncingSource;                                                                     //@synthesize tetheredSyncingSource=_tetheredSyncingSource - In the implementation block
-(id)message;
-(id)title;
-(id)descriptionForDataclassAction:(id)arg1 ;
-(BOOL)isPerformingBatchMerge;
-(void)setPerformingBatchMerge:(BOOL)arg1 ;
-(BOOL)isTetheredSyncingEnabled;
-(void)setTetheredSyncingEnabled:(BOOL)arg1 ;
-(BOOL)isAnotherAccountSyncingDataclass;
-(void)setAnotherAccountIsSyncingDataclass:(BOOL)arg1 ;
-(BOOL)isDataclassSyncingUsingExchangeOnly;
-(void)setDataclassIsSyncingUsingExchangeOnly:(BOOL)arg1 ;
-(BOOL)localStoreHasReadOnlyCalendars;
-(void)setLocalStoreHasReadOnlyCalendars:(BOOL)arg1 ;
-(NSString *)tetheredSyncingSource;
-(void)setTetheredSyncingSource:(NSString *)arg1 ;
@end

