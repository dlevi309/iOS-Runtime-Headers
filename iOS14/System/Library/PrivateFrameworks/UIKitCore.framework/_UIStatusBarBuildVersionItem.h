/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBuildVersionView:(_UIStatusBarStringView *)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
@end

