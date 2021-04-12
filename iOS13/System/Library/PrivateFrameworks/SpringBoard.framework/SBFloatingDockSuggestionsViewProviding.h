/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBFloatingDockViewController, SBDockIconListView;


@protocol SBFloatingDockSuggestionsViewProviding <SBIconViewQuerying,SBIconLocationPresenting>
@property (assign,nonatomic,__weak) SBFloatingDockViewController * floatingDockViewController; 
@property (nonatomic,readonly) SBDockIconListView * listView; 
@required
-(SBDockIconListView *)listView;
-(void)setFloatingDockViewController:(id)arg1;
-(void)dockViewWillBecomeVisible;
-(void)dockViewWillResignVisible;
-(void)dockViewDidResignVisible;
-(void)dockViewDidBecomeVisible;
-(void)dockFolderWillBeginTransitioning;
-(void)dockFolderDidEndTransitioning;
-(SBFloatingDockViewController *)floatingDockViewController;

@end

