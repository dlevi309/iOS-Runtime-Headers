/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@protocol WGWidgetListEditViewControllerDataSource <NSObject>
@optional
-(long long)layoutModeForWidgetListEditViewController:(id)arg1;
-(id)widgetListEditViewController:(id)arg1 displayNameForGroup:(id)arg2;

@required
-(void)widgetListEditViewController:(id)arg1 requestsIconForItemWithIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3;
-(BOOL)widgetListEditViewControllerShouldIncludeInternalWidgets:(id)arg1;
-(BOOL)shouldShowWidgetsPinButtonForWidgetListEditViewController:(id)arg1;
-(id)widgetListEditViewController:(id)arg1 itemIdentifiersForGroup:(id)arg2;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierEnabled:(id)arg2;
-(BOOL)widgetListEditViewControllerShouldShowFavorites:(id)arg1;
-(id)disabledInterfaceItemIdentifiersForWidgetListEditViewController:(id)arg1;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierFavorited:(id)arg2;
-(id)widgetListEditViewController:(id)arg1 displayNameForItemWithIdentifier:(id)arg2;
-(id)groupsForWidgetListEditViewController:(id)arg1;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierNew:(id)arg2;
-(id)widgetListEditViewController:(id)arg1 defaultGroupForItemWithIdentifier:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 acknowledgeInterfaceItemsWithIdentifiers:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 didReorderItemsWithIdentifiersInGroups:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 setEnabled:(BOOL)arg2 forItemsWithIdentifiers:(id)arg3;
-(void)widgetListEditViewController:(id)arg1 updateFavoritesToIdentifiers:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 didChangeWidgetsPinning:(BOOL)arg2;
-(BOOL)areWidgetsPinnedForWidgetListEditViewController:(id)arg1;

@end

