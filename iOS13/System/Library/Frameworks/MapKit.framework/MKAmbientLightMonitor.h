/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSHashTable;

@interface MKAmbientLightMonitor : NSObject {

	NSHashTable* _observers;
	BOOL _monitoring;
	long long _ambientLightLevel;
	BOOL _debugLogLux;
	IOHIDEventSystemClientRef _client;
	deque<double, std::__1::allocator<double> >* _runningStatBuffer;
	double _runningStatSum;
	double _lightLevelNoneThreshold;
	double _lightLevelLowThreshold;
	double _lightLevelMediumThreshold;
	unsigned _runningStatSize;

}

@property (getter=isMonitoring,nonatomic,readonly) BOOL monitoring;              //@synthesize monitoring=_monitoring - In the implementation block
@property (nonatomic,readonly) long long ambientLightLevel;                      //@synthesize ambientLightLevel=_ambientLightLevel - In the implementation block
@property (assign,nonatomic) BOOL debugLogLux;                                   //@synthesize debugLogLux=_debugLogLux - In the implementation block
+(id)sharedAmbientLightMonitor;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isMonitoring;
-(void)_stopMonitoring;
-(void)handleIOHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_updateThresholds;
-(void)_startMonitoring;
-(double)_addSampleAndComputeMean:(const double*)arg1 ;
-(void)startMonitoringWithObserver:(id)arg1 ;
-(void)stopMonitoringWithObserver:(id)arg1 ;
-(long long)ambientLightLevel;
-(BOOL)debugLogLux;
-(void)setDebugLogLux:(BOOL)arg1 ;
@end

