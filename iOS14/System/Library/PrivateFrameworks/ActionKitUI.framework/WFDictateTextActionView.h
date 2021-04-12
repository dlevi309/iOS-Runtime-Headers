/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFDictateTextActionViewDelegate;
@class UITextView, WFDictateTextActionStopButton;

@interface WFDictateTextActionView : UIView {

	id<WFDictateTextActionViewDelegate> _delegate;
	UITextView* _textView;
	WFDictateTextActionStopButton* _stopButton;

}

@property (assign,nonatomic,__weak) UITextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) WFDictateTextActionStopButton * stopButton;                //@synthesize stopButton=_stopButton - In the implementation block
@property (assign,nonatomic,__weak) id<WFDictateTextActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UITextView *)textView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<WFDictateTextActionViewDelegate>)delegate;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setDelegate:(id<WFDictateTextActionViewDelegate>)arg1 ;
-(WFDictateTextActionStopButton *)stopButton;
-(void)setStopButton:(WFDictateTextActionStopButton *)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 padded:(BOOL)arg2 ;
-(void)stopButtonTapped;
-(void)updateWithTranscription:(id)arg1 ;
@end

