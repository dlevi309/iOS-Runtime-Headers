/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInput;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray;

@interface UIDictationStreamingOperations : NSObject {

	double _timeAfterInsertion;
	double _timeAfterSelectRange;
	id<UITextInput> _document;
	NSMutableArray* _operations;

}

@property (nonatomic,retain) NSMutableArray * operations;              //@synthesize operations=_operations - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(NSMutableArray *)operations;
-(void)popAndInvoke;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(BOOL)hasOperations;
-(id)pop;
-(void)pushSpeechOperation:(id)arg1 ;
-(void)clearOperations;
-(void)setDocument:(id)arg1 ;
-(void)performSelectRangeForSpeech:(id)arg1 ;
-(void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)_performReplaceSelectedText:(id)arg1 ;
-(double)delayAfterSelector:(SEL)arg1 ;
-(void)dictationWillBeginInDocument:(id)arg1 ;
-(void)pushSelectRangeForSpeech:(NSRange)arg1 ;
-(void)pushInsertTextForSpeech:(id)arg1 ;
-(void)pushReplaceSelectionWithText:(id)arg1 ;
-(void)willEndEditingInInputDelegate:(id)arg1 ;
-(BOOL)isNotEmpty;
-(unsigned long long)selectionChangeDelta;
@end

