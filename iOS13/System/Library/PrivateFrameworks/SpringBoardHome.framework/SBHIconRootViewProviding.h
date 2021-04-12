/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

@class SBFolder, UIView, _UILegibilitySettings, UIViewController, SBFolderIconImageCache, SBHIconImageCache;


@protocol SBHIconRootViewProviding <SBIconLocationPresenting,SBIconViewQuerying,NSObject>
@property (nonatomic,retain) SBFolder * folder; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIViewController * deepestFolderController; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollTracking,nonatomic,readonly) BOOL scrollTracking; 
@property (assign,nonatomic) long long currentPageIndex; 
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache; 
@property (nonatomic,retain) SBHIconImageCache * iconImageCache; 
@required
-(BOOL)isScrolling;
-(UIView *)contentView;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(id)arg1;
-(long long)currentPageIndex;
-(void)setCurrentPageIndex:(long long)arg1;
-(SBFolder *)folder;
-(void)setFolder:(id)arg1;
-(SBFolderIconImageCache *)folderIconImageCache;
-(void)setFolderIconImageCache:(id)arg1;
-(SBHIconImageCache *)iconImageCache;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cancelScrolling;
-(void)setIconImageCache:(id)arg1;
-(void)noteUserIsInteractingWithIcons;
-(BOOL)isScrollTracking;
-(UIViewController *)deepestFolderController;
-(void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setIdleText:(id)arg1;

@end

