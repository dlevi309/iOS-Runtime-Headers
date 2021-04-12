/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

#import <AppPredictionUIWidget/AppPredictionUIWidget-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ATXHomeScreenSuggestionClientObserver.h>
#import <libobjc.A.dylib/APUISuggestionsWidgetViewDelegate.h>
#import <libobjc.A.dylib/SBHWidgetContextMenuControlling.h>

@class ATXHomeScreenWidgetIdentifiable, ATXHomeScreenSuggestionClient, ATXSuggestionLayout, ATXProactiveSuggestion, NSString, APUISuggestionsWidgetView, NSArray;

@interface APUISuggestionsWidgetViewController : UIViewController <ATXHomeScreenSuggestionClientObserver, APUISuggestionsWidgetViewDelegate, SBHWidgetContextMenuControlling> {

	ATXHomeScreenWidgetIdentifiable* _widgetIdentifiable;
	ATXHomeScreenSuggestionClient* _suggestionClient;
	ATXSuggestionLayout* _layout;
	ATXProactiveSuggestion* _selectedSuggestion;
	NSString* _identifier;
	BOOL _showingContextMenu;
	BOOL _occluded;
	BOOL _viewVisible;
	BOOL _effectiveViewVisibility;
	APUISuggestionsWidgetView* _widgetView;

}

@property (nonatomic,retain) APUISuggestionsWidgetView * widgetView;                           //@synthesize widgetView=_widgetView - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) BOOL viewVisible;                            //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,readonly) BOOL effectiveViewVisibility;                                   //@synthesize effectiveViewVisibility=_effectiveViewVisibility - In the implementation block
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                                  //@synthesize occluded=_occluded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isShowingContextMenu,nonatomic) BOOL showingContextMenu;              //@synthesize showingContextMenu=_showingContextMenu - In the implementation block
@property (nonatomic,copy,readonly) NSArray * applicationShortcutItems; 
+(id)smartStackImageForIconSize:(CGSize)arg1 scale:(double)arg2 ;
+(id)imageForIconSize:(CGSize)arg1 scale:(double)arg2 ;
+(id)previewIdentifierWithIdentifier:(id)arg1 layoutSize:(unsigned long long)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setOccluded:(BOOL)arg1 ;
-(BOOL)isShowingContextMenu;
-(APUISuggestionsWidgetView *)widgetView;
-(void)setWidgetView:(APUISuggestionsWidgetView *)arg1 ;
-(NSArray *)applicationShortcutItems;
-(void)didSelectApplicationShortcutItem:(id)arg1 ;
-(void)suggestionClientDidRefreshSuggestions:(id)arg1 ;
-(BOOL)isOccluded;
-(BOOL)isViewVisible;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setViewVisible:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)willShowContextMenuAtLocation:(CGPoint)arg1 ;
-(void)setShowingContextMenu:(BOOL)arg1 ;
-(void)suggestionClientDidRefreshSuggestionsForSuggestionsWidget:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 suggestionsClient:(id)arg2 layoutSize:(unsigned long long)arg3 ;
-(void)_topWidgetDidAppear:(id)arg1 ;
-(void)_topWidgetDidDisappear:(id)arg1 ;
-(void)_updateViewVisibility;
-(BOOL)effectiveViewVisibility;
-(void)logChangeWithNewSuggestionIds:(id)arg1 previousSuggestionIds:(id)arg2 suggestionClient:(id)arg3 ;
-(void)view:(id)arg1 didTapSuggestion:(id)arg2 ;
-(void)view:(id)arg1 didFinishExecutingSuggestion:(id)arg2 ;
-(void)view:(id)arg1 didFailExecutingSuggestion:(id)arg2 ;
-(void)_updateLayoutWithSuggestionClient:(id)arg1 ;
-(id)_suggestionIdsInLayout:(id)arg1 ;
-(void)verifyLayoutSizeCompatibility;
@end

