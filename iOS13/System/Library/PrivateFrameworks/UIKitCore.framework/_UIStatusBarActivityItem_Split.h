/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarActivityItem_SyncOnly.h>

@class _UIStatusBarActivityView, _UIStatusBarActivityIndicator;

@interface _UIStatusBarActivityItem_Split : _UIStatusBarActivityItem_SyncOnly {

	_UIStatusBarActivityView* _activityView;
	_UIStatusBarActivityIndicator* _syncStartView;

}

@property (nonatomic,retain) _UIStatusBarActivityView * activityView;                    //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) _UIStatusBarActivityIndicator * syncStartView;              //@synthesize syncStartView=_syncStartView - In the implementation block
+(id)syncStartDisplayIdentifier;
+(id)pillDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(UIEdgeInsets)activityIndicatorAlignmentRectInsets;
-(void)_create_activityView;
-(void)_create_syncStartView;
-(_UIStatusBarActivityIndicator *)syncStartView;
-(_UIStatusBarActivityView *)activityView;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)setActivityView:(_UIStatusBarActivityView *)arg1 ;
-(void)setSyncStartView:(_UIStatusBarActivityIndicator *)arg1 ;
@end

