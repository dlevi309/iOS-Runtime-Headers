/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, HMCameraClip, HMCameraProfile, NSString;

@interface HUDiagnosticsCameraClipViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _eventTableView;
	HMCameraClip* _cameraClip;
	HMCameraProfile* _cameraProfile;

}

@property (nonatomic,retain) UITableView * eventTableView;                 //@synthesize eventTableView=_eventTableView - In the implementation block
@property (nonatomic,retain) HMCameraClip * cameraClip;                    //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,retain) HMCameraProfile * cameraProfile;              //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(HMCameraProfile *)cameraProfile;
-(HMCameraClip *)cameraClip;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(UITableView *)eventTableView;
-(void)setEventTableView:(UITableView *)arg1 ;
-(id)initWithRecordingEvent:(id)arg1 cameraProfile:(id)arg2 ;
@end

