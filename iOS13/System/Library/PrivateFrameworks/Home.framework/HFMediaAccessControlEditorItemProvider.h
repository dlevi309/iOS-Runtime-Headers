/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFStaticItemProvider.h>

@class HMHome, NSArray, HFStaticItem, NSMutableDictionary;

@interface HFMediaAccessControlEditorItemProvider : HFStaticItemProvider {

	HMHome* _home;
	NSArray* _accessControlItems;
	HFStaticItem* _passwordEnableItem;
	HFStaticItem* _passwordItem;
	NSMutableDictionary* _itemForIdentifier;

}

@property (nonatomic,copy) NSArray * accessControlItems;                             //@synthesize accessControlItems=_accessControlItems - In the implementation block
@property (nonatomic,copy) HFStaticItem * passwordEnableItem;                        //@synthesize passwordEnableItem=_passwordEnableItem - In the implementation block
@property (nonatomic,copy) HFStaticItem * passwordItem;                              //@synthesize passwordItem=_passwordItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemForIdentifier;              //@synthesize itemForIdentifier=_itemForIdentifier - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                        //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(NSArray *)accessControlItems;
-(HFStaticItem *)passwordEnableItem;
-(HFStaticItem *)passwordItem;
-(id)_buildItems;
-(NSMutableDictionary *)itemForIdentifier;
-(void)setAccessControlItems:(NSArray *)arg1 ;
-(void)setPasswordEnableItem:(HFStaticItem *)arg1 ;
-(void)setPasswordItem:(HFStaticItem *)arg1 ;
@end

