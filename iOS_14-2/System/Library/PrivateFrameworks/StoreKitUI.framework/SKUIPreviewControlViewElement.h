/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIPreviewControlViewElement : SKUIViewElement {

	char _enabled;
	long long _itemIdentifier;
	NSString* _mediaURLString;

}

@property (nonatomic,readonly) long long itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * mediaURLString;              //@synthesize mediaURLString=_mediaURLString - In the implementation block
-(long long)itemIdentifier;
-(BOOL)isEnabled;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)mediaURLString;
@end

