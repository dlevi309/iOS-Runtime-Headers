/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarRadarView;

@interface _UIStatusBarRadarItem : _UIStatusBarIndicatorItem {

	_UIStatusBarRadarView* _radarItemView;

}

@property (nonatomic,retain) _UIStatusBarRadarView * radarItemView;              //@synthesize radarItemView=_radarItemView - In the implementation block
-(id)indicatorEntryKey;
-(id)imageView;
-(id)viewForIdentifier:(id)arg1 ;
-(id)imageForUpdate:(id)arg1 ;
-(_UIStatusBarRadarView *)radarItemView;
-(void)_create_radarItemView;
-(void)setRadarItemView:(_UIStatusBarRadarView *)arg1 ;
@end

