/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

