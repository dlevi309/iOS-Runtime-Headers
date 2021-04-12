/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBIconListLayoutProvider, SBIconViewProviding, SBNestingViewControllerDelegate, SBFolderControllerDelegate;
@class SBFolder, _UILegibilitySettings, SBFolderIconImageCache, SBHIconImageCache, SBIconPageIndicatorImageSetCache, SBFolderControllerAnimationContext, UIView, NSString;

@interface SBFolderControllerConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	SBFolder* _folder;
	long long _orientation;
	unsigned long long _allowedOrientations;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	id<SBIconViewProviding> _iconViewProvider;
	id<SBNestingViewControllerDelegate> _delegate;
	id<SBFolderControllerDelegate> _folderDelegate;
	_UILegibilitySettings* _legibilitySettings;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;
	SBIconPageIndicatorImageSetCache* _iconPageIndicatorImageSetCache;
	SBFolderControllerAnimationContext* _animationContext;
	UIView* _headerView;
	double _headerHeight;
	NSString* _originatingIconLocation;
	unsigned long long _userInterfaceLayoutDirectionHandling;
	CGRect _initialViewFrame;

}

@property (nonatomic,retain) SBFolder * folder;                                                              //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic) long long orientation;                                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned long long allowedOrientations;                                         //@synthesize allowedOrientations=_allowedOrientations - In the implementation block
@property (nonatomic,retain) id<SBIconListLayoutProvider> listLayoutProvider;                                //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,retain) id<SBIconViewProviding> iconViewProvider;                                       //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SBNestingViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBFolderControllerDelegate> folderDelegate;                           //@synthesize folderDelegate=_folderDelegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                     //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache;                                  //@synthesize folderIconImageCache=_folderIconImageCache - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                                             //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (nonatomic,retain) SBIconPageIndicatorImageSetCache * iconPageIndicatorImageSetCache;              //@synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache - In the implementation block
@property (nonatomic,retain) SBFolderControllerAnimationContext * animationContext;                          //@synthesize animationContext=_animationContext - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                            //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) double headerHeight;                                                            //@synthesize headerHeight=_headerHeight - In the implementation block
@property (nonatomic,copy) NSString * originatingIconLocation;                                               //@synthesize originatingIconLocation=_originatingIconLocation - In the implementation block
@property (assign,nonatomic) unsigned long long userInterfaceLayoutDirectionHandling;                        //@synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling - In the implementation block
@property (assign,nonatomic) CGRect initialViewFrame;                                                        //@synthesize initialViewFrame=_initialViewFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SBNestingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBNestingViewControllerDelegate>)arg1 ;
-(long long)orientation;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(SBFolderControllerAnimationContext *)animationContext;
-(void)setAnimationContext:(SBFolderControllerAnimationContext *)arg1 ;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(unsigned long long)allowedOrientations;
-(void)setAllowedOrientations:(unsigned long long)arg1 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(SBFolderIconImageCache *)folderIconImageCache;
-(void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1 ;
-(id<SBIconViewProviding>)iconViewProvider;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(void)setIconViewProvider:(id<SBIconViewProviding>)arg1 ;
-(SBIconPageIndicatorImageSetCache *)iconPageIndicatorImageSetCache;
-(void)setIconPageIndicatorImageSetCache:(SBIconPageIndicatorImageSetCache *)arg1 ;
-(void)setFolderDelegate:(id<SBFolderControllerDelegate>)arg1 ;
-(void)setOriginatingIconLocation:(NSString *)arg1 ;
-(NSString *)originatingIconLocation;
-(id<SBFolderControllerDelegate>)folderDelegate;
-(SBHIconImageCache *)iconImageCache;
-(unsigned long long)userInterfaceLayoutDirectionHandling;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(CGRect)initialViewFrame;
-(void)setUserInterfaceLayoutDirectionHandling:(unsigned long long)arg1 ;
-(void)setInitialViewFrame:(CGRect)arg1 ;
@end

