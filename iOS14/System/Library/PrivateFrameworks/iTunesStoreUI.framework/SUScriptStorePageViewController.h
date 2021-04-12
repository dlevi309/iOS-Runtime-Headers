/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, SUScriptSegmentedControl, NSNumber, NSString;

@interface SUScriptStorePageViewController : SUScriptViewController {

	NSArray* _initialURLStrings;

}

@property (readonly) NSArray * URLStrings; 
@property (assign) id alwaysDispatchesScrollEvents; 
@property (assign) BOOL doubleTapEnabled; 
@property (assign) BOOL flashesScrollIndicators; 
@property (assign) id inputViewObeysDOMFocus; 
@property (assign) long long loadingIndicatorStyle; 
@property (assign) id loadsWhenHidden; 
@property (retain) id loadingTextColor; 
@property (retain) id loadingTextShadowColor; 
@property (retain) id placeholderBackgroundStyle; 
@property (readonly) id rootObject; 
@property (assign) BOOL scrollingEnabled; 
@property (retain) SUScriptSegmentedControl * segmentedControl; 
@property (assign) BOOL shouldInvalidateForLowMemory; 
@property (assign) BOOL shouldLoadProgressively; 
@property (assign) id shouldShowFormAccessory; 
@property (assign) BOOL showsBackgroundShadow; 
@property (assign) id showsHorizontalScrollIndicator; 
@property (assign) id showsVerticalScrollIndicator; 
@property (retain) NSNumber * timeoutInterval; 
@property (retain) id URLs; 
@property (retain) NSString * userInfo; 
@property (readonly) long long indicatorStyleWhite; 
@property (readonly) long long indicatorStyleGray; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(BOOL)copyURLStrings:(id*)arg1 forValue:(id)arg2 ;
-(void)setUserInfo:(NSString *)arg1 ;
-(NSString *)userInfo;
-(id)init;
-(void)setScrollingEnabled:(BOOL)arg1 ;
-(id)rootObject;
-(id)attributeKeys;
-(id)alwaysDispatchesScrollEvents;
-(NSNumber *)timeoutInterval;
-(void)setAlwaysDispatchesScrollEvents:(id)arg1 ;
-(id)inputViewObeysDOMFocus;
-(void)setInputViewObeysDOMFocus:(id)arg1 ;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(id)showsHorizontalScrollIndicator;
-(id)URLs;
-(void)setDoubleTapEnabled:(BOOL)arg1 ;
-(id)showsVerticalScrollIndicator;
-(SUScriptSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(SUScriptSegmentedControl *)arg1 ;
-(id)_className;
-(void)setShowsHorizontalScrollIndicator:(id)arg1 ;
-(void)setShowsVerticalScrollIndicator:(id)arg1 ;
-(void)setURLs:(id)arg1 ;
-(id)_storePageViewController;
-(void)setLoadingIndicatorStyle:(long long)arg1 ;
-(long long)loadingIndicatorStyle;
-(void)setLoadsWhenHidden:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)loadsWhenHidden;
-(id)loadingTextColor;
-(id)loadingTextShadowColor;
-(void)setLoadingTextColor:(id)arg1 ;
-(void)setLoadingTextShadowColor:(id)arg1 ;
-(void)setNativeViewController:(id)arg1 ;
-(void)setShowsBackgroundShadow:(BOOL)arg1 ;
-(BOOL)showsBackgroundShadow;
-(void)setFlashesScrollIndicators:(BOOL)arg1 ;
-(void)setShouldShowFormAccessory:(id)arg1 ;
-(void)setShouldLoadProgressively:(BOOL)arg1 ;
-(BOOL)flashesScrollIndicators;
-(id)shouldShowFormAccessory;
-(BOOL)shouldLoadProgressively;
-(id)newNativeViewController;
-(id)initWithURLStrings:(id)arg1 ;
-(id)_copyURLsFromURLStrings:(id)arg1 ;
-(void)applyURLStrings:(id)arg1 toViewController:(id)arg2 ;
-(id)_pathForWebArchiveWithIdentifier:(id)arg1 inDirectory:(id)arg2 ;
-(BOOL)_isSegmentedControlValid:(id)arg1 ;
-(void)_setURLs:(id)arg1 ;
-(id)loadWebArchiveWithIdentifier:(id)arg1 fromDirectory:(id)arg2 ;
-(void)reloadWithCallback:(id)arg1 ;
-(id)saveWebArchiveWithIdentifier:(id)arg1 toDirectory:(id)arg2 ;
-(void)setScrollEdgeInsetsWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4 ;
-(NSArray *)URLStrings;
-(BOOL)doubleTapEnabled;
-(id)placeholderBackgroundStyle;
-(BOOL)scrollingEnabled;
-(void)setPlaceholderBackgroundStyle:(id)arg1 ;
-(void)setShouldInvalidateForLowMemory:(BOOL)arg1 ;
-(BOOL)shouldInvalidateForLowMemory;
-(long long)indicatorStyleGray;
-(long long)indicatorStyleWhite;
-(void)_setValue:(id)arg1 forScriptPropertyKey:(id)arg2 ;
@end

