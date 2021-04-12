/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUIStarBarViewElement : SKUIViewElement {

	long long _numberOfRatings;
	long long _numberOfStars;
	float _value;

}

@property (nonatomic,readonly) long long numberOfRatings;              //@synthesize numberOfRatings=_numberOfRatings - In the implementation block
@property (nonatomic,readonly) long long numberOfStars;                //@synthesize numberOfStars=_numberOfStars - In the implementation block
@property (nonatomic,readonly) float value;                            //@synthesize value=_value - In the implementation block
-(float)value;
-(long long)numberOfRatings;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)numberOfStars;
@end

