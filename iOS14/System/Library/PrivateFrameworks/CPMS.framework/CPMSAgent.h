/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPMS.framework/CPMS
*/

#import <CPMS/CPMS-Structs.h>
#import <CPMS/CPMSAgentProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSMutableSet, NSString;

@interface CPMSAgent : NSObject <CPMSAgentProtocol> {

	unsigned _ppmService;
	IONotificationPortRef _notificationPort;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSSet* _timeScalesSet;
	unsigned _connect;
	NSMutableSet* _clientSet;

}

@property (retain) NSMutableSet * clientSet;                        //@synthesize clientSet=_clientSet - In the implementation block
@property (assign) unsigned connect;                                //@synthesize connect=_connect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)sharedCPMSAgent;
+(BOOL)isCPMSSupported;
+(BOOL)isCPMSSupportedForAnyClient;
+(unsigned char)CPMSClientIdToPPMClientId:(long long)arg1 ;
+(BOOL)isCPMSSupportedForClient:(long long)arg1 ;
-(id)init;
-(void)setConnect:(unsigned)arg1 ;
-(unsigned)connect;
-(BOOL)acknowledgePowerBudget:(id)arg1 forClientId:(long long)arg2 error:(id*)arg3 ;
-(BOOL)registerForNotifications;
-(BOOL)registerClientWithDescription:(id)arg1 error:(id*)arg2 ;
-(id)copyPowerBudgetForRequest:(id)arg1 forClient:(long long)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(BOOL)sanityCheckClientDescription:(id)arg1 ;
-(char)CPMSPowerTimeScaleToPPMIndex:(id)arg1 ;
-(BOOL)isClientIdValid:(long long)arg1 ;
-(id)PPMIndexToCPMSPowerTimeScale:(char)arg1 ;
-(id)requestPowerBudget:(id)arg1 forClient:(long long)arg2 error:(id*)arg3 ;
-(NSMutableSet *)clientSet;
-(void)setClientSet:(NSMutableSet *)arg1 ;
@end

