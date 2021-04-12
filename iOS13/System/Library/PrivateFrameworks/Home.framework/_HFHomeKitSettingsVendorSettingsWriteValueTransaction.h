/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NAFuture, NSError, NSDate, HMSetting, NSNumber;

@interface _HFHomeKitSettingsVendorSettingsWriteValueTransaction : NSObject {

	BOOL _started;
	NAFuture* _settingWriteFuture;
	NSError* _error;
	NSDate* _transactionStartDate;
	id _value;
	id _previousValue;
	unsigned long long _changeType;
	HMSetting* _setting;
	NSNumber* _transactionNumber;

}

@property (nonatomic,retain) NAFuture * settingWriteFuture;                //@synthesize settingWriteFuture=_settingWriteFuture - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (assign,getter=hasStarted,nonatomic) BOOL started;               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSDate * transactionStartDate;              //@synthesize transactionStartDate=_transactionStartDate - In the implementation block
@property (nonatomic,copy,readonly) id value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) id previousValue;                      //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) HMSetting * setting;                        //@synthesize setting=_setting - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionNumber;               //@synthesize transactionNumber=_transactionNumber - In the implementation block
-(id)init;
-(id)description;
-(NSError *)error;
-(id)value;
-(unsigned long long)changeType;
-(void)setError:(NSError *)arg1 ;
-(BOOL)hasStarted;
-(void)setStarted:(BOOL)arg1 ;
-(id)previousValue;
-(NSNumber *)transactionNumber;
-(HMSetting *)setting;
-(id)descriptionBuilder;
-(id)initWithSetting:(id)arg1 previousValue:(id)arg2 value:(id)arg3 changeType:(unsigned long long)arg4 ;
-(NAFuture *)settingWriteFuture;
-(void)setSettingWriteFuture:(NAFuture *)arg1 ;
-(NSDate *)transactionStartDate;
@end

