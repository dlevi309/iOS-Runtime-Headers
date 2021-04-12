/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SpringBoardHome/SBIconView.h>
#import <libobjc.A.dylib/SBLeafIconDataSource.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol SearchUIHomeScreenEngagementDelegate;
@class LSApplicationProxy, SFSearchResult, NSURL, NSString;

@interface SearchUIHomeScreenAppIconView : SBIconView <SBLeafIconDataSource, SBIconViewDelegate, LSApplicationWorkspaceObserverProtocol> {

	id<SearchUIHomeScreenEngagementDelegate> _engagementDelegate;
	unsigned long long _variant;
	LSApplicationProxy* _applicationProxy;
	SFSearchResult* _searchResult;
	NSURL* _applicationBundleURL;
	NSString* _applicationShortcutWidgetBundleIdentifier;

}

@property (retain) LSApplicationProxy * applicationProxy;                                                     //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (retain) SFSearchResult * searchResult;                                                             //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy) NSURL * applicationBundleURL;                                                      //@synthesize applicationBundleURL=_applicationBundleURL - In the implementation block
@property (nonatomic,copy) NSString * applicationShortcutWidgetBundleIdentifier;                              //@synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIHomeScreenEngagementDelegate> engagementDelegate;              //@synthesize engagementDelegate=_engagementDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long variant;                                                      //@synthesize variant=_variant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheForVariant:(unsigned long long)arg1 ;
+(CGPathRef)shadowPathForIconFrame:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)applicationShortcutService;
-(id)init;
-(void)dealloc;
-(unsigned long long)variant;
-(void)deviceManagementPolicyDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setIcon:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(SFSearchResult *)searchResult;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(void)setVariant:(unsigned long long)arg1 ;
-(LSApplicationProxy *)applicationProxy;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(NSString *)applicationShortcutWidgetBundleIdentifier;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg1 ;
-(id)applicationBundleURLForShortcutsWithIconView:(id)arg1 ;
-(id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1 ;
-(BOOL)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2 ;
-(long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2 ;
-(void)iconTapped:(id)arg1 ;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)isTimedOutForIcon:(id)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(void)appIconsChanged:(id)arg1 ;
-(void)resetImageWithAppIcon:(id)arg1 ;
-(void)fetchIconImageForIcon:(id)arg1 ;
-(void)fetchApplicationShortcutInfoForIcon:(id)arg1 ;
-(void)setApplicationBundleURL:(NSURL *)arg1 ;
-(void)setApplicationShortcutWidgetBundleIdentifier:(NSString *)arg1 ;
-(id<SearchUIHomeScreenEngagementDelegate>)engagementDelegate;
-(BOOL)shouldHideShortcutsForAppIcon:(id)arg1 ;
-(NSURL *)applicationBundleURL;
-(void)launchIcon;
-(BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg1 ;
-(id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg1 ;
-(void)setEngagementDelegate:(id<SearchUIHomeScreenEngagementDelegate>)arg1 ;
@end

