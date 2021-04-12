/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSecureWindow.h>

@protocol SBWallpaperWindowDelegate;
@class SBWallpaperDefaults;

@interface _SBWallpaperWindow : SBSecureWindow {

	SBWallpaperDefaults* _wallpaperDefaults;
	id<SBWallpaperWindowDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBWallpaperWindowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBWallpaperWindowDelegate>)delegate;
-(void)setDelegate:(id<SBWallpaperWindowDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)activeInterfaceOrientation;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 ;
-(void)_observeDefaults;
@end

