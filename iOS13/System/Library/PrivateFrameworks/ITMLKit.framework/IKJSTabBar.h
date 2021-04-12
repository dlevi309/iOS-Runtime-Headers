/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSTabBar.h>

@protocol IKJSTabBar <JSExport>
@end

#import <libobjc.A.dylib/_IKJSTabBarProxy.h>
#import <libobjc.A.dylib/_IKJSTabBar.h>

@class NSArray, IKJSTabBarItem, IKAppTabBar, NSString;

@interface IKJSTabBar : IKJSObject <NSObject, IKJSTabBar, _IKJSTabBarProxy, _IKJSTabBar> {

	IKAppTabBar* _appTabBar;
	NSArray* _tabItems;

}

@property (retain) NSArray * tabItems;                                      //@synthesize tabItems=_tabItems - In the implementation block
@property (nonatomic,__weak,readonly) IKAppTabBar * appTabBar;              //@synthesize appTabBar=_appTabBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * tabs; 
@property (nonatomic,retain) IKJSTabBarItem * selectedTab; 
-(id)initWithAppContext:(id)arg1 appTabBar:(id)arg2 ;
-(void)onSelect;
-(void)setTabs:(NSArray *)arg1 ;
-(NSArray *)tabs;
-(IKJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(IKJSTabBarItem *)arg1 ;
-(IKAppTabBar *)appTabBar;
-(void)_onSelectSync;
-(NSArray *)tabItems;
-(void)_setSelectedTabNavigationDocumentOnJSContext:(id)arg1 ;
-(id)asPrivateIKJSTabBar;
-(id)transientTab;
-(void)setTabItems:(NSArray *)arg1 ;
@end

