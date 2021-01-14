/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreach.framework/NewDeviceOutreach
*/


@interface NDOManager : NSObject
-(id)serialNumber;
-(id)agentConnection;
-(BOOL)isHighServerVersionFeaturesetEnabled;
-(void)scheduleOutreachWithReply:(/*^block*/id)arg1 ;
-(void)getWarrantyUsingPolicy:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)serialNumberOverride:(/*^block*/id)arg1 ;
-(BOOL)checkIsAvailableInStore:(id)arg1 ;
-(void)appSupportDictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)isHighServerVersionFeaturesetEnabledWithStatusHandler:(/*^block*/id)arg1 ;
-(void)webURLOverride:(/*^block*/id)arg1 ;
@end

