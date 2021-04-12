/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUISortDescriptorViewElement : SKUIViewElement {

	BOOL _ascending;
	NSString* _property;

}

@property (getter=isAscending,nonatomic,readonly) BOOL ascending;              //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;                       //@synthesize property=_property - In the implementation block
+(BOOL)shouldParseChildDOMElements;
-(NSString *)property;
-(BOOL)isAscending;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

