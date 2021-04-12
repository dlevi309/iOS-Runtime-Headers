/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)pop;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)operations;
-(id)init;
-(BOOL)hasOperations;
-(void)setDocument:(id)arg1 ;
-(BOOL)isNotEmpty;
-(void)pushSpeechOperation:(id)arg1 ;
-(void)clearOperations;
-(void)performSelectRangeForSpeech:(id)arg1 ;
-(void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)_performReplaceSelectedText:(id)arg1 ;
-(double)delayAfterSelector:(SEL)arg1 ;
-(void)dictationWillBeginInDocument:(id)arg1 ;
-(void)pushSelectRangeForSpeech:(NSRange)arg1 ;
-(void)pushInsertTextForSpeech:(id)arg1 ;
-(void)pushReplaceSelectionWithText:(id)arg1 ;
-(void)willEndEditingInInputDelegate:(id)arg1 ;
-(unsigned long long)selectionChangeDelta;
-(void)popAndInvoke;
-(BOOL)isEmpty;
@end

