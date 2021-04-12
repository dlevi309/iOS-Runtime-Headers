/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)previewURLString;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUILockupViewElement *)previewLockup;
@end

