/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIFullscreenImageViewElement;

@interface SKUILockupViewElement : SKUIViewElement {

	char _enabled;
	long long _lockupViewType;
	BOOL _selectable;

}

@property (nonatomic,readonly) BOOL containsElementGroups; 
@property (nonatomic,readonly) SKUIFullscreenImageViewElement * fullscreenImage; 
@property (nonatomic,readonly) long long lockupViewType;                                      //@synthesize lockupViewType=_lockupViewType - In the implementation block
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable;                           //@synthesize selectable=_selectable - In the implementation block
-(BOOL)isEnabled;
-(BOOL)isSelectable;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIFullscreenImageViewElement *)fullscreenImage;
-(long long)pageComponentType;
-(long long)lockupViewType;
-(BOOL)containsElementGroups;
@end

