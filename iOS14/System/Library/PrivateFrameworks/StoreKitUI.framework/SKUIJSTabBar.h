/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSTabBar.h>
@class SKUIJSTabBarItem, NSArray;


@protocol SKUIJSTabBar <JSExport>
@property (nonatomic,retain) SKUIJSTabBarItem * selectedTab; 
@property (nonatomic,readonly) NSArray * tabs; 
@property (nonatomic,readonly) SKUIJSTabBarItem * transientTab; 
@required
-(NSArray *)tabs;
-(SKUIJSTabBarItem *)transientTab;
-(SKUIJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(id)arg1;

@end


@class SKUIJSTabBarItem, NSArray, SKUIApplicationController;

@interface SKUIJSTabBar : IKJSObject <SKUIJSTabBar> {

	SKUIApplicationController* _applicationController;
	NSArray* _tabs;
	SKUIJSTabBarItem* _transientTab;

}

@property (nonatomic,retain) SKUIJSTabBarItem * selectedTab; 
@property (nonatomic,readonly) NSArray * tabs;                               //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,readonly) SKUIJSTabBarItem * transientTab;              //@synthesize transientTab=_transientTab - In the implementation block
-(NSArray *)tabs;
-(void)sendOnUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppContext:(id)arg1 controller:(id)arg2 ;
-(SKUIJSTabBarItem *)transientTab;
-(void)sendOnUpdate;
-(void)sendOnNeedsContentForTabBarItem:(id)arg1 ;
-(void)_reloadTabBarItemsWithPreludeMainThreadWork:(/*^block*/id)arg1 ;
-(id)_selectedTabBarItemForIndex:(long long)arg1 ;
-(SKUIJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(SKUIJSTabBarItem *)arg1 ;
@end

