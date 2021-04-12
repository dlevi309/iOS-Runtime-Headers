/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarPillView;

@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem {

	_UIStatusBarPillView* _backgroundView;

}

@property (nonatomic,retain) _UIStatusBarPillView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)backgroundDisplayIdentifier;
-(_UIStatusBarPillView *)backgroundView;
-(void)setBackgroundView:(_UIStatusBarPillView *)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)indicatorEntryKey;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)_backgroundActivityViewForIdentifier:(id)arg1 ;
-(id)_backgroundColorForActivityType:(long long)arg1 ;
-(BOOL)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2 ;
-(id)_systemImageNameForActivityType:(long long)arg1 ;
-(id)_imageNameForActivityType:(long long)arg1 ;
-(void)_create_backgroundView;
-(id)imageNameForUpdate:(id)arg1 ;
@end

