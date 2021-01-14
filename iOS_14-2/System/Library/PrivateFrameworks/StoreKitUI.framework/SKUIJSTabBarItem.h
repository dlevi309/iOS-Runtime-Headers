/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)badgeValue;
-(void)setBadgeValue:(id)arg1;
-(NSString *)rootURL;
-(NSString *)identifier;
-(NSString *)title;
-(IKJSNavigationDocument *)navigationDocument;

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
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)rootURL;
-(SKUITabBarItem *)tabBarItem;
-(NSString *)identifier;
-(NSString *)title;
-(void)dealloc;
-(IKJSNavigationDocument *)navigationDocument;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4 ;
@end

