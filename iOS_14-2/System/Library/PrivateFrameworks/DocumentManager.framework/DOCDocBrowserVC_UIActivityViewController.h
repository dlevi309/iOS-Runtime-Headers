/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol DOCServicePopoverTrackerProtocol;
@class UIBarButtonItem;

@interface DOCDocBrowserVC_UIActivityViewController : UIActivityViewController {

	id<DOCServicePopoverTrackerProtocol> _popoverTracker;
	UIBarButtonItem* _barButtonItem;

}

@property (retain) id<DOCServicePopoverTrackerProtocol> popoverTracker;              //@synthesize popoverTracker=_popoverTracker - In the implementation block
@property (__weak) UIBarButtonItem * barButtonItem;                                  //@synthesize barButtonItem=_barButtonItem - In the implementation block
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id<DOCServicePopoverTrackerProtocol>)popoverTracker;
-(void)setPopoverTracker:(id<DOCServicePopoverTrackerProtocol>)arg1 ;
@end

