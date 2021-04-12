/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@class UITextView;

@interface ICBaseLayoutManager : NSLayoutManager {

	UITextView* _textView;

}

@property (assign,nonatomic,__weak) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
+(id)defaultLinkTextAttributes;
-(UITextView *)textView;
-(id)textContainer;
-(void)setTextView:(UITextView *)arg1 ;
-(void)drawBulletsForListRange:(NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(CGPoint)arg3 ;
-(id)textController;
-(double)bulletYOffsetForCharacterAtIndex:(unsigned long long)arg1 ;
-(void)drawListStylesForCharacterRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
@end

