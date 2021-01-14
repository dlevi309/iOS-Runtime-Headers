/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SCLListViewController.h>

@class NRDevice, SCLSchoolMode, SCLActiveSpecifierDataSource, SCLSettingsViewModel, SCLScheduleSettings;

@interface SCLPhoneSettingsViewController : SCLListViewController {

	BOOL _observingViewModel;
	BOOL _observingApplicationLifecycle;
	NRDevice* _device;
	SCLSchoolMode* _schoolMode;
	SCLActiveSpecifierDataSource* _activeSpecifierSource;
	SCLSettingsViewModel* _viewModel;
	SCLScheduleSettings* _scheduleSettings;

}

@property (nonatomic,retain) SCLSchoolMode * schoolMode;                                                             //@synthesize schoolMode=_schoolMode - In the implementation block
@property (nonatomic,retain) SCLActiveSpecifierDataSource * activeSpecifierSource;                                   //@synthesize activeSpecifierSource=_activeSpecifierSource - In the implementation block
@property (nonatomic,retain) SCLSettingsViewModel * viewModel;                                                       //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) SCLScheduleSettings * scheduleSettings;                                                 //@synthesize scheduleSettings=_scheduleSettings - In the implementation block
@property (assign,getter=isObservingViewModel,nonatomic) BOOL observingViewModel;                                    //@synthesize observingViewModel=_observingViewModel - In the implementation block
@property (assign,getter=isObservingApplicationLifecycle,nonatomic) BOOL observingApplicationLifecycle;              //@synthesize observingApplicationLifecycle=_observingApplicationLifecycle - In the implementation block
@property (nonatomic,retain) NRDevice * device;                                                                      //@synthesize device=_device - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(SCLSettingsViewModel *)viewModel;
-(NRDevice *)device;
-(void)setViewModel:(SCLSettingsViewModel *)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)setDevice:(NRDevice *)arg1 ;
-(void)dealloc;
-(SCLScheduleSettings *)scheduleSettings;
-(void)setScheduleSettings:(SCLScheduleSettings *)arg1 ;
-(void)loadSpecifierSource;
-(void)endObservingViewModel:(id)arg1 ;
-(SCLSchoolMode *)schoolMode;
-(BOOL)isObservingApplicationLifecycle;
-(void)setObservingApplicationLifecycle:(BOOL)arg1 ;
-(void)loadSchoolModeIfNeeded;
-(id)viewModelForSettings:(id)arg1 ;
-(void)beginObservingViewModel:(id)arg1 ;
-(void)setActiveSpecifierSource:(SCLActiveSpecifierDataSource *)arg1 ;
-(void)setObservingViewModel:(BOOL)arg1 ;
-(BOOL)isObservingViewModel;
-(void)scheduleDidChange;
-(void)updateSchedule;
-(void)setSchoolMode:(SCLSchoolMode *)arg1 ;
-(SCLActiveSpecifierDataSource *)activeSpecifierSource;
@end

