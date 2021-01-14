/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue;
@class IOKConnection, TSgPTPClock, NSObject;

@interface TSgPTPManager : NSObject {

	IOKConnection* _connection;
	TSgPTPClock* _systemDomain;
	NSObject*<OS_dispatch_queue> _systemDomainQueue;
	unsigned long long _systemDomainClockIdentifier;

}

@property (nonatomic,readonly) unsigned long long systemDomainClockIdentifier;              //@synthesize systemDomainClockIdentifier=_systemDomainClockIdentifier - In the implementation block
@property (nonatomic,retain,readonly) TSgPTPClock * systemDomain; 
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)gPTPManager;
+(void)notifyWhengPTPManagerIsAvailable:(/*^block*/id)arg1 ;
+(id)sharedgPTPManager;
+(id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)systemDomainClockIdentifier;
-(TSgPTPClock *)systemDomain;
-(BOOL)addDomain:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)addAVBDomainIndex:(unsigned short)arg1 identifier:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)removeAVBDomainWithIndex:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)addAirPlayDomain:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)removeAirPlayDomainWithError:(id*)arg1 ;
@end

