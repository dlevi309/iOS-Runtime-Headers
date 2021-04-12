/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBFolderControllerConfiguration.h>

@protocol SBHLegibility, SBHSidebarProvider;
@class UIViewController;

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration {

	BOOL _forSnapshot;
	BOOL _dockExternal;
	BOOL _dockPinnedForRotation;
	BOOL _showsDoneButtonWhileEditing;
	BOOL _sidebarVisible;
	BOOL _sidebarPinned;
	UIViewController* _pullDownSearchViewController;
	UIViewController*<SBHLegibility> _todayViewController;
	UIViewController*<SBHSidebarProvider> _sidebarViewController;
	unsigned long long _sidebarAllowedOrientations;
	unsigned long long _ignoresOverscrollOnFirstPageOrientations;
	UIViewController*<SBHLegibility> _portraitHeaderViewController;

}

@property (assign,getter=isForSnapshot,nonatomic) BOOL forSnapshot;                                      //@synthesize forSnapshot=_forSnapshot - In the implementation block
@property (assign,getter=isDockExternal,nonatomic) BOOL dockExternal;                                    //@synthesize dockExternal=_dockExternal - In the implementation block
@property (assign,getter=isDockPinnedForRotation,nonatomic) BOOL dockPinnedForRotation;                  //@synthesize dockPinnedForRotation=_dockPinnedForRotation - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButtonWhileEditing;                                           //@synthesize showsDoneButtonWhileEditing=_showsDoneButtonWhileEditing - In the implementation block
@property (nonatomic,retain) UIViewController * pullDownSearchViewController;                            //@synthesize pullDownSearchViewController=_pullDownSearchViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHLegibility> todayViewController;                       //@synthesize todayViewController=_todayViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHSidebarProvider> sidebarViewController;                //@synthesize sidebarViewController=_sidebarViewController - In the implementation block
@property (assign,getter=isSidebarVisible,nonatomic) BOOL sidebarVisible;                                //@synthesize sidebarVisible=_sidebarVisible - In the implementation block
@property (assign,getter=isSidebarPinned,nonatomic) BOOL sidebarPinned;                                  //@synthesize sidebarPinned=_sidebarPinned - In the implementation block
@property (assign,nonatomic) unsigned long long sidebarAllowedOrientations;                              //@synthesize sidebarAllowedOrientations=_sidebarAllowedOrientations - In the implementation block
@property (assign,nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations;                //@synthesize ignoresOverscrollOnFirstPageOrientations=_ignoresOverscrollOnFirstPageOrientations - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHLegibility> portraitHeaderViewController;              //@synthesize portraitHeaderViewController=_portraitHeaderViewController - In the implementation block
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isForSnapshot;
-(void)setForSnapshot:(BOOL)arg1 ;
-(UIViewController*<SBHSidebarProvider>)sidebarViewController;
-(BOOL)showsDoneButtonWhileEditing;
-(UIViewController *)pullDownSearchViewController;
-(UIViewController*<SBHLegibility>)todayViewController;
-(UIViewController*<SBHLegibility>)portraitHeaderViewController;
-(BOOL)isDockExternal;
-(BOOL)isDockPinnedForRotation;
-(BOOL)isSidebarPinned;
-(void)setSidebarPinned:(BOOL)arg1 ;
-(BOOL)isSidebarVisible;
-(void)setPullDownSearchViewController:(UIViewController *)arg1 ;
-(void)setTodayViewController:(UIViewController*<SBHLegibility>)arg1 ;
-(void)setSidebarViewController:(UIViewController*<SBHSidebarProvider>)arg1 ;
-(unsigned long long)sidebarAllowedOrientations;
-(unsigned long long)ignoresOverscrollOnFirstPageOrientations;
-(void)setShowsDoneButtonWhileEditing:(BOOL)arg1 ;
-(void)setDockExternal:(BOOL)arg1 ;
-(void)setDockPinnedForRotation:(BOOL)arg1 ;
-(void)setSidebarVisible:(BOOL)arg1 ;
-(void)setSidebarAllowedOrientations:(unsigned long long)arg1 ;
-(void)setIgnoresOverscrollOnFirstPageOrientations:(unsigned long long)arg1 ;
-(void)setPortraitHeaderViewController:(UIViewController*<SBHLegibility>)arg1 ;
@end

