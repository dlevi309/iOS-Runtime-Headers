/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTSourceAvailabilityEntry.h>

@protocol OS_dispatch_queue;
@class FCNetworkReachability, FCNewsAvailabilityMonitor, NSObject, NSString;

@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {

	BOOL _available;
	/*^block*/id _availabilityChangedNotificationBlock;
	FCNetworkReachability* _networkReachability;
	FCNewsAvailabilityMonitor* _NewsAvailabilityMonitor;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FCNetworkReachability * networkReachability;                      //@synthesize networkReachability=_networkReachability - In the implementation block
@property (nonatomic,retain) FCNewsAvailabilityMonitor * NewsAvailabilityMonitor;              //@synthesize NewsAvailabilityMonitor=_NewsAvailabilityMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;                                //@synthesize available=_available - In the implementation block
@property (nonatomic,readonly) Class todayResultsFetchDescriptorClass; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock;                            //@synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setNetworkReachability:(FCNetworkReachability *)arg1 ;
-(id)init;
-(void)setNewsAvailabilityMonitor:(FCNewsAvailabilityMonitor *)arg1 ;
-(Class)todayResultsFetchDescriptorClass;
-(id)availabilityChangedNotificationBlock;
-(void)_updateAvailability;
-(void)setAvailabilityChangedNotificationBlock:(id)arg1 ;
-(FCNetworkReachability *)networkReachability;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithNetworkReachability:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3 ;
-(FCNewsAvailabilityMonitor *)NewsAvailabilityMonitor;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

