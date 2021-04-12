/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIPopoverController.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerDelegate.h>

@class MPAVRoutingViewController, NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate> {

	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _mirroringIncluded;
	MPAVRoutingViewController* _routingViewController;
	BOOL _mirroringOnly;

}

@property (assign,nonatomic) BOOL mirroringOnly;                    //@synthesize mirroringOnly=_mirroringOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithType:(long long)arg1 ;
-(id)routingController;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(id)initWithContentViewController:(id)arg1 ;
-(BOOL)mirroringOnly;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(id)initWithType:(long long)arg1 includeMirroring:(BOOL)arg2 ;
-(void)setMirroringOnly:(BOOL)arg1 ;
-(void)dealloc;
@end

