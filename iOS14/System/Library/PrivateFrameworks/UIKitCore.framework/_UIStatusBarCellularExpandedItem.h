/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarBadgeView;

@interface _UIStatusBarCellularExpandedItem : _UIStatusBarCellularItem {

	_UIStatusBarBadgeView* _badgeView;

}

@property (nonatomic,retain) _UIStatusBarBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(BOOL)arg4 ;
+(id)badgeDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(_UIStatusBarBadgeView *)badgeView;
-(void)setBadgeView:(_UIStatusBarBadgeView *)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)_create_badgeView;
@end

