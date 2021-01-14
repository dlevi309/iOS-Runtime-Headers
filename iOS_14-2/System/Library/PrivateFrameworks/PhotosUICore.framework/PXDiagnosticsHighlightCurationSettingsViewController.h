/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@protocol PXDiagnosticsHighlightCurationSettingsViewControllerDelegate;
@class UISwitch, UITextField, NSDictionary;

@interface PXDiagnosticsHighlightCurationSettingsViewController : UIViewController {

	id<PXDiagnosticsHighlightCurationSettingsViewControllerDelegate> _delegate;
	UISwitch* _doIdenticalDedupingSwitch;
	UITextField* _identicalDedupingTimeIntervalTextField;
	UITextField* _identicalDedupingTimeIntervalForPeopleTextField;
	UITextField* _identicalDedupingMaximumTimeGroupExtensionTextField;
	UITextField* _maximumNumberOfItemsPerIdenticalClusterTextField;
	UITextField* _identicalDedupingThresholdTextField;
	UITextField* _identicalDedupingThresholdForPeopleTextField;
	UITextField* _identicalDedupingThresholdForBestItemsTextField;
	UISwitch* _useFaceprintsForIdenticalDedupingSwitch;
	UITextField* _identicalDedupingFaceprintDistanceTextField;
	UISwitch* _doSemanticalDedupingSwitch;
	UITextField* _semanticalDedupingTimeIntervalTextField;
	UITextField* _semanticalDedupingTimeIntervalForPeopleTextField;
	UITextField* _semanticalDedupingTimeIntervalForPersonsTextField;
	UITextField* _semanticalDedupingMaximumTimeGroupExtensionTextField;
	UITextField* _maximumNumberOfItemsPerSemanticalClusterTextField;
	UITextField* _semanticalDedupingThresholdTextField;
	UITextField* _semanticalDedupingThresholdForPeopleTextField;
	UITextField* _semanticalDedupingThresholdForPersonsTextField;
	UISwitch* _doNotSemanticallyDedupePeopleSwitch;
	UISwitch* _doNotSemanticallyDedupePersonsSwitch;
	UISwitch* _allowAdaptiveForSemanticalDedupingSwitch;
	UISwitch* _useOnlyScenesForDedupingSwitch;
	UISwitch* _useAllPersonsForDedupingSwitch;
	UISwitch* _useFaceQualityForElectionSwitch;
	UISwitch* _doNotDedupeVideosSwitch;
	UISwitch* _doNotDedupeInterestingPortraitsAndLivePicturesSwitch;
	UISwitch* _onlyDedupeContiguousItemsSwitch;
	UISwitch* _doDejunkSwitch;
	UISwitch* _returnDedupedJunkIfOnlyJunkSwitch;
	UISwitch* _doFinalPassSwitch;
	UITextField* _finalPassTimeIntervalTextField;
	UITextField* _finalPassMaximumTimeGroupExtensionTextField;
	UITextField* _finalPassDedupingThresholdTextField;
	NSDictionary* _options;

}

@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(void)_done:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)_cancel:(id)arg1 ;
-(void)loadView;
-(void)_applySettingsGlobally:(id)arg1 ;
-(void)_resetSettings:(id)arg1 ;
@end

