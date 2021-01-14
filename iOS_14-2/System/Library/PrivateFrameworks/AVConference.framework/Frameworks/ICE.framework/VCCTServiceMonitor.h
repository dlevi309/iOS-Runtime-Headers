/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ICE.framework/ICE
*/

#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@class CoreTelephonyClient, CTDataStatus, CTDataConnectionStatus, CTSignalStrengthInfo, CTXPCServiceSubscriptionContext, NSNumber, NSString;

@interface VCCTServiceMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {

	CoreTelephonyClient* _ctClient;
	CTDataStatus* _dataStatus;
	CTDataConnectionStatus* _connectionStatus;
	CTSignalStrengthInfo* _signalStrength;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	BOOL _supportsCellular;
	NSNumber* _inHomeCountry;

}

@property (nonatomic,readonly) NSNumber * inHomeCountry;                               //@synthesize inHomeCountry=_inHomeCountry - In the implementation block
@property (nonatomic,readonly) CTDataStatus * dataStatus;                              //@synthesize dataStatus=_dataStatus - In the implementation block
@property (nonatomic,readonly) CTDataConnectionStatus * connectionStatus;              //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,readonly) CTSignalStrengthInfo * signalStrength;                  //@synthesize signalStrength=_signalStrength - In the implementation block
@property (nonatomic,readonly) BOOL supportsCellular;                                  //@synthesize supportsCellular=_supportsCellular - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(BOOL)supportsCellular;
-(id)init;
-(id)getCurrentDataSubscriptionContext;
-(NSNumber *)inHomeCountry;
-(void)internetConnectionStateChanged:(id)arg1 ;
-(CTSignalStrengthInfo *)signalStrength;
-(CTDataStatus *)dataStatus;
-(CTDataConnectionStatus *)connectionStatus;
-(void)dealloc;
@end

