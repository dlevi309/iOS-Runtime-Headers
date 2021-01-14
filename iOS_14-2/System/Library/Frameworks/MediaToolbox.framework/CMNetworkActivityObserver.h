/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@class CMNetworkActivityMonitor;

@interface CMNetworkActivityObserver : NSObject {

	BOOL _valid;
	BOOL _registered;
	int _cmActivityToken;
	int _cmActivityPollingToken;
	CMNetworkActivityMonitor* _activityMonitor;

}

@property (nonatomic,readonly) CMNetworkActivityMonitor * activityMonitor; 
+(id)registeredObserverForActivityMonitor:(id)arg1 ;
-(void)unregisterObservations;
-(void)registerObservations;
-(CMNetworkActivityMonitor *)activityMonitor;
-(void)invalidate;
-(id)initForActivityMonitor:(id)arg1 ;
-(void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

