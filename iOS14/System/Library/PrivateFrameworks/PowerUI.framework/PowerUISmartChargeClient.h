/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUISmartChargeClientManaging.h>

@protocol OS_os_log;
@class NSString, NSXPCConnection, NSObject;

@interface PowerUISmartChargeClient : NSObject <PowerUISmartChargeClientManaging> {

	NSString* _clientName;
	NSXPCConnection* _connection;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSString * clientName;                     //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                  //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteInterface;
-(void)setClientName:(NSString *)arg1 ;
-(BOOL)enableSmartCharging:(id*)arg1 ;
-(NSString *)clientName;
-(void)temporarilyDisableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_log>)log;
-(BOOL)temporarilyEnableCharging:(id*)arg1 ;
-(BOOL)setChargingStatus:(BOOL)arg1 ;
-(unsigned long long)isSmartChargingCurrentlyEnabled:(id*)arg1 ;
-(id)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(BOOL)arg2 withError:(id*)arg3 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1 ;
-(void)resetDevelopmentMode;
-(void)engageFrom:(id)arg1 until:(id)arg2 repeatUntil:(id)arg3 overrideAllSignals:(BOOL)arg4 ;
-(void)temporarilyEnableChargingWithHandler:(/*^block*/id)arg1 ;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)temporarilyDisableSmartCharging:(id*)arg1 ;
-(NSXPCConnection *)connection;
-(void)enableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(void)isOBCEngagedAsDesktopDeviceWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isOBCEngaged:(BOOL*)arg1 asDesktopDevice:(BOOL*)arg2 chargingOverrideAllowed:(BOOL*)arg3 withError:(id*)arg4 ;
-(BOOL)setState:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)enterDevelopmentMode;
-(void)resetEngagementOverride;
-(id)fullChargeDeadline:(id*)arg1 ;
-(id)initWithClientName:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)isOBCSupported;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isOBCEngagedAsDesktopDevice:(BOOL*)arg1 chargingOverrideAllowed:(BOOL*)arg2 withError:(id*)arg3 ;
-(BOOL)isOBCEngaged:(id*)arg1 ;
-(id)powerLogStatus;
-(id)status;
-(BOOL)disableSmartCharging:(id*)arg1 ;
-(void)disableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1 ;
@end

