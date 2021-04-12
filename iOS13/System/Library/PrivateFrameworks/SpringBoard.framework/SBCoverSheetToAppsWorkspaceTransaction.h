/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class SBDismissOverlaysAnimationController, SBTransientOverlayDismissAllWorkspaceTransaction;

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	SBDismissOverlaysAnimationController* _dismissOverlaysAnimationController;
	SBTransientOverlayDismissAllWorkspaceTransaction* _transientOverlayTransaction;
	BOOL _preservesBanners;

}

@property (assign,nonatomic) BOOL preservesBanners;              //@synthesize preservesBanners=_preservesBanners - In the implementation block
-(void)_begin;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)setPreservesBanners:(BOOL)arg1 ;
-(void)_dismissOverlaysIfNeeded;
-(unsigned long long)_dismissOverlaysOptions;
-(BOOL)preservesBanners;
@end

