/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)numberOfRatings;
-(float)value;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)numberOfStars;
@end

