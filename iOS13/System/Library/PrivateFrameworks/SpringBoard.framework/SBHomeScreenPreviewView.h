/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>

@class UIView, SBRootFolderController, _SBHomeScreenFolderDelegate, SBIconController, SBWallpaperController, SBFloatingDockViewController;

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding> {

	UIView* _folderContent;
	UIView* _floatingDock;
	UIView* _statusBar;
	SBRootFolderController* _rootFolderController;
	_SBHomeScreenFolderDelegate* _folderDelegate;
	SBIconController* _iconController;
	SBWallpaperController* _wallpaperController;
	SBFloatingDockViewController* _floatingDockViewController;

}

@property (nonatomic,readonly) SBIconController * iconController;                                      //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,readonly) SBWallpaperController * wallpaperController;                            //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (nonatomic,readonly) SBFloatingDockViewController * floatingDockViewController;              //@synthesize floatingDockViewController=_floatingDockViewController - In the implementation block
-(void)layoutSubviews;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(void)recycleIconView:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(SBFloatingDockViewController *)floatingDockViewController;
-(SBIconController *)iconController;
-(SBWallpaperController *)wallpaperController;
-(id)initWithFrame:(CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3 options:(unsigned long long)arg4 wallpaperImage:(id)arg5 ;
@end

