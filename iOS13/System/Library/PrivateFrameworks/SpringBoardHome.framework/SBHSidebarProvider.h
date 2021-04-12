/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

@class WGWidgetGroupViewController, SBHSidebarVisualConfiguration;


@protocol SBHSidebarProvider <SBHLegibility>
@property (nonatomic,retain) WGWidgetGroupViewController * widgetViewController; 
@property (nonatomic,retain) SBHSidebarVisualConfiguration * sidebarVisualConfiguration; 
@property (assign,nonatomic) unsigned long long layoutInsetsIgnoredEdges; 
@property (assign,nonatomic,__weak) id<SBHSidebarProviderDelegate> delegate; 
@required
-(id<SBHSidebarProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(void)setSidebarVisualConfiguration:(id)arg1;
-(WGWidgetGroupViewController *)widgetViewController;
-(void)setEditingIcons:(BOOL)arg1;
-(unsigned long long)layoutInsetsIgnoredEdges;
-(void)setWidgetViewController:(id)arg1;
-(void)setLayoutInsetsIgnoredEdges:(unsigned long long)arg1;

@end

