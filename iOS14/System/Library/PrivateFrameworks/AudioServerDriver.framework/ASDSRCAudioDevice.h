/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDAudioDevice.h>
#import <libobjc.A.dylib/ASDDeviceConfigurationChangeDelegate.h>
#import <libobjc.A.dylib/ASDPropertyChangedDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, ASDAudioDevice, NSString;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {

	double _samplingRate;
	NSArray* _samplingRates;
	NSObject*<OS_dispatch_queue> _sampleRateQueue;
	SCD_Struct_AS16 _lastTimestamp;
	ASDAudioDevice* _underlyingDevice;

}

@property (nonatomic,readonly) ASDAudioDevice * underlyingDevice;              //@synthesize underlyingDevice=_underlyingDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)deviceName;
-(BOOL)isHidden;
-(id)manufacturerName;
-(id)modelName;
-(unsigned)transportType;
-(unsigned)inputLatency;
-(unsigned)outputLatency;
-(unsigned)inputSafetyOffset;
-(unsigned)outputSafetyOffset;
-(void)setSamplingRate:(double)arg1 ;
-(double)samplingRate;
-(void)setDeviceName:(id)arg1 ;
-(id)samplingRates;
-(ASDAudioDevice *)underlyingDevice;
-(id)modelUID;
-(unsigned)clockDomain;
-(BOOL)canBeDefaultDevice;
-(BOOL)canBeDefaultInputDevice;
-(BOOL)canBeDefaultOutputDevice;
-(BOOL)canBeDefaultSystemDevice;
-(unsigned)timestampPeriod;
-(void)changedProperty:(const AudioObjectPropertyAddress*)arg1 forObject:(id)arg2 ;
-(BOOL)requestConfigurationChangeForDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(int)startIOForClient:(unsigned)arg1 ;
-(int)stopIOForClient:(unsigned)arg1 ;
-(unsigned)clockAlgorithm;
-(BOOL)clockIsStable;
-(BOOL)changeSamplingRate:(double)arg1 ;
-(int)performStopIO;
-(/*^block*/id)getZeroTimestampBlock;
-(/*^block*/id)willDoReadInputBlock;
-(/*^block*/id)willDoWriteMixBlock;
-(void)setSamplingRates:(id)arg1 ;
-(id)initWithDeviceUID:(id)arg1 underlyingDevice:(id)arg2 plugin:(id)arg3 ;
@end

