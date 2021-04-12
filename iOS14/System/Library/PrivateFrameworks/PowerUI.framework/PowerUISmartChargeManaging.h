/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol PowerUISmartChargeManaging <NSObject>
@required
-(void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1;
-(void)powerLogStatusWithHandler:(/*^block*/id)arg1;
-(void)resetDevelopmentMode;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1;
-(void)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(BOOL)arg2 withHandler:(/*^block*/id)arg3;
-(void)enterDevelopmentMode;
-(void)statusWithHandler:(/*^block*/id)arg1;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1;

@end

