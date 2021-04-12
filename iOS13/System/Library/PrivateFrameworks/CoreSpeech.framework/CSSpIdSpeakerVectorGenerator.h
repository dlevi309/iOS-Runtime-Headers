/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/EARPSRAudioProcessorDelegate.h>

@protocol CSSpIdSpeakerVectorGeneratorDelegate, OS_dispatch_queue;
@class NSString, EARPSRAudioProcessor, NSObject;

@interface CSSpIdSpeakerVectorGenerator : NSObject <EARPSRAudioProcessorDelegate> {

	unsigned long long _spIdType;
	NSString* _spIdTypeStr;
	id<CSSpIdSpeakerVectorGeneratorDelegate> _delegate;
	EARPSRAudioProcessor* _psrAudioProcessor;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) unsigned long long spIdType;                                           //@synthesize spIdType=_spIdType - In the implementation block
@property (nonatomic,retain) NSString * spIdTypeStr;                                                //@synthesize spIdTypeStr=_spIdTypeStr - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpIdSpeakerVectorGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EARPSRAudioProcessor * psrAudioProcessor;                              //@synthesize psrAudioProcessor=_psrAudioProcessor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSSpIdSpeakerVectorGeneratorDelegate>)delegate;
-(void)setDelegate:(id<CSSpIdSpeakerVectorGeneratorDelegate>)arg1 ;
-(void)endAudio;
-(void)psrAudioProcessor:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(void)psrAudioProcessor:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(id)initWithCSSpIdType:(unsigned long long)arg1 withSysConfigFilepath:(id)arg2 sysConfigRoot:(id)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(void)processAudioData:(id)arg1 ;
-(unsigned long long)spIdType;
-(void)setSpIdType:(unsigned long long)arg1 ;
-(NSString *)spIdTypeStr;
-(void)setSpIdTypeStr:(NSString *)arg1 ;
-(BOOL)_isSpeakerVectorValid:(id)arg1 speakerVectorSize:(unsigned long long)arg2 fromPsrAudioProcessor:(id)arg3 ;
-(EARPSRAudioProcessor *)psrAudioProcessor;
-(void)setPsrAudioProcessor:(EARPSRAudioProcessor *)arg1 ;
@end

