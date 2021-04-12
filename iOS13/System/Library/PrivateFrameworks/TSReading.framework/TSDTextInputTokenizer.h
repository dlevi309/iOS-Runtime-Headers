/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UITextInputStringTokenizer.h>

@class TSDTextInputResponder;

@interface TSDTextInputTokenizer : UITextInputStringTokenizer {

	TSDTextInputResponder* _textInputResponder;

}

@property (nonatomic,readonly) id<TSDTextInput> editor; 
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)initWithTextInput:(id)arg1 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(id<TSDTextInput>)editor;
-(id)p_positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)p_moveToEndOfWordFromPosition:(id)arg1 ;
-(id)p_moveToStartOfWordFromPosition:(id)arg1 ;
@end

