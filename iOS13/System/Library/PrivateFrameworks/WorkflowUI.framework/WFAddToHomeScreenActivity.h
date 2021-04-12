/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/WFAddToHomeScreenViewControllerDelegate.h>

@protocol WFAddToHomeScreenActivityDelegate;
@class NSString, WFWorkflow, UINavigationController;

@interface WFAddToHomeScreenActivity : UIActivity <WFAddToHomeScreenViewControllerDelegate> {

	id<WFAddToHomeScreenActivityDelegate> _delegate;
	NSString* _source;
	WFWorkflow* _workflow;
	UINavigationController* _navigationController;

}

@property (nonatomic,copy) NSString * source;                                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                              //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) id<WFAddToHomeScreenActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFAddToHomeScreenActivityDelegate>)delegate;
-(void)setDelegate:(id<WFAddToHomeScreenActivityDelegate>)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)cancel;
-(id)activityType;
-(UINavigationController *)navigationController;
-(id)initWithSource:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)addToHomeScreenViewController:(id)arg1 didFinishWithName:(id)arg2 icon:(id)arg3 ;
-(void)addToHomeScreenWithName:(id)arg1 icon:(id)arg2 ;
@end

