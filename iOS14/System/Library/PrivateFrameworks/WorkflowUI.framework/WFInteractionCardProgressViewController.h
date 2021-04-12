/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>

@class SUICProgressEventViewController;

@interface WFInteractionCardProgressViewController : UIViewController {

	SUICProgressEventViewController* _progressEventViewController;

}

@property (nonatomic,retain) SUICProgressEventViewController * progressEventViewController;              //@synthesize progressEventViewController=_progressEventViewController - In the implementation block
-(void)handleEvent:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(SUICProgressEventViewController *)progressEventViewController;
-(void)setProgressEventViewController:(SUICProgressEventViewController *)arg1 ;
@end

