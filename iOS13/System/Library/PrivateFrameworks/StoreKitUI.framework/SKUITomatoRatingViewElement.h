/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUITomatoRatingViewElement : SKUIViewElement {

	long long _freshness;
	float _tomatoRating;
	SKUIViewElementText* _ratingText;

}

@property (nonatomic,readonly) long long freshness;                           //@synthesize freshness=_freshness - In the implementation block
@property (nonatomic,readonly) float tomatoRating;                            //@synthesize tomatoRating=_tomatoRating - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * ratingText;              //@synthesize ratingText=_ratingText - In the implementation block
-(SKUIViewElementText *)ratingText;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)freshness;
-(float)tomatoRating;
@end

