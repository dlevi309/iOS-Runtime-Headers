/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSMutableDictionary, NSDate, NSString;

@interface HMDXPCMessageCountTracker : NSObject <HMFLogging> {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _acceptedRequests;
	NSMutableDictionary* _erroredRequests;
	NSMutableDictionary* _sentNotifications;
	NSMutableDictionary* _filteredNotifications;
	NSDate* _lastResetDate;

}

@property (nonatomic,retain) NSDate * lastResetDate;                //@synthesize lastResetDate=_lastResetDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)xpcCounterTracker;
-(void)_resetCounters;
-(id)init;
-(id)dumpState;
-(id)__init;
-(NSDate *)lastResetDate;
-(void)incrementCounterOfType:(long long)arg1 identifier:(id)arg2 ;
-(void)submitCounters;
-(id)_countersOfType:(long long)arg1 ;
-(void)_incrementCounterOfType:(long long)arg1 identifier:(id)arg2 ;
-(id)sampleCountersAndReset:(BOOL)arg1 ;
-(id)countersOfType:(long long)arg1 ;
-(void)setLastResetDate:(NSDate *)arg1 ;
@end

