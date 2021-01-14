/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, HFCameraScrubberReachabilityEventContainer, HMCameraProfile, NSString;

@interface HUDiagnosticsReachabilityEventViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _eventTableView;
	HFCameraScrubberReachabilityEventContainer* _container;
	HMCameraProfile* _cameraProfile;

}

@property (nonatomic,retain) UITableView * eventTableView;                                        //@synthesize eventTableView=_eventTableView - In the implementation block
@property (nonatomic,retain) HFCameraScrubberReachabilityEventContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) HMCameraProfile * cameraProfile;                                     //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(HMCameraProfile *)cameraProfile;
-(void)setContainer:(HFCameraScrubberReachabilityEventContainer *)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(HFCameraScrubberReachabilityEventContainer *)container;
-(UITableView *)eventTableView;
-(void)setEventTableView:(UITableView *)arg1 ;
-(id)initWithReachabilityEvent:(id)arg1 cameraProfile:(id)arg2 ;
@end

