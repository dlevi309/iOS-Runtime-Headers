/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3 ;
-(id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3 ;
-(long long)_indexForTextPosition:(id)arg1 ;
-(BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2 ;
-(id)initWithTextInputController:(id)arg1 ;
-(void)invalidateTokenizer;
-(void)dealloc;
-(long long)_writingDirectionAtPosition:(id)arg1 ;
@end

