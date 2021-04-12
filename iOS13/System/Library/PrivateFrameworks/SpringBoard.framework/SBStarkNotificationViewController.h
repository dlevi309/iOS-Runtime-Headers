/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/SBCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/SBStarkBannerTargetObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBStarkNotificationsConfiguring, SBStarkNotificationViewControllerDelegate;
@class SBStarkNotificationSystemGestureManager, UITapGestureRecognizer, SBStarkBannerTarget, SBStarkAlertItemBannerSource, SBStarkNotificationBannerSource, CPSTemplateBannerController, SBUIBannerContext, NSArray, SBStarkBannerCell, SBStarkNotificationLayout, SBCarBannerNotificationView, UISwipeGestureRecognizer, NSString;

@interface SBStarkNotificationViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SBCollectionViewCellDelegate, SBStarkBannerTargetObserver, UIGestureRecognizerDelegate> {

	id<SBStarkNotificationsConfiguring> _configuration;
	SBStarkNotificationSystemGestureManager* _systemGestureManager;
	BOOL _dismissingForSystemGesture;
	UITapGestureRecognizer* _backGestureRecognizer;
	UITapGestureRecognizer* _selectGestureRecognizer;
	SBStarkBannerTarget* _bannerTarget;
	SBStarkAlertItemBannerSource* _alertItemBannerSource;
	SBStarkNotificationBannerSource* _notificationBannerSource;
	CPSTemplateBannerController* _templateBannerController;
	SBUIBannerContext* _currentContext;
	NSArray* _currentSubActionLabels;
	SBStarkBannerCell* _currentCell;
	int _state;
	SBStarkNotificationLayout* _notificationsLayout;
	SBCarBannerNotificationView* _notificationsView;
	UITapGestureRecognizer* _cancelNotificationTapGestureRecognizer;
	UISwipeGestureRecognizer* _dismissNotificationTouchpadSwipeGestureRecognizer;
	BOOL _invalid;
	id<SBStarkNotificationViewControllerDelegate> _delegate;

}

@property (assign,setter=_setState:,nonatomic) int state; 
@property (assign,nonatomic,__weak) id<SBStarkNotificationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<SBStarkNotificationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBStarkNotificationViewControllerDelegate>)arg1 ;
-(int)state;
-(void)_setState:(int)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)_performBackGesture:(id)arg1 ;
-(void)_performSelectGesture:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)_performSwipeGesture:(id)arg1 ;
-(void)setSuspensionReasons:(unsigned long long)arg1 cancellingCurrent:(BOOL)arg2 ;
-(void)_performCancelNotificationTapGesture:(id)arg1 ;
-(void)starkBannerTarget:(id)arg1 didChangeContextWithDismissReason:(int)arg2 ;
-(id)initWithConfiguration:(id)arg1 systemGestureManager:(id)arg2 ;
-(BOOL)handleMenuEvent;
-(id)_notificationBannerSource;
@end

