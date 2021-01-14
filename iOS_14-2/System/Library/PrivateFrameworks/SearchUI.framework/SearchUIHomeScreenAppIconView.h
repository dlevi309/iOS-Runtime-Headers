/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SpringBoardHome/SBIconView.h>
#import <libobjc.A.dylib/SBLeafIconDataSource.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>

@protocol SearchUIHomeScreenEngagementDelegate;
@class NSString, SFSearchResult, TLKProminenceView, NSURL;

@interface SearchUIHomeScreenAppIconView : SBIconView <SBLeafIconDataSource, SBIconViewDelegate> {

	BOOL _addRoundedKeyboardHighlight;
	BOOL _labelNeedsUpdateOnMovingToWindow;
	id<SearchUIHomeScreenEngagementDelegate> _engagementDelegate;
	unsigned long long _variant;
	SFSearchResult* _searchResult;
	TLKProminenceView* _placeholderView;
	TLKProminenceView* _focusHighlightView;
	NSURL* _applicationBundleURL;
	NSString* _applicationShortcutWidgetBundleIdentifier;

}

@property (retain) SFSearchResult * searchResult;                                                             //@synthesize searchResult=_searchResult - In the implementation block
@property (retain) TLKProminenceView * placeholderView;                                                       //@synthesize placeholderView=_placeholderView - In the implementation block
@property (retain) TLKProminenceView * focusHighlightView;                                                    //@synthesize focusHighlightView=_focusHighlightView - In the implementation block
@property (nonatomic,copy) NSURL * applicationBundleURL;                                                      //@synthesize applicationBundleURL=_applicationBundleURL - In the implementation block
@property (nonatomic,copy) NSString * applicationShortcutWidgetBundleIdentifier;                              //@synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier - In the implementation block
@property (assign) BOOL labelNeedsUpdateOnMovingToWindow;                                                     //@synthesize labelNeedsUpdateOnMovingToWindow=_labelNeedsUpdateOnMovingToWindow - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIHomeScreenEngagementDelegate> engagementDelegate;              //@synthesize engagementDelegate=_engagementDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long variant;                                                      //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) BOOL addRoundedKeyboardHighlight;                                                //@synthesize addRoundedKeyboardHighlight=_addRoundedKeyboardHighlight - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicationShortcutService;
+(id)cacheForVariant:(unsigned long long)arg1 ;
-(BOOL)labelNeedsUpdateOnMovingToWindow;
-(void)setLabelNeedsUpdateOnMovingToWindow:(BOOL)arg1 ;
-(long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2 ;
-(void)fetchIconImageForIcon:(id)arg1 ;
-(void)launchIcon;
-(TLKProminenceView *)focusHighlightView;
-(id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2 ;
-(SFSearchResult *)searchResult;
-(void)_updateLabel;
-(void)setAddRoundedKeyboardHighlight:(BOOL)arg1 ;
-(void)setPlaceholderView:(TLKProminenceView *)arg1 ;
-(id)init;
-(BOOL)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)applicationBundleURLForShortcutsWithIconView:(id)arg1 ;
-(id<SearchUIHomeScreenEngagementDelegate>)engagementDelegate;
-(void)setApplicationShortcutWidgetBundleIdentifier:(NSString *)arg1 ;
-(TLKProminenceView *)placeholderView;
-(void)updateWithResult:(id)arg1 ;
-(id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)isTimedOutForIcon:(id)arg1 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(void)setFocusHighlightView:(TLKProminenceView *)arg1 ;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(void)setApplicationBundleURL:(NSURL *)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(BOOL)shouldHideShortcutsForAppIcon:(id)arg1 ;
-(unsigned long long)variant;
-(NSString *)applicationShortcutWidgetBundleIdentifier;
-(void)iconTapped:(id)arg1 ;
-(void)resetImageWithAppIcon:(id)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(void)setFocusHighlightFrame;
-(void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2 ;
-(void)appIconsChanged:(id)arg1 ;
-(void)fetchApplicationShortcutInfoForIcon:(id)arg1 ;
-(void)setEngagementDelegate:(id<SearchUIHomeScreenEngagementDelegate>)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)setVariant:(unsigned long long)arg1 ;
-(BOOL)addRoundedKeyboardHighlight;
-(id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)screenTimeChanged;
-(BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg1 ;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg1 ;
-(NSURL *)applicationBundleURL;
@end

