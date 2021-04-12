/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>

@protocol WFAutomationTypeChooserViewControllerDelegate;
@class WFHomeManager, NSString;

@interface WFAutomationTypeChooserViewController : UITableViewController <WFHomeManagerEventObserver> {

	id<WFAutomationTypeChooserViewControllerDelegate> _delegate;
	WFHomeManager* _homeManager;

}

@property (nonatomic,readonly) WFHomeManager * homeManager;                                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic,__weak) id<WFAutomationTypeChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)automationTypeForHomeManager:(id)arg1 ;
-(id<WFAutomationTypeChooserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAutomationTypeChooserViewControllerDelegate>)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)isModalInPresentation;
-(WFHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(void)choosePersonalAutomation:(id)arg1 ;
-(void)chooseHomeAutomation:(id)arg1 ;
@end

