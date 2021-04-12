/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)bulletYOffsetForCharacterAtIndex:(unsigned long long)arg1 ;
-(id)textController;
-(void)drawListStylesForCharacterRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
@end

