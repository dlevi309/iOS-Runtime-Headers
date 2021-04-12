/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITextViewDrawingDelegate;
@class UITextView, PKTiledView, UILongPressGestureRecognizer, NSString;

@interface UITextViewDrawingInfo : NSObject <UIGestureRecognizerDelegate> {

	BOOL _addBottomPadding;
	BOOL _rulerEnabled;
	UITextView* _textView;
	PKTiledView* _tiledView;
	id<UITextViewDrawingDelegate> _delegate;
	UILongPressGestureRecognizer* _insertLongPressGestureRecognizer;

}

@property (assign,nonatomic,__weak) UITextView * textView;                                                 //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) BOOL addBottomPadding;                                                        //@synthesize addBottomPadding=_addBottomPadding - In the implementation block
@property (nonatomic,retain) PKTiledView * tiledView;                                                      //@synthesize tiledView=_tiledView - In the implementation block
@property (assign,nonatomic,__weak) id<UITextViewDrawingDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * insertLongPressGestureRecognizer;              //@synthesize insertLongPressGestureRecognizer=_insertLongPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL rulerEnabled;                                                            //@synthesize rulerEnabled=_rulerEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id<UITextViewDrawingDelegate>)delegate;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setDelegate:(id<UITextViewDrawingDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(PKTiledView *)tiledView;
-(void)setRulerEnabled:(BOOL)arg1 ;
-(BOOL)rulerEnabled;
-(void)setTiledView:(PKTiledView *)arg1 ;
-(id)initForTextView:(id)arg1 ;
-(BOOL)addBottomPadding;
-(void)setAddBottomPadding:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)insertLongPressGestureRecognizer;
-(void)setInsertLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

