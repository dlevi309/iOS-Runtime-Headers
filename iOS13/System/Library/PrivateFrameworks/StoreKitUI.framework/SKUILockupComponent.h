/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIEditorialComponent, SKUIItem, SKUILockupViewElement;

@interface SKUILockupComponent : SKUIPageComponent {

	SKUIEditorialComponent* _editorial;
	SKUIItem* _item;
	long long _itemIdentifier;
	SKUILockupStyle _lockupStyle;

}

@property (nonatomic,readonly) SKUILockupViewElement * viewElement; 
@property (nonatomic,readonly) BOOL _needsItemData; 
@property (nonatomic,readonly) SKUIEditorialComponent * editorial;               //@synthesize editorial=_editorial - In the implementation block
@property (nonatomic,readonly) SKUIItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUILockupStyle lockupStyle;                      //@synthesize lockupStyle=_lockupStyle - In the implementation block
-(SKUIItem *)item;
-(long long)itemIdentifier;
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(BOOL)_needsItemData;
-(id)initWithItem:(id)arg1 style:(SKUILockupStyle)arg2 ;
-(SKUIEditorialComponent *)editorial;
-(void)_setItem:(id)arg1 ;
-(SKUILockupStyle)lockupStyle;
-(void)_setLockupStyle:(SKUILockupStyle)arg1 ;
-(id)initWithItemIdentifier:(long long)arg1 style:(SKUILockupStyle)arg2 ;
@end

