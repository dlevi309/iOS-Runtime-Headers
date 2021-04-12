/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)_create_detailStringView;
-(void)_create_backgroundView;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarStringView *)detailStringView;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)setDetailStringView:(_UIStatusBarStringView *)arg1 ;
@end

