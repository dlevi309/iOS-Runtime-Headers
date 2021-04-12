/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarBadgeView;

@interface _UIStatusBarCellularExpandedItem : _UIStatusBarCellularItem {

	_UIStatusBarBadgeView* _badgeView;

}

@property (nonatomic,retain) _UIStatusBarBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
+(id)badgeDisplayIdentifier;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(BOOL)arg4 ;
-(_UIStatusBarBadgeView *)badgeView;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setBadgeView:(_UIStatusBarBadgeView *)arg1 ;
-(void)_create_badgeView;
@end

