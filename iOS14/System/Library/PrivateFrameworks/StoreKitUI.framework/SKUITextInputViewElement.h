/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIInputViewElement.h>

@class NSString, SKUIAnimatorDOMFeature;

@interface SKUITextInputViewElement : SKUIInputViewElement {

	long long _keyboardType;
	long long _maximumLength;
	BOOL _secure;
	NSString* _placeholderText;

}

@property (nonatomic,readonly) SKUIAnimatorDOMFeature * animationInterface; 
@property (nonatomic,readonly) long long keyboardType;                                   //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long maximumLength;                                  //@synthesize maximumLength=_maximumLength - In the implementation block
@property (nonatomic,readonly) NSString * placeholderText;                               //@synthesize placeholderText=_placeholderText - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                              //@synthesize secure=_secure - In the implementation block
+(id)supportedFeatures;
+(BOOL)isTextInputType:(id)arg1 ;
-(BOOL)isSecure;
-(long long)keyboardType;
-(NSString *)placeholderText;
-(unsigned long long)elementType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)maximumLength;
-(SKUIAnimatorDOMFeature *)animationInterface;
@end

