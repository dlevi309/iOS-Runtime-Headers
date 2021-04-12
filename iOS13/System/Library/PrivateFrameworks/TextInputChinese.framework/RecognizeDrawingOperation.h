/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)main;
-(TIInputManagerHandwriting *)manager;
-(NSString *)history;
-(void)setManager:(TIInputManagerHandwriting *)arg1 ;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(void)setHistory:(NSString *)arg1 ;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3 ;
@end

