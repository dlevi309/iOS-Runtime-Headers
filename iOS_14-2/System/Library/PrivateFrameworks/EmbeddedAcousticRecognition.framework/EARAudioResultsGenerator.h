/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol EARAudioResultsGeneratorDelegate, OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSMutableData, NSString, NSObject;

@interface EARAudioResultsGenerator : NSObject {

	shared_ptr<quasar::SyncPSRAudioProcessor>* _audioProcessor;
	unsigned long long _sampleRate;
	BOOL _isAudioSessionLive;
	NSMutableData* _entireResultMatrix;
	unsigned long long _globalNumVectors;
	unsigned long long _vectorSize;
	unsigned long long _sessionFrameCount;
	id<EARAudioResultsGeneratorDelegate> _delegate;
	NSString* _configRoot;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<EARAudioResultsGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * configRoot;                                             //@synthesize configRoot=_configRoot - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
+(void)initialize;
-(id<EARAudioResultsGeneratorDelegate>)delegate;
-(void)setDelegate:(id<EARAudioResultsGeneratorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)endAudio;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resetForNewRequest;
-(id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(void)addAudio:(id)arg1 ;
-(NSString *)configRoot;
-(void)setConfigRoot:(NSString *)arg1 ;
-(id)audioResultMatrix;
-(id)audioResultLastVector;
@end

