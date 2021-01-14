/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)pillDisplayIdentifier;
+(id)syncStartDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(_UIStatusBarActivityView *)activityView;
-(UIEdgeInsets)activityIndicatorAlignmentRectInsets;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarActivityIndicator *)syncStartView;
-(void)setActivityView:(_UIStatusBarActivityView *)arg1 ;
-(void)setSyncStartView:(_UIStatusBarActivityIndicator *)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)_create_activityView;
-(void)_create_syncStartView;
@end

