/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/


@class CHRecognizer, NSLocale;

@interface RecognizerProvider : NSObject {

	CHRecognizer* _recognizer;
	NSLocale* _recognitionLanguage;
	/*^block*/id _recognizerDidLoadBlock;

}

@property (readonly) NSLocale * recognitionLanguage;              //@synthesize recognitionLanguage=_recognitionLanguage - In the implementation block
@property (readonly) CHRecognizer * recognizer;                   //@synthesize recognizer=_recognizer - In the implementation block
@property (copy) id recognizerDidLoadBlock;                       //@synthesize recognizerDidLoadBlock=_recognizerDidLoadBlock - In the implementation block
-(NSLocale *)recognitionLanguage;
-(void)dealloc;
-(CHRecognizer *)recognizer;
-(id)initWithRecognitionLanguage:(id)arg1 ;
-(void)provideRecognizerToBlock:(/*^block*/id)arg1 ;
-(void)unloadRecognizer;
-(id)recognizerDidLoadBlock;
-(void)setRecognizerDidLoadBlock:(id)arg1 ;
@end

