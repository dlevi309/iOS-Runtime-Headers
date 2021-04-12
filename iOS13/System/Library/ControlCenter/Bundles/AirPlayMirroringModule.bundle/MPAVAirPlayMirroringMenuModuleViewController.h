/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AirPlayMirroringModule.bundle/AirPlayMirroringModule
*/

#import <AirPlayMirroringModule/AirPlayMirroringModule-Structs.h>
#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class NSArray, AVOutputDevice, MPAVOutputContextController, MPAVOutputDeviceDiscoverySessionController, NSMutableSet, UILabel, UIImage;

@interface MPAVAirPlayMirroringMenuModuleViewController : CCUIMenuModuleViewController {

	NSArray* _outputDevices;
	AVOutputDevice* _selectedOutputDevice;
	MPAVOutputContextController* _outputContextController;
	MPAVOutputDeviceDiscoverySessionController* _outputDeviceDiscoverySessionController;
	NSMutableSet* _busyIdentifiers;
	UILabel* _unexpandedTitleLabel;
	UIImage* _deviceMirroringGlyph;
	UIImage* _televisionMirroringDeviceGlyph;
	unsigned long long _numberOfWordsInUnexpandedText;
	BOOL _observersAreActive;
	BOOL _tetheredDisplayPortModeEnabled;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateState;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)leadingImageForMenuItem:(id)arg1 ;
-(void)_outputDeviceChangedNotification:(id)arg1 ;
-(void)_updateSelectedOutputDevice;
-(void)_layoutScreenMirroringSubviews;
-(id)_unexpandedTitleFont;
-(void)_updateStateWithSelected:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(void)_updateOutputDevices;
-(void)_updateScreenMirroringMenuItems;
-(void)_updateScreenMirroringFooter;
-(id)_televisionMirroringDeviceGlyph;
-(id)_deviceMirroringGlyph;
-(id)_filterAndSortOutputDevices:(id)arg1 ;
@end

