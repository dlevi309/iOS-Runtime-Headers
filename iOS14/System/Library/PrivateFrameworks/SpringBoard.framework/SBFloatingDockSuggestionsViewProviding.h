/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBFloatingDockViewController, SBDockIconListView;


@protocol SBFloatingDockSuggestionsViewProviding <SBIconViewQuerying,SBIconLocationPresenting>
@property (assign,nonatomic,__weak) SBFloatingDockViewController * floatingDockViewController; 
@property (nonatomic,readonly) SBDockIconListView * listView; 
@required
-(SBFloatingDockViewController *)floatingDockViewController;
-(void)setFloatingDockViewController:(id)arg1;
-(SBDockIconListView *)listView;
-(void)dockViewWillBecomeVisible;
-(void)dockViewWillResignVisible;
-(void)dockViewDidResignVisible;
-(void)dockViewDidBecomeVisible;
-(void)dockFolderDidEndTransitioning;
-(void)dockFolderWillBeginTransitioning;

@end

