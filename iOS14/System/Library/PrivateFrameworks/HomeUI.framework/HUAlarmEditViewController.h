/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HUAlarmEditSettingViewControllerDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUSliderValueTableViewCellDelegate.h>
#import <libobjc.A.dylib/HUInlineDatePickerCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegatePrivate.h>

@protocol HUAlarmEditViewControllerDelegate, HFMediaProfileContainer;
@class NSString, NSSet, HUAlarmEditView, MTAlarm, MTMutableAlarm, HFPlaybackArchive, NSMutableDictionary, NSDateComponents, HMMediaProfile, UITapGestureRecognizer;

@interface HUAlarmEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, HUAlarmEditSettingViewControllerDelegate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate, HUInlineDatePickerCellDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, MPMediaPickerControllerDelegatePrivate> {

	BOOL _isCustomVolumeSelected;
	BOOL _isPlayMediaSelected;
	BOOL _accessorySupportsMusicAlarm;
	BOOL _isDatePickerWheelScrolled;
	id<HUAlarmEditViewControllerDelegate> _delegate;
	NSString* _loggedInAppleMusicAccountDSID;
	NSSet* _selectedActionSets;
	HUAlarmEditView* _editAlarmView;
	long long _editingAlarmSetting;
	MTAlarm* _originalAlarm;
	MTMutableAlarm* _editedAlarm;
	double _selectedCustomVolumeLevel;
	HFPlaybackArchive* _hfPlaybackArchive;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSMutableDictionary* _appleMusicSubcriptionResult;
	NSDateComponents* _currentDatePickerTimeComponents;
	HMMediaProfile* _originalSelectedMediaProfile;
	HMMediaProfile* _selectedMediaProfile;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) HUAlarmEditView * editAlarmView;                                    //@synthesize editAlarmView=_editAlarmView - In the implementation block
@property (assign,nonatomic) long long editingAlarmSetting;                                      //@synthesize editingAlarmSetting=_editingAlarmSetting - In the implementation block
@property (nonatomic,retain) MTAlarm * originalAlarm;                                            //@synthesize originalAlarm=_originalAlarm - In the implementation block
@property (nonatomic,retain) MTMutableAlarm * editedAlarm;                                       //@synthesize editedAlarm=_editedAlarm - In the implementation block
@property (getter=isEdited,nonatomic,readonly) BOOL edited; 
@property (assign,nonatomic) double selectedCustomVolumeLevel;                                   //@synthesize selectedCustomVolumeLevel=_selectedCustomVolumeLevel - In the implementation block
@property (assign,nonatomic) BOOL isCustomVolumeSelected;                                        //@synthesize isCustomVolumeSelected=_isCustomVolumeSelected - In the implementation block
@property (assign,nonatomic) BOOL isPlayMediaSelected;                                           //@synthesize isPlayMediaSelected=_isPlayMediaSelected - In the implementation block
@property (assign,nonatomic) BOOL accessorySupportsMusicAlarm;                                   //@synthesize accessorySupportsMusicAlarm=_accessorySupportsMusicAlarm - In the implementation block
@property (nonatomic,retain) HFPlaybackArchive * hfPlaybackArchive;                              //@synthesize hfPlaybackArchive=_hfPlaybackArchive - In the implementation block
@property (nonatomic,retain) id<HFMediaProfileContainer> mediaProfileContainer;                  //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appleMusicSubcriptionResult;                  //@synthesize appleMusicSubcriptionResult=_appleMusicSubcriptionResult - In the implementation block
@property (assign,nonatomic) BOOL isDatePickerWheelScrolled;                                     //@synthesize isDatePickerWheelScrolled=_isDatePickerWheelScrolled - In the implementation block
@property (nonatomic,retain) NSDateComponents * currentDatePickerTimeComponents;                 //@synthesize currentDatePickerTimeComponents=_currentDatePickerTimeComponents - In the implementation block
@property (nonatomic,retain) HMMediaProfile * originalSelectedMediaProfile;                      //@synthesize originalSelectedMediaProfile=_originalSelectedMediaProfile - In the implementation block
@property (nonatomic,retain) HMMediaProfile * selectedMediaProfile;                              //@synthesize selectedMediaProfile=_selectedMediaProfile - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                      //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<HUAlarmEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * loggedInAppleMusicAccountDSID;                             //@synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID - In the implementation block
@property (nonatomic,readonly) NSSet * selectedActionSets;                                       //@synthesize selectedActionSets=_selectedActionSets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)desiredContentSize;
-(id)_dateComponents;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_didTap:(id)arg1 ;
-(id<HUAlarmEditViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2 ;
-(void)viewDidUnload;
-(void)setDelegate:(id<HUAlarmEditViewControllerDelegate>)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)scrollViewDidScroll:(id)arg1 ;
-(MTAlarm *)originalAlarm;
-(void)setOriginalAlarm:(MTAlarm *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_presentMediaPickerUnavailablePromptWithReason:(long long)arg1 storeKitErrorObject:(id)arg2 ;
-(void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2 ;
-(BOOL)isEdited;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(void)dealloc;
-(void)datePickerCell:(id)arg1 didSelectDate:(id)arg2 ;
-(BOOL)_isMusicAlarmSupportedInAccessory;
-(void)setSelectedCustomVolumeLevel:(double)arg1 ;
-(BOOL)accessorySupportsMusicAlarm;
-(void)_checkAndPrepareEditingAlarmForMediaTypeAlarm;
-(void)_cancelButtonClicked:(id)arg1 ;
-(void)_doneButtonClicked:(id)arg1 ;
-(BOOL)_isNewAlarm;
-(BOOL)_hasUserSelectedToneAlarm;
-(void)_updateEnableStateForDoneButton:(BOOL)arg1 ;
-(BOOL)_isAlarmTypeMedia;
-(void)_handlePickerChanged;
-(void)saveAlarmOnlyIfEdited:(BOOL)arg1 ;
-(void)_updateAppleMusicSubscriptionStatus;
-(MTMutableAlarm *)editedAlarm;
-(BOOL)_hasUserSelectedCustomVolume;
-(BOOL)_isDeviceSpecificAlarm;
-(id)_datePickerCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(HMMediaProfile *)selectedMediaProfile;
-(HFPlaybackArchive *)hfPlaybackArchive;
-(void)_configureMediaIconView:(id)arg1 withImage:(id)arg2 ;
-(id)_deleteAlarmButtonCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_mediaPropertiesTypeCellForTableView:(id)arg1 atIndexpath:(id)arg2 ;
-(id)_volumeTypeCellForTableView:(id)arg1 atIndexpath:(id)arg2 ;
-(id)_volumeSliderCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_setupCell:(id)arg1 forTableView:(id)arg2 indexPath:(id)arg3 ;
-(void)setIsPlayMediaSelected:(BOOL)arg1 ;
-(void)setIsCustomVolumeSelected:(BOOL)arg1 ;
-(HUAlarmEditView *)editAlarmView;
-(void)startEditingSetting:(long long)arg1 ;
-(void)_updateCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)_chooseMediaTapped;
-(NSMutableDictionary *)appleMusicSubcriptionResult;
-(void)_presentMediaPickerWithOptionsShowsLibraryContent:(BOOL)arg1 ;
-(id)_volumeIconMinimum;
-(id)_volumeIconMaximum;
-(double)_volumeSettingForCurrentEditingAlarm;
-(BOOL)isDatePickerWheelScrolled;
-(void)setCurrentDatePickerTimeComponents:(NSDateComponents *)arg1 ;
-(BOOL)isCustomVolumeSelected;
-(BOOL)isPlayMediaSelected;
-(NSDateComponents *)currentDatePickerTimeComponents;
-(id)_configureSoundForMediaTypeAlarm:(id)arg1 ;
-(HMMediaProfile *)originalSelectedMediaProfile;
-(NSString *)loggedInAppleMusicAccountDSID;
-(void)setIsDatePickerWheelScrolled:(BOOL)arg1 ;
-(void)setOriginalSelectedMediaProfile:(HMMediaProfile *)arg1 ;
-(void)setSelectedMediaProfile:(HMMediaProfile *)arg1 ;
-(void)setEditedAlarm:(MTMutableAlarm *)arg1 ;
-(void)setHfPlaybackArchive:(HFPlaybackArchive *)arg1 ;
-(double)selectedCustomVolumeLevel;
-(void)alarmEditSettingController:(id)arg1 didEditAlarm:(id)arg2 ;
-(id)initWithAlarmItem:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(void)setLoggedInAppleMusicAccountDSID:(NSString *)arg1 ;
-(NSSet *)selectedActionSets;
-(void)setEditAlarmView:(HUAlarmEditView *)arg1 ;
-(long long)editingAlarmSetting;
-(void)setEditingAlarmSetting:(long long)arg1 ;
-(void)setAccessorySupportsMusicAlarm:(BOOL)arg1 ;
-(void)setMediaProfileContainer:(id<HFMediaProfileContainer>)arg1 ;
-(void)setAppleMusicSubcriptionResult:(NSMutableDictionary *)arg1 ;
@end

