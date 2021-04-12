/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSelectable;
-(BOOL)isEnabled;
-(SKUIFullscreenImageViewElement *)fullscreenImage;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(long long)lockupViewType;
-(BOOL)containsElementGroups;
@end

