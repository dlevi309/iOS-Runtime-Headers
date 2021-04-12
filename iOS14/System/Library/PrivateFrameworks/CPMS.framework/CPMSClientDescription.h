/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPMS.framework/CPMS
*/


@class NSDictionary;

@interface CPMSClientDescription : NSObject {

	BOOL _isContinuous;
	unsigned _powerBudgetUpdateMinimumPeriod;
	long long _clientId;
	NSDictionary* _powerLevels;
	/*^block*/id _notificationCallback;
	/*^block*/id _getCurrentPower;

}

@property (assign,nonatomic) long long clientId;                                   //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,retain) NSDictionary * powerLevels;                           //@synthesize powerLevels=_powerLevels - In the implementation block
@property (assign,nonatomic) BOOL isContinuous;                                    //@synthesize isContinuous=_isContinuous - In the implementation block
@property (nonatomic,copy) id notificationCallback;                                //@synthesize notificationCallback=_notificationCallback - In the implementation block
@property (nonatomic,copy) id getCurrentPower;                                     //@synthesize getCurrentPower=_getCurrentPower - In the implementation block
@property (assign,nonatomic) unsigned powerBudgetUpdateMinimumPeriod;              //@synthesize powerBudgetUpdateMinimumPeriod=_powerBudgetUpdateMinimumPeriod - In the implementation block
-(void)setClientId:(long long)arg1 ;
-(void)setNotificationCallback:(id)arg1 ;
-(BOOL)isContinuous;
-(id)description;
-(long long)clientId;
-(void)setIsContinuous:(BOOL)arg1 ;
-(void)setGetCurrentPower:(id)arg1 ;
-(void)setPowerBudgetUpdateMinimumPeriod:(unsigned)arg1 ;
-(NSDictionary *)powerLevels;
-(void)setPowerLevels:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)powerBudgetUpdateMinimumPeriod;
-(id)notificationCallback;
-(id)getCurrentPower;
@end

