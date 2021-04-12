/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSArray, IKJSTabBarItem;


@protocol _IKJSTabBar <IKJSTabBar,JSExport>
@property (nonatomic,readonly) NSArray * tabs; 
@property (nonatomic,retain) IKJSTabBarItem * selectedTab; 
@required
-(NSArray *)tabs;
-(IKJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(id)arg1;
-(void)setTabs:(id)arg1;

@end

