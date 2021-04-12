/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAudioIssueDetector.dylib
*/


@protocol ADAMServerProtocol <NSObject>
@optional
-(void)startMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withConfiguration:(id)arg3 andReply:(/*^block*/id)arg4;
-(void)stopMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 andReply:(/*^block*/id)arg3;
-(void)configureAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 configuration:(id)arg3 withReply:(/*^block*/id)arg4;

@required
-(void)startListeningToAudioSampleWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3;
-(void)stopListeningToAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3;

@end

