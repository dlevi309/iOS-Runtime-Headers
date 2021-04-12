/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUIStarRatingViewElement : SKUIViewElement {

	float _ratingValue;
	SKUIViewElementText* _text;
	long long _starType;
	BOOL _enabled;

}

@property (nonatomic,readonly) long long starType;                      //@synthesize starType=_starType - In the implementation block
@property (nonatomic,readonly) float ratingValue;                       //@synthesize ratingValue=_ratingValue - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * text;              //@synthesize text=_text - In the implementation block
-(float)ratingValue;
-(SKUIViewElementText *)text;
-(BOOL)isEnabled;
-(long long)starType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

