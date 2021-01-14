/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)onLongPress:(id)arg1 ;
-(void)onTap:(id)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(UITapGestureRecognizer *)tapGestureRecognizer;
@end

