/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactPlatterViewController.h>

@class NSProgress, WFDialogAttribution, WFCompactStopButton;

@interface WFCompactStatusViewController : WFCompactPlatterViewController {

	NSProgress* _progress;
	WFDialogAttribution* _attribution;
	WFCompactStopButton* _stopButton;

}

@property (nonatomic,readonly) WFCompactStopButton * stopButton;              //@synthesize stopButton=_stopButton - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) WFDialogAttribution * attribution;               //@synthesize attribution=_attribution - In the implementation block
-(NSProgress *)progress;
-(WFDialogAttribution *)attribution;
-(void)setProgress:(NSProgress *)arg1 ;
-(WFCompactStopButton *)stopButton;
-(void)loadView;
-(void)setAttribution:(WFDialogAttribution *)arg1 ;
-(void)transitionToCompleted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)popCompletedCheckmark;
@end

