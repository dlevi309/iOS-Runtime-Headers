/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AirPlayMirroringModule.bundle/AirPlayMirroringModule
*/

#import <AirPlayMirroringModule/AirPlayMirroringModule-Structs.h>
#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class AVOutputDevice, MPAVOutputContextController, MPAVOutputDeviceDiscoverySessionController, NSMutableSet, UILabel, UIImage;

@interface MPAVAirPlayMirroringMenuModuleViewController : CCUIMenuModuleViewController {

	AVOutputDevice* _selectedOutputDevice;
	MPAVOutputContextController* _outputContextController;
	MPAVOutputDeviceDiscoverySessionController* _outputDeviceDiscoverySessionController;
	NSMutableSet* _busyIdentifiers;
	UILabel* _unexpandedTitleLabel;
	UIImage* _deviceMirroringGlyph;
	UIImage* _televisionMirroringDeviceGlyph;
	UIImage* _clusterMirroringDeviceGlyph;
	UIImage* _setTopBoxGlyph;
	UIImage* _tvStickGlyph;
	unsigned long long _numberOfWordsInUnexpandedText;
	BOOL _observersAreActive;
	BOOL _tetheredDisplayPortModeEnabled;

}
-(void)viewWillLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)leadingImageForMenuItem:(id)arg1 ;
-(void)_layoutScreenMirroringSubviews;
-(void)_updateStateWithSelected:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(id)_unexpandedTitleFont;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)_deviceMirroringGlyph;
-(void)_updateState;
-(id)_clusterMirroringDeviceGlyph;
-(id)leadingViewForMenuItem:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateScreenMirroringMenuItems;
-(void)viewDidLoad;
-(id)_setTopBoxGlyph;
-(id)_tvStickGlyph;
-(void)_updateSelectedOutputDevice;
-(id)_televisionMirroringDeviceGlyph;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateScreenMirroringFooter;
-(void)_outputDeviceChangedNotification:(id)arg1 ;
@end

