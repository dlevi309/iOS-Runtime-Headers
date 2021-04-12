/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableView.h>

@class EKEventViewController;

@interface EKEventTableView : UITableView {

	EKEventViewController* _controller;

}

@property (assign,nonatomic,__weak) EKEventViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)reloadData;
-(void)setController:(EKEventViewController *)arg1 ;
-(EKEventViewController *)controller;
@end

