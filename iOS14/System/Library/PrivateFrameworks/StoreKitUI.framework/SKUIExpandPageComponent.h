/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, SKUIExpandViewElement;

@interface SKUIExpandPageComponent : SKUIPageComponent {

	NSMutableArray* _childComponents;
	SKUIExpandViewElement* _viewElement;

}

@property (nonatomic,readonly) SKUIExpandViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(long long)componentType;
-(SKUIExpandViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
-(id)metricsElementName;
-(id)childComponentForIndex:(long long)arg1 ;
-(id)childComponents;
@end

