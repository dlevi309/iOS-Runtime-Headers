/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <EventKitUI/EKDayViewController.h>

@class EKEvent;

@interface DDEKDayViewController : EKDayViewController {

	EKEvent* _dd_event;

}

@property (retain) EKEvent * dd_event;              //@synthesize dd_event=_dd_event - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(EKEvent *)dd_event;
-(void)dd_update_scroll;
-(void)setDd_event:(EKEvent *)arg1 ;
@end

