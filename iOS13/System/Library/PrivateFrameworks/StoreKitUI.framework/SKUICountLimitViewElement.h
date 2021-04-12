/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUILimitViewElement.h>

@class NSString;

@interface SKUICountLimitViewElement : SKUILimitViewElement {

	long long _limitValue;
	NSString* _entityTypeString;

}

@property (nonatomic,readonly) long long limitValue;                          //@synthesize limitValue=_limitValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityTypeString;              //@synthesize entityTypeString=_entityTypeString - In the implementation block
+(BOOL)shouldParseChildDOMElements;
-(long long)limitValue;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)entityTypeString;
@end

