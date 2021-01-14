/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class HUCameraRecordingOptionsItemManager, HUCameraSettingsModuleController, NSString;

@interface HUCameraRecordingOptionsTableViewController : HUItemTableViewController <UITextViewDelegate> {

	HUCameraRecordingOptionsItemManager* _detailsItemManager;
	HUCameraSettingsModuleController* _cameraSettingsModuleController;

}

@property (assign,nonatomic,__weak) HUCameraRecordingOptionsItemManager * detailsItemManager;                //@synthesize detailsItemManager=_detailsItemManager - In the implementation block
@property (nonatomic,retain) HUCameraSettingsModuleController * cameraSettingsModuleController;              //@synthesize cameraSettingsModuleController=_cameraSettingsModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceLikeItem:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)itemModuleControllers;
-(void)dismissTextViewController;
-(HUCameraRecordingOptionsItemManager *)detailsItemManager;
-(void)setDetailsItemManager:(HUCameraRecordingOptionsItemManager *)arg1 ;
-(HUCameraSettingsModuleController *)cameraSettingsModuleController;
-(void)setCameraSettingsModuleController:(HUCameraSettingsModuleController *)arg1 ;
@end

