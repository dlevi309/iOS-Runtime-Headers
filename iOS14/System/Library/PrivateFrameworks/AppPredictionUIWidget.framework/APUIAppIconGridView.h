/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

#import <AppPredictionUIWidget/AppPredictionUIWidget-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>
#import <libobjc.A.dylib/APUIAppIconDataSourceDelegate.h>
#import <libobjc.A.dylib/SBIconListLayoutObserver.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>

@protocol APUIAppIconGridViewDelegate;
@class APUIAppIconDataSource, SBIconListView, SBIconListModel, SBReusableViewMap, APUIAppIconGridLayoutProvider, NSArray, _UILegibilitySettings, NSString;

@interface APUIAppIconGridView : UIView <SBIconViewProviding, SBIconViewDelegate, APUIAppIconDataSourceDelegate, SBIconListLayoutObserver, SBIconViewQuerying> {

	APUIAppIconDataSource* _dataSource;
	SBIconListView* _gridView;
	SBIconListModel* _model;
	SBReusableViewMap* _reusableIconViewMap;
	APUIAppIconGridLayoutProvider* _layoutProvider;
	BOOL _occluded;
	id<APUIAppIconGridViewDelegate> _delegate;
	NSArray* _bundleIds;
	unsigned long long _mode;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic,__weak) id<APUIAppIconGridViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * bundleIds;                                            //@synthesize bundleIds=_bundleIds - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                      //@synthesize mode=_mode - In the implementation block
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                              //@synthesize occluded=_occluded - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createDismissSuggestionApplicationShortcutItemWithType:(id)arg1 localizedName:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(unsigned long long)mode;
-(void)setOccluded:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<APUIAppIconGridViewDelegate>)delegate;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(void)iconListViewDidChangeBoundsSize:(id)arg1 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(void)iconTapped:(id)arg1 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)iconListView:(id)arg1 didRemoveIconView:(id)arg2 ;
-(void)_significantTimeChange:(id)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(BOOL)isOccluded;
-(void)setDelegate:(id<APUIAppIconGridViewDelegate>)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(void)recycleIconView:(id)arg1 ;
-(void)layoutSubviews;
-(void)iconListView:(id)arg1 didAddIconView:(id)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(BOOL)iconViewDisplaysBadges:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)setBundleIds:(NSArray *)arg1 ;
-(NSArray *)bundleIds;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(void)highlightIconForBundleId:(id)arg1 ;
-(id)bundleIdAtLocation:(CGPoint)arg1 ;
-(void)_addGridView;
-(double)_iconLabelAlphaForMode:(unsigned long long)arg1 ;
-(void)_configureAliasingForIconView:(id)arg1 ;
-(BOOL)appIconDataSource:(id)arg1 launchAppFromIcon:(id)arg2 ;
@end

