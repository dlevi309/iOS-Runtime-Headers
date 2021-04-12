/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem {

	_UIStatusBarStringView* _buildVersionView;

}

@property (nonatomic,retain) _UIStatusBarStringView * buildVersionView;              //@synthesize buildVersionView=_buildVersionView - In the implementation block
-(BOOL)needsUpdate;
-(id)viewForIdentifier:(id)arg1 ;
-(void)_create_buildVersionView;
-(_UIStatusBarStringView *)buildVersionView;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)setBuildVersionView:(_UIStatusBarStringView *)arg1 ;
@end

