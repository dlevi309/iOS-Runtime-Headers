/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithViewElement:(id)arg1 ;
-(NSString *)dividerTitle;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithDividerTitle:(id)arg1 ;
@end

