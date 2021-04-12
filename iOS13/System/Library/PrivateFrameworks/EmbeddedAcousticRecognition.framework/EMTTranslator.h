/*
* Generated on Monday, March 1, 2021 at 2:32:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject;

@interface EMTTranslator : NSObject {

	shared_ptr<quasar::TranslatorFactory>* _translatorFactory;
	SystemConfig* _config;
	NSObject*<OS_dispatch_queue> _translationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithModelURL:(id)arg1 ;
-(void)translateSpeech:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateString:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)_tokenizeString:(id)arg1 ;
-(void)_translate:(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadTranslatorFrom:(id)arg1 to:(id)arg2 ;
-(void)translateSpeech:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)translateString:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

