/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <EventKitUI/EKDayViewController.h>

@class EKEvent;

@interface DDEKDayViewController : EKDayViewController {

	EKEvent* _dd_event;

}

@property (retain) EKEvent * dd_event;              //@synthesize dd_event=_dd_event - In the implementation block
-(CGSize)preferredContentSize;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(EKEvent *)dd_event;
-(void)dd_update_scroll;
-(void)setDd_event:(EKEvent *)arg1 ;
@end

