/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAudioIssueDetector.dylib
*/


@protocol ADAMServerProtocol <NSObject>
@optional
-(void)stopMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 andReply:(/*^block*/id)arg3;
-(void)isMeasurementOnForAudioSampleType:(unsigned)arg1 withReply:(/*^block*/id)arg2;
-(void)getCurrentConfigurationForAudioSampleType:(unsigned)arg1 withReply:(/*^block*/id)arg2;
-(void)startMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withConfiguration:(id)arg3 andReply:(/*^block*/id)arg4;
-(void)configureAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 configuration:(id)arg3 withReply:(/*^block*/id)arg4;

@required
-(void)stopListeningToAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3;
-(void)startListeningToAudioSampleWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3;

@end

