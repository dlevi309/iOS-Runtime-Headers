/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTSourceAvailabilityEntry.h>

@protocol OS_dispatch_queue;
@class FCNetworkReachability, NSSNewsAvailabilityMonitor, NSObject, NSString;

@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {

	BOOL _available;
	/*^block*/id _availabilityChangedNotificationBlock;
	FCNetworkReachability* _networkReachability;
	NSSNewsAvailabilityMonitor* _NewsAvailabilityMonitor;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FCNetworkReachability * networkReachability;                       //@synthesize networkReachability=_networkReachability - In the implementation block
@property (nonatomic,retain) NSSNewsAvailabilityMonitor * NewsAvailabilityMonitor;              //@synthesize NewsAvailabilityMonitor=_NewsAvailabilityMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;                                 //@synthesize available=_available - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class todayResultsFetchDescriptorClass; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock;                             //@synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(void)_updateAvailability;
-(FCNetworkReachability *)networkReachability;
-(Class)todayResultsFetchDescriptorClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(id)arg1 ;
-(id)initWithNetworkReachability:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3 ;
-(NSSNewsAvailabilityMonitor *)NewsAvailabilityMonitor;
-(void)setNetworkReachability:(FCNetworkReachability *)arg1 ;
-(void)setNewsAvailabilityMonitor:(NSSNewsAvailabilityMonitor *)arg1 ;
@end

