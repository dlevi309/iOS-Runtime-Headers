/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFActionExtendedOperation.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol OS_dispatch_queue;
@class NSProgress, AVSpeechSynthesizer, NSMutableArray, NSObject, NSString;

@interface WFSpeakTextActionOperation : NSObject <WFActionExtendedOperation, AVSpeechSynthesizerDelegate> {

	NSProgress* _progress;
	AVSpeechSynthesizer* _synthesizer;
	NSMutableArray* _completionHandlers;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (assign,nonatomic,__weak) NSProgress * progress;                              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) AVSpeechSynthesizer * synthesizer;                       //@synthesize synthesizer=_synthesizer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionHandlers;                     //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)callCompletionHandlers;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSMutableArray *)completionHandlers;
-(AVSpeechSynthesizer *)synthesizer;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3 ;
-(void)cancel;
-(void)addCompletionHandlerIfRunning:(/*^block*/id)arg1 ;
-(void)speakTextUsingSynthesizer:(id)arg1 voice:(id)arg2 rate:(float)arg3 pitch:(float)arg4 ;
-(void)cleanupSpeechSynthesizer;
@end

