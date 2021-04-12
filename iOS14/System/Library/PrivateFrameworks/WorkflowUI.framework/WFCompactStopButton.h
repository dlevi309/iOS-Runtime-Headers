/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSProgress, WFWorkflowProgressView;

@interface WFCompactStopButton : UIButton {

	NSProgress* _progress;
	WFWorkflowProgressView* _progressView;

}

@property (nonatomic,readonly) WFWorkflowProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                //@synthesize progress=_progress - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(WFWorkflowProgressView *)progressView;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)transitionToCompleted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)popCompletedCheckmark;
-(void)handleTouchUpInside;
@end

