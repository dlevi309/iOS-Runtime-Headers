/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking, OS_dispatch_queue;
@class HMDHomeConfigurationLogEvent, NSMapTable, HMDLogEventContextProvider, NSObject;

@interface HMDLogEventDispatcher : HMFObject {

	id<HMFLocking> _lock;
	HMDHomeConfigurationLogEvent* _cachedHomeConfiguration;
	NSMapTable* _logEventObserversByEventType;
	unsigned long long _cachedHomeConfigurationVersion;
	HMDLogEventContextProvider* _logEventContextProvider;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSMapTable * logEventObserversByEventType;                         //@synthesize logEventObserversByEventType=_logEventObserversByEventType - In the implementation block
@property (assign,nonatomic) unsigned long long cachedHomeConfigurationVersion;                   //@synthesize cachedHomeConfigurationVersion=_cachedHomeConfigurationVersion - In the implementation block
@property (nonatomic,readonly) HMDLogEventContextProvider * logEventContextProvider;              //@synthesize logEventContextProvider=_logEventContextProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMDHomeConfigurationLogEvent * cachedHomeConfiguration;              //@synthesize cachedHomeConfiguration=_cachedHomeConfiguration - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)init;
-(void)submitLogEvent:(id)arg1 ;
-(void)submitLogEvent:(id)arg1 error:(id)arg2 ;
-(void)addObserver:(id)arg1 forEventTypes:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEventType:(id)arg2 ;
-(HMDHomeConfigurationLogEvent *)cachedHomeConfiguration;
-(NSMapTable *)logEventObserversByEventType;
-(HMDLogEventContextProvider *)logEventContextProvider;
-(void)setCachedHomeConfiguration:(HMDHomeConfigurationLogEvent *)arg1 ;
-(void)addObserver:(id)arg1 forEventType:(id)arg2 ;
-(unsigned long long)cachedHomeConfigurationVersion;
-(void)setCachedHomeConfigurationVersion:(unsigned long long)arg1 ;
@end

