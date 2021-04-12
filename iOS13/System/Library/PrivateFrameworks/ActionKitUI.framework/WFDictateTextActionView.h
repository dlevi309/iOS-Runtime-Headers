/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <WorkflowUI/WFActionCustomView.h>
#import <libobjc.A.dylib/WFDictateTextActionRunningDelegate.h>

@class UITextView, WFDictateTextActionStopButton, UIButton, NSString;

@interface WFDictateTextActionView : WFActionCustomView <WFDictateTextActionRunningDelegate> {

	UITextView* _textView;
	WFDictateTextActionStopButton* _stopButton;
	UIButton* _inputSourceButton;

}

@property (assign,nonatomic,__weak) UITextView * textView;                                   //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) WFDictateTextActionStopButton * stopButton;              //@synthesize stopButton=_stopButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * inputSourceButton;                            //@synthesize inputSourceButton=_inputSourceButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeightForAction:(id)arg1 ;
-(void)dealloc;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)setStopButton:(WFDictateTextActionStopButton *)arg1 ;
-(WFDictateTextActionStopButton *)stopButton;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(void)action:(id)arg1 didReceiveTranscription:(id)arg2 ;
-(void)actionDidBeginListening:(id)arg1 ;
-(void)sourceButtonTapped;
-(void)stopButtonTapped;
-(void)updateInputSourceButton;
-(UIButton *)inputSourceButton;
-(void)setInputSourceButton:(UIButton *)arg1 ;
@end

