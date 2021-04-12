/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class MPAVRoutingController, MPAudioVideoRoutingPopoverController, MPAVRoutingSheet, UIWebDocumentView, NSString;

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {

	MPAVRoutingController* _routingController;
	MPAudioVideoRoutingPopoverController* _popoverController;
	MPAVRoutingSheet* _actionSheet;
	UIWebDocumentView* _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_windowWillRotate:(id)arg1 ;
-(void)show:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)_dismissAirPlayRoutePickerIPad;
-(void)_windowDidRotate:(id)arg1 ;
-(void)_presentAirPlayPopoverAnimated:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPad:(long long)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPhone:(long long)arg1 ;
@end

