/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue;
@class TSgPTPClock, NSObject;

@interface TSgPTPManager : NSObject {

	unsigned _connection;
	TSgPTPClock* _systemDomain;
	NSObject*<OS_dispatch_queue> _systemDomainQueue;
	unsigned long long _systemDomainClockIdentifier;

}

@property (nonatomic,readonly) unsigned long long systemDomainClockIdentifier;              //@synthesize systemDomainClockIdentifier=_systemDomainClockIdentifier - In the implementation block
@property (nonatomic,retain,readonly) TSgPTPClock * systemDomain; 
+(id)gPTPManager;
+(id)sharedgPTPManager;
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(void)notifyWhengPTPManagerIsAvailable:(/*^block*/id)arg1 ;
+(id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)systemDomainClockIdentifier;
-(TSgPTPClock *)systemDomain;
-(BOOL)addDomain:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
@end

