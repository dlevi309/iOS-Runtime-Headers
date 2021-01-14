/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class HUCameraPlayerViewController, HUDiagnosticsCameraTimelineView, HUClipScrubberDataSource, HMCameraProfile, NSString;

@interface HUDiagnosticsCameraPlayerController : NSObject <UIContextMenuInteractionDelegate> {

	HUCameraPlayerViewController* _cameraPlayerViewController;
	HUDiagnosticsCameraTimelineView* _diagnosticsView;
	HUClipScrubberDataSource* _clipScrubberDataSource;
	HMCameraProfile* _cameraProfile;

}

@property (assign,nonatomic,__weak) HUCameraPlayerViewController * cameraPlayerViewController;              //@synthesize cameraPlayerViewController=_cameraPlayerViewController - In the implementation block
@property (nonatomic,retain) HUDiagnosticsCameraTimelineView * diagnosticsView;                             //@synthesize diagnosticsView=_diagnosticsView - In the implementation block
@property (assign,nonatomic,__weak) HUClipScrubberDataSource * clipScrubberDataSource;                      //@synthesize clipScrubberDataSource=_clipScrubberDataSource - In the implementation block
@property (nonatomic,retain) HMCameraProfile * cameraProfile;                                               //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(HMCameraProfile *)cameraProfile;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(HUDiagnosticsCameraTimelineView *)diagnosticsView;
-(void)updateWithPlaybackEngine:(id)arg1 ;
-(void)launchPlaybackEngineDiagnosticsView;
-(void)setDiagnosticsView:(HUDiagnosticsCameraTimelineView *)arg1 ;
-(HUCameraPlayerViewController *)cameraPlayerViewController;
-(void)displayDiagnosticDetails;
-(HUClipScrubberDataSource *)clipScrubberDataSource;
-(void)dismissDiagnosticDetails;
-(id)initWithCameraPlayerViewController:(id)arg1 clipScrubberDataSource:(id)arg2 cameraProfile:(id)arg3 ;
-(void)setCameraPlayerViewController:(HUCameraPlayerViewController *)arg1 ;
-(void)setClipScrubberDataSource:(HUClipScrubberDataSource *)arg1 ;
@end

