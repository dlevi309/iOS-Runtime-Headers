/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewController.h>
#import <libobjc.A.dylib/MRPlatterViewControllerDelegate.h>

@class MRPlatterViewController, NSArray, NSString;

@interface HUQuickControlMediaPlayerViewController : HUQuickControlViewController <MRPlatterViewControllerDelegate> {

	MRPlatterViewController* _mediaControlViewController;
	NSArray* _mediaControlViewControllerConstraints;
	NSString* _mediaRoutingIdentifier;
	long long _mediaAccessoryItemType;

}

@property (nonatomic,retain) MRPlatterViewController * mediaControlViewController;              //@synthesize mediaControlViewController=_mediaControlViewController - In the implementation block
@property (nonatomic,retain) NSArray * mediaControlViewControllerConstraints;                   //@synthesize mediaControlViewControllerConstraints=_mediaControlViewControllerConstraints - In the implementation block
@property (nonatomic,retain) NSString * mediaRoutingIdentifier;                                 //@synthesize mediaRoutingIdentifier=_mediaRoutingIdentifier - In the implementation block
@property (nonatomic,readonly) long long mediaAccessoryItemType;                                //@synthesize mediaAccessoryItemType=_mediaAccessoryItemType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(id)title;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_updateConstraints;
-(long long)mediaAccessoryItemType;
-(void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2 ;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(void)setPreferredFrameLayoutGuide:(id)arg1 ;
-(BOOL)hasSingleControlView;
-(void)_addMediaControlView;
-(NSString *)mediaRoutingIdentifier;
-(void)setMediaControlViewController:(MRPlatterViewController *)arg1 ;
-(MRPlatterViewController *)mediaControlViewController;
-(void)_updateMediaControlAppearanceForTraitCollection:(id)arg1 ;
-(NSArray *)mediaControlViewControllerConstraints;
-(void)setMediaControlViewControllerConstraints:(NSArray *)arg1 ;
-(void)platterViewController:(id)arg1 didUpdateEndpointWithReason:(id)arg2 ;
-(void)setMediaRoutingIdentifier:(NSString *)arg1 ;
@end

