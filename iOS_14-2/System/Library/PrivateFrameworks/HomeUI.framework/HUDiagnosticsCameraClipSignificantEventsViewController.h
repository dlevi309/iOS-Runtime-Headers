/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class HMCameraClip, UITableView, NSString;

@interface HUDiagnosticsCameraClipSignificantEventsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	HMCameraClip* _cameraClip;
	UITableView* _eventTableView;

}

@property (nonatomic,retain) HMCameraClip * cameraClip;                 //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,retain) UITableView * eventTableView;              //@synthesize eventTableView=_eventTableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithCameraClip:(id)arg1 ;
-(HMCameraClip *)cameraClip;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(UITableView *)eventTableView;
-(void)setEventTableView:(UITableView *)arg1 ;
@end

