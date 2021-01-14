/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/_LTTranslationRequest.h>
#import <libobjc.A.dylib/_LTSpeechTranslationDelegate.h>

@protocol OS_dispatch_queue, _LTTranslationService, _LTSpeechTranslationDelegate;
@class NSObject, NSString;

@interface _LTTextToSpeechTranslationRequest : _LTTranslationRequest <_LTSpeechTranslationDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_LTTranslationService> _service;
	/*^block*/id _done;
	NSString* _text;
	id<_LTSpeechTranslationDelegate> _delegate;

}

@property (nonatomic,copy) NSString * text;                                                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic,__weak) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id<_LTSpeechTranslationDelegate>)delegate;
-(void)_startTranslationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(id)initWithLocalePair:(id)arg1 ;
-(id)loggingType;
-(void)_translationFailedWithError:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)nativeAudioFormat;
-(id)requestContext;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(void)translatorDidTranslate:(id)arg1 ;
-(void)translationDidFinishWithError:(id)arg1 ;
-(id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2 ;
-(NSString *)text;
@end

