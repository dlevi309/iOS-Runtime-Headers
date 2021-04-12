/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarFullBackgroundActivityItem : _UIStatusBarBackgroundActivityItem {

	_UIStatusBarStringView* _detailStringView;

}

@property (nonatomic,retain) _UIStatusBarStringView * detailStringView;              //@synthesize detailStringView=_detailStringView - In the implementation block
+(id)detailDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)_create_backgroundView;
-(_UIStatusBarStringView *)detailStringView;
-(void)_create_detailStringView;
-(void)setDetailStringView:(_UIStatusBarStringView *)arg1 ;
@end

