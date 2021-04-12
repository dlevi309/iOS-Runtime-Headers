/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)preservesBanners;
-(void)_begin;
-(void)_dismissOverlaysIfNeeded;
-(void)setPreservesBanners:(BOOL)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(unsigned long long)_dismissOverlaysOptions;
@end

