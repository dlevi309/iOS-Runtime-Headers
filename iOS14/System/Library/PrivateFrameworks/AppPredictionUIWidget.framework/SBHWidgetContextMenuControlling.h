/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

@class NSArray;


@protocol SBHWidgetContextMenuControlling <NSObject>
@property (assign,getter=isShowingContextMenu,nonatomic) BOOL showingContextMenu; 
@property (nonatomic,copy,readonly) NSArray * applicationShortcutItems; 
@required
-(BOOL)isShowingContextMenu;
-(NSArray *)applicationShortcutItems;
-(void)didSelectApplicationShortcutItem:(id)arg1;
-(void)willShowContextMenuAtLocation:(CGPoint)arg1;
-(void)setShowingContextMenu:(BOOL)arg1;

@end

