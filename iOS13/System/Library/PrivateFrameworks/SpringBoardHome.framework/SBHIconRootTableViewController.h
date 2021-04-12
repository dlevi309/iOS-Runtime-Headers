/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SBHIconRootViewProviding.h>

@class SBFolder, UIView, _UILegibilitySettings, UIViewController, SBFolderIconImageCache, SBHIconImageCache, NSSet, NSString;

@interface SBHIconRootTableViewController : UITableViewController <SBHIconRootViewProviding> {

	SBFolder* _folder;
	_UILegibilitySettings* _legibilitySettings;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;

}

@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SBFolder * folder;                                          //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIViewController * deepestFolderController; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollTracking,nonatomic,readonly) BOOL scrollTracking; 
@property (assign,nonatomic) long long currentPageIndex; 
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache;              //@synthesize folderIconImageCache=_folderIconImageCache - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                         //@synthesize iconImageCache=_iconImageCache - In the implementation block
-(BOOL)isScrolling;
-(UIView *)contentView;
-(void)viewDidLoad;
-(BOOL)isEditing;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(long long)currentPageIndex;
-(void)setCurrentPageIndex:(long long)arg1 ;
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(SBFolderIconImageCache *)folderIconImageCache;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(NSSet *)presentedIconLocations;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(SBHIconImageCache *)iconImageCache;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelScrolling;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(void)noteUserIsInteractingWithIcons;
-(BOOL)isScrollTracking;
-(UIViewController *)deepestFolderController;
-(void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setIdleText:(id)arg1 ;
@end

