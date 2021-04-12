/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <Foundation/NSOperation.h>

@class TIHandwritingStrokes, NSLocale, NSArray, NSString, TIInputManagerHandwriting, CHRecognizer;

@interface RecognizeDrawingOperation : NSOperation {

	TIHandwritingStrokes* _strokes;
	NSLocale* _recognitionLanguage;
	NSArray* _candidates;
	NSString* _history;
	TIInputManagerHandwriting* _im;
	CHRecognizer* _recognizer;

}

@property (nonatomic,retain) NSArray * candidates;                             //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) TIInputManagerHandwriting * manager;              //@synthesize im=_im - In the implementation block
@property (nonatomic,retain) NSString * history;                               //@synthesize history=_history - In the implementation block
@property (nonatomic,retain) CHRecognizer * recognizer;                        //@synthesize recognizer=_recognizer - In the implementation block
+(id)recognitionResultsForStrokes:(id)arg1 withRecognizer:(id)arg2 history:(id)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(NSString *)history;
-(void)setManager:(TIInputManagerHandwriting *)arg1 ;
-(void)setHistory:(NSString *)arg1 ;
-(void)main;
-(TIInputManagerHandwriting *)manager;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(void)dealloc;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3 ;
@end

