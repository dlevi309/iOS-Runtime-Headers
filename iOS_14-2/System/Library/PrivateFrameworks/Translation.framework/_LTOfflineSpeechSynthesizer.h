/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>

@class NSString;

@interface _LTOfflineSpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate> {

	/*^block*/id _completion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(long long)preferredVoiceGender;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5 ;
-(void)speak:(id)arg1 withContext:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3 ;
-(void)cancel;
@end

