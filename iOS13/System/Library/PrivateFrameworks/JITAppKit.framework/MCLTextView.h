/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UITextView.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface MCLTextView : UITextView {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)onLongPress:(id)arg1 ;
-(void)onTap:(id)arg1 ;
@end

