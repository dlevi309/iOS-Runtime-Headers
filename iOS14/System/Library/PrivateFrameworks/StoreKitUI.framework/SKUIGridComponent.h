/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, NSArray;

@interface SKUIGridComponent : SKUIPageComponent {

	NSMutableArray* _children;
	SKUIEditorialStyle _editorialStyle;
	long long _gridType;
	SKUILockupStyle _lockupStyle;
	long long _missingItemCount;
	BOOL _showsIndexNumbers;

}

@property (nonatomic,readonly) long long gridType;                             //@synthesize gridType=_gridType - In the implementation block
@property (nonatomic,readonly) NSArray * children;                             //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) SKUIEditorialStyle editorialStyle;              //@synthesize editorialStyle=_editorialStyle - In the implementation block
@property (nonatomic,readonly) SKUILockupStyle lockupStyle;                    //@synthesize lockupStyle=_lockupStyle - In the implementation block
@property (nonatomic,readonly) BOOL showsIndexNumbers;                         //@synthesize showsIndexNumbers=_showsIndexNumbers - In the implementation block
-(NSArray *)children;
-(id)description;
-(long long)componentType;
-(long long)gridType;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(id)initWithBrickItems:(id)arg1 ;
-(id)initWithRoomContext:(id)arg1 gridType:(long long)arg2 ;
-(void)_reloadMissingItemCount;
-(void)_setChildrenWithFeaturedContextContext:(id)arg1 ;
-(id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(SKUILockupStyle)arg2 ;
-(SKUILockupStyle)lockupStyle;
-(id)initWithGridItems:(id)arg1 ;
-(id)initWithLockups:(id)arg1 ;
-(id)_updateWithInvalidItemIdentifiers:(id)arg1 ;
-(id)_updateWithMissingItems:(id)arg1 ;
-(BOOL)showsIndexNumbers;
-(SKUIEditorialStyle)editorialStyle;
@end

