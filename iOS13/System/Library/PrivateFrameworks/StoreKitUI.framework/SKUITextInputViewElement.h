/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)keyboardType;
-(BOOL)isSecure;
-(unsigned long long)elementType;
-(NSString *)placeholderText;
-(long long)maximumLength;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIAnimatorDOMFeature *)animationInterface;
@end

