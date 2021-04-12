/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HMHome, HMSettings, NSMutableDictionary, NSSet;

@interface HFHomeKitSettingsValueManager : NSObject {

	HMHome* _home;
	HMSettings* _settings;
	NSMutableDictionary* _transactionStacks;

}

@property (assign,nonatomic,__weak) HMHome * home;                                 //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactionStacks;              //@synthesize transactionStacks=_transactionStacks - In the implementation block
@property (nonatomic,readonly) NSSet * pendingWrites; 
-(HMHome *)home;
-(HMSettings *)settings;
-(void)setSettings:(HMSettings *)arg1 ;
-(NSSet *)pendingWrites;
-(void)setHome:(HMHome *)arg1 ;
-(id)valueForSetting:(id)arg1 ;
-(id)changeValueForSetting:(id)arg1 toValue:(id)arg2 ;
-(id)valueForSettingAtKeyPath:(id)arg1 ;
-(id)changeValueForSetting:(id)arg1 toValue:(id)arg2 changeType:(unsigned long long)arg3 ;
-(id)initWithSettings:(id)arg1 home:(id)arg2 ;
-(id)_valueForSetting:(id)arg1 logRead:(BOOL)arg2 ;
-(NSMutableDictionary *)transactionStacks;
-(void)_executeNextPendingWriteForSetting:(id)arg1 ;
-(void)_clearTransaction:(id)arg1 ;
-(void)setTransactionStacks:(NSMutableDictionary *)arg1 ;
@end

