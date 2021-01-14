/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer;

@interface CHReorderSCTCConfusionStep : CHPostprocessingStep {

	void* _icuTransliterator;
	CHRecognizer* _recognizer;

}

@property (assign,nonatomic) void* icuTransliterator;                //@synthesize icuTransliterator=_icuTransliterator - In the implementation block
@property (assign,nonatomic) CHRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
-(id)process:(id)arg1 ;
-(void)dealloc;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(void*)icuTransliterator;
-(void)setIcuTransliterator:(void*)arg1 ;
-(id)initWithRecognizer:(id)arg1 ;
@end

