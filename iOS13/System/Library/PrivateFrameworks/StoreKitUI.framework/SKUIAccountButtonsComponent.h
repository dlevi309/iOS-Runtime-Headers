/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUILink, SKUIAccountButtonsViewElement;

@interface SKUIAccountButtonsComponent : SKUIPageComponent {

	SKUILink* _ecommerceLink;
	BOOL _hidesTermsAndConditions;

}

@property (nonatomic,readonly) SKUIAccountButtonsViewElement * viewElement; 
@property (nonatomic,retain) SKUILink * ECommerceLink;                                   //@synthesize ecommerceLink=_ecommerceLink - In the implementation block
@property (assign,nonatomic) BOOL hidesTermsAndConditions;                               //@synthesize hidesTermsAndConditions=_hidesTermsAndConditions - In the implementation block
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)setECommerceLink:(SKUILink *)arg1 ;
-(SKUILink *)ECommerceLink;
-(BOOL)hidesTermsAndConditions;
-(void)setHidesTermsAndConditions:(BOOL)arg1 ;
@end

