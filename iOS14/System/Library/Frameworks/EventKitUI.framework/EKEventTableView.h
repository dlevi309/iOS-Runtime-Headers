/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableView.h>

@class EKEventViewController;

@interface EKEventTableView : UITableView {

	EKEventViewController* _controller;

}

@property (assign,nonatomic,__weak) EKEventViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)setController:(EKEventViewController *)arg1 ;
-(void)reloadData;
-(EKEventViewController *)controller;
@end

