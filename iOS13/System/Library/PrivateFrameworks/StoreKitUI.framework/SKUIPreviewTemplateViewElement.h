/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUILockupViewElement;

@interface SKUIPreviewTemplateViewElement : SKUIViewElement {

	long long _itemIdentifier;
	NSString* _previewURLString;

}

@property (nonatomic,readonly) long long itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUILockupViewElement * previewLockup; 
@property (nonatomic,readonly) NSString * previewURLString;                        //@synthesize previewURLString=_previewURLString - In the implementation block
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)previewURLString;
-(SKUILockupViewElement *)previewLockup;
@end

