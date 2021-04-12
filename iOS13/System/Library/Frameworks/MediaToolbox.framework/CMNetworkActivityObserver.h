/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(void)unregisterObservations;
-(CMNetworkActivityMonitor *)activityMonitor;
-(void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(/*^block*/id)arg2 ;
-(void)registerObservations;
-(id)initForActivityMonitor:(id)arg1 ;
@end

