/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <libobjc.A.dylib/_EARSpeechRecognitionResultStream.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSError, NSArray, NSString;

@interface _EARSyncResultStreamHelper : NSObject <_EARSpeechRecognitionResultStream> {

	NSObject*<OS_dispatch_semaphore> _finishSemaphore;
	NSError* _error;
	NSArray* _results;

}

@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * results;                   //@synthesize results=_results - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)results;
-(id)init;
-(NSError *)error;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(void)waitForCompletion;
@end

