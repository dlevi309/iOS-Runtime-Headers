/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
*/

#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/TKTonePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDelegate.h>

@class TKTonePickerViewController, TKVibrationPickerViewController, NSString;

@interface SHSToneController : PSViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {

	TKTonePickerViewController* _tonePickerViewController;
	TKVibrationPickerViewController* _vibrationPickerViewController;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePickerViewController;                        //@synthesize tonePickerViewController=_tonePickerViewController - In the implementation block
@property (nonatomic,retain) TKVibrationPickerViewController * vibrationPickerViewController;              //@synthesize vibrationPickerViewController=_vibrationPickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setSpecifier:(id)arg1 ;
-(void)_handleAlertOverridePolicyDidChangeNotification:(id)arg1 ;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2 ;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
-(TKTonePickerViewController *)tonePickerViewController;
-(id)_defaultToneIdentifierForTonePickerWithAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)setTonePickerViewController:(TKTonePickerViewController *)arg1 ;
-(void)_insertTonePickerView;
-(void)_updateReloadSpecifierInParentController;
-(id)_defaultVibrationIdentifierForVibrationPickerWithAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)setVibrationPickerViewController:(TKVibrationPickerViewController *)arg1 ;
-(TKVibrationPickerViewController *)vibrationPickerViewController;
@end

