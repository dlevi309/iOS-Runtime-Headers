/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIDividerViewElement;

@interface SKUIDividerPageComponent : SKUIPageComponent {

	NSString* _title;

}

@property (nonatomic,readonly) SKUIDividerViewElement * viewElement; 
@property (nonatomic,readonly) NSString * dividerTitle;                           //@synthesize title=_title - In the implementation block
-(long long)componentType;
-(NSString *)dividerTitle;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithDividerTitle:(id)arg1 ;
@end

