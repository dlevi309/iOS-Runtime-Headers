/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGadgetNavigationHelperDelegate;
@class PXGadgetNavigationItem, NSTimer;

@interface PXGadgetNavigationHelper : NSObject {

	id<PXGadgetNavigationHelperDelegate> _delegate;
	PXGadgetNavigationItem* _pendingNavigationItem;
	NSTimer* _navigationInvalidationTimer;

}

@property (nonatomic,retain) PXGadgetNavigationItem * pendingNavigationItem;                    //@synthesize pendingNavigationItem=_pendingNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * navigationInvalidationTimer;                      //@synthesize navigationInvalidationTimer=_navigationInvalidationTimer - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetNavigationHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingNavigation; 
-(void)_stopPendingNavigationTimer;
-(PXGadgetNavigationItem *)pendingNavigationItem;
-(void)navigateToSuggestionGadget:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigateToSuggestedCMMWithUUID:(id)arg1 animated:(BOOL)arg2 ;
-(id<PXGadgetNavigationHelperDelegate>)delegate;
-(void)navigateToGadgetForCMMInvitationWithIdentifier:(id)arg1 ;
-(void)navigateIfNeeded;
-(void)setPendingNavigationItem:(PXGadgetNavigationItem *)arg1 ;
-(void)navigateToGadgetWithTypeSurveyCongratulations;
-(void)navigateToGadgetForCMMSuggestions;
-(void)_pendingNavigationInvalidationTimerFired:(id)arg1 ;
-(void)setNavigationInvalidationTimer:(NSTimer *)arg1 ;
-(void)navigateToSharedAlbumInviteWithUUID:(id)arg1 animated:(BOOL)arg2 ;
-(NSTimer *)navigationInvalidationTimer;
-(void)navigateToSectionWithGadgetType:(unsigned long long)arg1 andGadget:(id)arg2 animated:(BOOL)arg3 ;
-(void)setDelegate:(id<PXGadgetNavigationHelperDelegate>)arg1 ;
-(void)navigateToInvitationCMMWithUUID:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_navigateToGadget:(id)arg1 animated:(BOOL)arg2 navigationBlock:(/*^block*/id)arg3 ;
-(BOOL)navigateToGadgetDeferIfNeeded:(id)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(/*^block*/id)arg3 ;
-(BOOL)navigateToFirstGadgetMatchingCriteria:(/*^block*/id)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(/*^block*/id)arg3 ;
-(BOOL)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(/*^block*/id)arg3 ;
-(BOOL)navigateToGadgetWithIdDeferIfNeeded:(id)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(/*^block*/id)arg3 ;
-(BOOL)hasPendingNavigation;
-(void)invalidateAnyPendingNavigation;
-(void)navigateToFirstGadgetAndFirstNestedGadget:(BOOL)arg1 ;
-(void)navigateToSharedAlbumInvitesAnimated:(BOOL)arg1 ;
-(void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg1 ;
-(void)startPendingNavigationTimer;
-(void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)arg1 animated:(BOOL)arg2 ;
@end

