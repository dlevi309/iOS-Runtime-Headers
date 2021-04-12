/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ICE.framework/ICE
*/


@class CoreTelephonyClient, NSNumber, CTDataStatus, CTDataConnectionStatus, CTSignalStrengthInfo;

@interface VCCTServiceMonitor : NSObject {

	CoreTelephonyClient* _ctClient;
	NSNumber* _inHomeCountry;
	CTDataStatus* _dataStatus;
	CTDataConnectionStatus* _connectionStatus;
	CTSignalStrengthInfo* _signalStrength;

}

@property (nonatomic,readonly) NSNumber * inHomeCountry;                               //@synthesize inHomeCountry=_inHomeCountry - In the implementation block
@property (nonatomic,readonly) CTDataStatus * dataStatus;                              //@synthesize dataStatus=_dataStatus - In the implementation block
@property (nonatomic,readonly) CTDataConnectionStatus * connectionStatus;              //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,readonly) CTSignalStrengthInfo * signalStrength;                  //@synthesize signalStrength=_signalStrength - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSNumber *)inHomeCountry;
-(CTSignalStrengthInfo *)signalStrength;
-(CTDataStatus *)dataStatus;
-(CTDataConnectionStatus *)connectionStatus;
-(id)getCurrentDataSubscriptionContext;
@end

