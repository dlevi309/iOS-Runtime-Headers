/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)status;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)clientName;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(BOOL)setState:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithClientName:(id)arg1 ;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)isSmartChargingCurrentlyEnabled:(id*)arg1 ;
-(BOOL)disableSmartCharging:(id*)arg1 ;
-(void)disableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(BOOL)temporarilyDisableSmartCharging:(id*)arg1 ;
-(void)temporarilyDisableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(BOOL)enableSmartCharging:(id*)arg1 ;
-(void)enableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(BOOL)temporarilyEnableCharging:(id*)arg1 ;
-(void)temporarilyEnableChargingWithHandler:(/*^block*/id)arg1 ;
-(id)fullChargeDeadline:(id*)arg1 ;
-(id)powerLogStatus;
-(void)engageFrom:(id)arg1 until:(id)arg2 overrideAllSignals:(BOOL)arg3 ;
-(void)resetEngagementOverride;
@end

