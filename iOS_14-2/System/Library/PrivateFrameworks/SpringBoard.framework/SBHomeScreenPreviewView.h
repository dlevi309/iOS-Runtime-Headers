/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>

@protocol SBDockOffscreenFractionModifying;
@class UIView, SBRootFolderController, _SBHomeScreenFolderDelegate, SBIconController, SBWallpaperController, SBFloatingDockViewController, NSString;

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding, SBIconViewDelegate> {

	UIView* _folderContent;
	UIView* _floatingDock;
	UIView* _statusBar;
	SBRootFolderController* _rootFolderController;
	_SBHomeScreenFolderDelegate* _folderDelegate;
	SBIconController* _iconController;
	SBWallpaperController* _wallpaperController;
	SBFloatingDockViewController* _floatingDockViewController;
	unsigned long long _snapshotOptions;
	id<SBDockOffscreenFractionModifying> _dockOffscreenModifier;

}

@property (nonatomic,readonly) SBIconController * iconController;                                       //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,readonly) SBWallpaperController * wallpaperController;                             //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (nonatomic,readonly) SBFloatingDockViewController * floatingDockViewController;               //@synthesize floatingDockViewController=_floatingDockViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long snapshotOptions;                                      //@synthesize snapshotOptions=_snapshotOptions - In the implementation block
@property (nonatomic,readonly) id<SBDockOffscreenFractionModifying> dockOffscreenModifier;              //@synthesize dockOffscreenModifier=_dockOffscreenModifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBIconController *)iconController;
-(SBWallpaperController *)wallpaperController;
-(id)backgroundViewForComponentsOfIconView:(id)arg1 ;
-(SBFloatingDockViewController *)floatingDockViewController;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)recycleIconView:(id)arg1 ;
-(void)layoutSubviews;
-(id)behaviorDelegateForIconView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3 options:(unsigned long long)arg4 wallpaperImage:(id)arg5 ;
-(unsigned long long)snapshotOptions;
-(id<SBDockOffscreenFractionModifying>)dockOffscreenModifier;
@end

