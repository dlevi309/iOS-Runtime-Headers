/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSTabBarItem.h>
@class NSString, IKJSNavigationDocument;


@protocol SKUIJSTabBarItem <JSExport>
@property (nonatomic,retain) NSString * badgeValue; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@property (nonatomic,readonly) NSString * rootURL; 
@property (nonatomic,readonly) NSString * title; 
@required
-(NSString *)identifier;
-(NSString *)title;
-(void)setBadgeValue:(id)arg1;
-(NSString *)badgeValue;
-(IKJSNavigationDocument *)navigationDocument;
-(NSString *)rootURL;

@end


@class NSString, IKJSNavigationDocument, JSManagedValue, IKJSObject, SKUITabBarItem;

@interface SKUIJSTabBarItem : IKJSObject <SKUIJSTabBarItem> {

	JSManagedValue* _managedNavigationDocument;
	IKJSNavigationDocument* _navigationDocument;
	IKJSObject* _owner;
	SKUITabBarItem* _tabBarItem;

}

@property (nonatomic,readonly) SKUITabBarItem * tabBarItem;                              //@synthesize tabBarItem=_tabBarItem - In the implementation block
@property (nonatomic,retain) NSString * badgeValue; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@property (nonatomic,readonly) NSString * rootURL; 
@property (nonatomic,readonly) NSString * title; 
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)title;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(SKUITabBarItem *)tabBarItem;
-(IKJSNavigationDocument *)navigationDocument;
-(NSString *)rootURL;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4 ;
@end

