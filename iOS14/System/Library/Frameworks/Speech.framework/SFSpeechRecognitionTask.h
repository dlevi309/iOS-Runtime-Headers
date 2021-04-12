/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <libobjc.A.dylib/AFDictationDelegate.h>
#import <libobjc.A.dylib/SFSpeechRecognitionBufferDelegate.h>

@protocol OS_dispatch_queue;
@class AFDictationConnection, NSOperationQueue, NSString, SFSpeechRecognitionRequest, NSObject, NSError;

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate> {

	AFDictationConnection* _dictationConnection;
	NSOperationQueue* _externalQueue;
	NSString* _languageCode;
	SFSpeechRecognitionRequest* _request;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _completed;
	BOOL _running;
	BOOL _finishing;
	BOOL _cancelled;
	long long _taskHint;
	NSError* _error;
	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) long long _taskHint;                            //@synthesize taskHint=_taskHint - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (getter=isFinishing,nonatomic,readonly) BOOL finishing;              //@synthesize finishing=_finishing - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transcriptionsWithTokens:(id)arg1 ;
+(id)recognizedResultFromPackage:(id)arg1 ;
-(void)finish;
-(NSString *)requestIdentifier;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(long long)_taskHint;
-(NSError *)error;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(long long)state;
-(float)peakPower;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(float)averagePower;
-(void)cancel;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)addRecordedSpeechSampleData:(id)arg1 ;
-(void)stopSpeech;
-(BOOL)isCancelled;
-(id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 ;
-(BOOL)isFinishing;
@end

