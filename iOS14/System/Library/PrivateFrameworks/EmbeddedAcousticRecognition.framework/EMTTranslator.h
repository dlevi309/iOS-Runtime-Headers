/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject;

@interface EMTTranslator : NSObject {

	shared_ptr<quasar::TranslatorFactory>* _translatorFactory;
	NSObject*<OS_dispatch_queue> _translationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(void)initialize;
-(id)initWithModelURL:(id)arg1 task:(id)arg2 ;
-(void)loadTranslatorFrom:(id)arg1 to:(id)arg2 ;
-(void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithModelURL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)translateSpeech:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateString:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)_tokenizeString:(id)arg1 ;
-(void)_translate:(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateSpeech:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)translateString:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

