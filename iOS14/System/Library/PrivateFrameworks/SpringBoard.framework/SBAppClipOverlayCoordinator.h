/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableSet, NSMapTable;

@interface SBAppClipOverlayCoordinator : NSObject {

	NSMutableSet* _overlayViewControllers;
	NSMapTable* _participantForViewController;

}
-(id)init;
-(id)overlayViewControllerForBundleIdentifier:(id)arg1 webClipIdentifier:(id)arg2 participant:(id)arg3 ;
-(void)participant:(id)arg1 didSurrenderViewController:(id)arg2 ;
-(id)_existingOverlayViewControllerForWebClipIdentifier:(id)arg1 ;
@end

