/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_dismissAirPlayRoutePickerIPad;
-(void)_windowDidRotate:(id)arg1 ;
-(void)_presentAirPlayPopoverAnimated:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPad:(long long)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPhone:(long long)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)show:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)_windowWillRotate:(id)arg1 ;
-(void)dealloc;
@end

