/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUCameraActivityZoneCanvasDelegate.h>
#import <libobjc.A.dylib/HFCameraLiveStreamControllerDelegate.h>

@class HMCameraProfile, HUCameraActivityZoneCanvasView, UILabel, HUCameraLiveStreamViewController, NSArray, NSString;

@interface HUCameraActivityZoneEditorViewController : UIViewController <HUCameraActivityZoneCanvasDelegate, HFCameraLiveStreamControllerDelegate> {

	BOOL _initialSettingDetectsInclusionZones;
	HMCameraProfile* _cameraProfile;
	HUCameraActivityZoneCanvasView* _activityZoneCanvas;
	UILabel* _tutorialLabel;
	HUCameraLiveStreamViewController* _liveStreamViewController;
	NSArray* _initialActivityZones;

}

@property (nonatomic,retain) HMCameraProfile * cameraProfile;                                          //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) HUCameraActivityZoneCanvasView * activityZoneCanvas;                      //@synthesize activityZoneCanvas=_activityZoneCanvas - In the implementation block
@property (nonatomic,retain) UILabel * tutorialLabel;                                                  //@synthesize tutorialLabel=_tutorialLabel - In the implementation block
@property (nonatomic,retain) HUCameraLiveStreamViewController * liveStreamViewController;              //@synthesize liveStreamViewController=_liveStreamViewController - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityZoneChanges; 
@property (nonatomic,retain) NSArray * initialActivityZones;                                           //@synthesize initialActivityZones=_initialActivityZones - In the implementation block
@property (assign,nonatomic) BOOL initialSettingDetectsInclusionZones;                                 //@synthesize initialSettingDetectsInclusionZones=_initialSettingDetectsInclusionZones - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(HMCameraProfile *)cameraProfile;
-(id)initWithCameraProfile:(id)arg1 ;
-(void)streamControllerStateDidUpdate:(id)arg1 ;
-(void)_updateToolbar;
-(void)viewDidLoad;
-(void)_updateNavigationBar;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)cancelEditing;
-(void)dealloc;
-(HUCameraLiveStreamViewController *)liveStreamViewController;
-(HUCameraActivityZoneCanvasView *)activityZoneCanvas;
-(UILabel *)tutorialLabel;
-(void)displayActivityZoneState;
-(void)_refreshUI;
-(void)displayZoneOverlapAlert;
-(void)displayLineOverlapAlert;
-(void)displayMoveOverlapAlert;
-(void)_updateTutorialText;
-(void)invertZones;
-(id)_addZoneButton;
-(BOOL)hasActivityZoneChanges;
-(void)commitChangesAndDismissEditor;
-(void)displayAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_updateViewsForTraitCollection;
-(void)displayUnCommittedChangesAlert;
-(BOOL)initialSettingDetectsInclusionZones;
-(NSArray *)initialActivityZones;
-(void)_displayProgressIndicatorWhileLoading;
-(void)displayErrorAlert;
-(void)didUpdateActivityZoneCanvas:(id)arg1 ;
-(void)didUpdateActivityZone:(id)arg1 ;
-(void)didAttemptToCreateOverlappingZoneForCanvas:(id)arg1 ;
-(void)didAttemptToAddOverlappingLineForCanvas:(id)arg1 ;
-(void)didAttemptToMovePointToOverlapZoneForCanvas:(id)arg1 ;
-(void)setActivityZoneCanvas:(HUCameraActivityZoneCanvasView *)arg1 ;
-(void)setTutorialLabel:(UILabel *)arg1 ;
-(void)setLiveStreamViewController:(HUCameraLiveStreamViewController *)arg1 ;
-(void)setInitialActivityZones:(NSArray *)arg1 ;
-(void)setInitialSettingDetectsInclusionZones:(BOOL)arg1 ;
@end

