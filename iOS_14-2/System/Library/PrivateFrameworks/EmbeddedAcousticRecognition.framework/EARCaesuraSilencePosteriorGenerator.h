/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol OS_dispatch_queue, EARCaesuraSilencePosteriorGeneratorDelegate;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString, NSObject;

@interface EARCaesuraSilencePosteriorGenerator : NSObject {

	shared_ptr<quasar::SilencePosteriorGenerator>* _silenceGenerator;
	NSString* _configFile;
	unsigned long long _samplingRate;
	NSObject*<OS_dispatch_queue> _spgQueue;
	id<EARCaesuraSilencePosteriorGeneratorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EARCaesuraSilencePosteriorGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(id<EARCaesuraSilencePosteriorGeneratorDelegate>)delegate;
-(void)setDelegate:(id<EARCaesuraSilencePosteriorGeneratorDelegate>)arg1 ;
-(void)endAudio;
-(id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 ;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)dealloc;
-(long long)getFrameDurationMs;
-(id)initWithConfigFile:(id)arg1 ;
-(void)resetForNewRequest;
-(id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 queue:(id)arg3 ;
-(void)_startComputeTask;
@end

