/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInputStringTokenizer.h>

@class UITextInputController;

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {

	UITextInputController* _textInput;
	CFStringTokenizerRef _tokenizer;
	int _tokenizerType;
	BOOL _tokenizerIsInvalid;

}
-(void)dealloc;
-(long long)_indexForTextPosition:(id)arg1 ;
-(BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2 ;
-(id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3 ;
-(id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3 ;
-(id)initWithTextInputController:(id)arg1 ;
-(void)invalidateTokenizer;
-(long long)_writingDirectionAtPosition:(id)arg1 ;
@end

