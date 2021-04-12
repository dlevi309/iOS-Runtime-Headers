/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <libobjc.A.dylib/SBAppClipOverlayCoordinatorParticipant.h>
#import <libobjc.A.dylib/SBAppClipOverlayViewDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, SBAppClipOverlayCoordinator, CPSClipOverlayViewController;

@interface SBAppClipOverlayViewController : SBFTouchPassThroughViewController <SBAppClipOverlayCoordinatorParticipant, SBAppClipOverlayViewDelegate, BSInvalidatable> {

	BOOL _displayedOverPlaceholder;
	NSString* _bundleIdentifier;
	NSString* _sceneIdentifier;
	NSString* _webClipIdentifier;
	SBAppClipOverlayCoordinator* _coordinator;
	CPSClipOverlayViewController* _overlayViewController;
	long long _sceneActivationState;

}

@property (nonatomic,retain) NSString * webClipIdentifier;                                      //@synthesize webClipIdentifier=_webClipIdentifier - In the implementation block
@property (nonatomic,retain) SBAppClipOverlayCoordinator * coordinator;                         //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) CPSClipOverlayViewController * overlayViewController;              //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (assign,nonatomic) BOOL displayedOverPlaceholder;                                     //@synthesize displayedOverPlaceholder=_displayedOverPlaceholder - In the implementation block
@property (assign,nonatomic) long long sceneActivationState;                                    //@synthesize sceneActivationState=_sceneActivationState - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneIdentifier;                                 //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)sceneIdentifier;
-(void)setCoordinator:(SBAppClipOverlayCoordinator *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)description;
-(id)view;
-(NSString *)webClipIdentifier;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)invalidate;
-(CPSClipOverlayViewController *)overlayViewController;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(SBAppClipOverlayCoordinator *)coordinator;
-(id)initWithCoordinator:(id)arg1 bundleIdentifier:(id)arg2 sceneIdentifier:(id)arg3 ;
-(void)setDisplayedOverPlaceholder:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSceneActivationState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)appClipOverlayCoordinator:(id)arg1 requestsSurrenderOfViewController:(id)arg2 ;
-(id)participantName;
-(void)appClipPlaceholderViewDidInvalidate:(id)arg1 ;
-(void)setWebClipIdentifier:(NSString *)arg1 ;
-(void)setOverlayViewController:(CPSClipOverlayViewController *)arg1 ;
-(BOOL)displayedOverPlaceholder;
-(void)setDisplayedOverPlaceholder:(BOOL)arg1 ;
-(long long)sceneActivationState;
-(void)setSceneActivationState:(long long)arg1 ;
@end

