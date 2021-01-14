/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/ADAMAudioDataReceiverDelegate.h>

@protocol OS_dispatch_queue;
@class ADAMAudioDataReceiver, AXDispatchTimer, NSObject, NSString;

@interface HUHeadphoneLevelController : NSObject <ADAMAudioDataReceiverDelegate> {

	BOOL _measurementEnabled;
	float _slowLeq;
	float _fastLeq;
	ADAMAudioDataReceiver* _receiver;
	AXDispatchTimer* _adamSuspendedTimer;
	NSObject*<OS_dispatch_queue> _dataQueue;
	unsigned long long _thresholdLevel;

}

@property (nonatomic,retain) ADAMAudioDataReceiver * receiver;                                 //@synthesize receiver=_receiver - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * adamSuspendedTimer;                             //@synthesize adamSuspendedTimer=_adamSuspendedTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueue;                           //@synthesize dataQueue=_dataQueue - In the implementation block
@property (assign,nonatomic) float slowLeq;                                                    //@synthesize slowLeq=_slowLeq - In the implementation block
@property (assign,nonatomic) float fastLeq;                                                    //@synthesize fastLeq=_fastLeq - In the implementation block
@property (assign,getter=isMeasurementEnabled,nonatomic) BOOL measurementEnabled;              //@synthesize measurementEnabled=_measurementEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long thresholdLevel;                                //@synthesize thresholdLevel=_thresholdLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(BOOL)isMeasurementEnabled;
-(ADAMAudioDataReceiver *)receiver;
-(id)init;
-(void)setSlowLeq:(float)arg1 ;
-(void)setReceiver:(ADAMAudioDataReceiver *)arg1 ;
-(void)setFastLeq:(float)arg1 ;
-(void)pushValues;
-(void)receiveAudioSample:(id)arg1 ;
-(float)fastLeq;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(void)setAdamSuspendedTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)adamSuspendedTimer;
-(id)registerForHeadphoneLevelUpdates:(id)arg1 ;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)thresholdLevel;
-(void)setMeasurementEnabled:(BOOL)arg1 ;
-(void)restartADAMTimer;
-(void)setThresholdLevel:(unsigned long long)arg1 ;
-(float)slowLeq;
-(void)dealloc;
@end

