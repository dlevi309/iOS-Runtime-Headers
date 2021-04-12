/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol OS_dispatch_queue, EARCaesuraSilencePosteriorGeneratorDelegate;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject;

@interface EARCaesuraSilencePosteriorGenerator : NSObject {

	shared_ptr<quasar::SilencePosteriorGenerator>* _silenceGenerator;
	NSObject*<OS_dispatch_queue> _spgQueue;
	id<EARCaesuraSilencePosteriorGeneratorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EARCaesuraSilencePosteriorGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<EARCaesuraSilencePosteriorGeneratorDelegate>)delegate;
-(void)setDelegate:(id<EARCaesuraSilencePosteriorGeneratorDelegate>)arg1 ;
-(void)endAudio;
-(void)_startComputeTask;
-(id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 ;
-(id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 queue:(id)arg3 ;
-(id)initWithConfigFile:(id)arg1 ;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(long long)getFrameDurationMs;
@end

