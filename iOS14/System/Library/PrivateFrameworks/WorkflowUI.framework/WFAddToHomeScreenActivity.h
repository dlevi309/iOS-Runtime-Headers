/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSource:(id)arg1 ;
-(id)activityType;
-(id)init;
-(id<WFAddToHomeScreenActivityDelegate>)delegate;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setDelegate:(id<WFAddToHomeScreenActivityDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)_systemImageName;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)cancel;
-(NSString *)source;
-(UINavigationController *)navigationController;
-(id)activityViewController;
-(void)addToHomeScreenViewController:(id)arg1 didFinishWithName:(id)arg2 icon:(id)arg3 ;
-(void)addToHomeScreenWithName:(id)arg1 icon:(id)arg2 ;
@end

