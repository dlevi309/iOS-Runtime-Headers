/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>
#import <libobjc.A.dylib/CSSelfTriggerDetectorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(id)_metaFilenameWithPrefix:(id)arg1 ;
-(id)init;
-(id)_timeStampString;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)_clearOldLoggingFiles;
-(void)_writeDictionary:(id)arg1 toPath:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2 ;
-(id)_audioLogDirectory;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
@end

