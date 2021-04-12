/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKTextElement.h>

@class IKAppKeyboard;

@interface IKTextFieldElement : IKTextElement {

	IKAppKeyboard* _keyboard;

}

@property (nonatomic,readonly) IKAppKeyboard * keyboard;              //@synthesize keyboard=_keyboard - In the implementation block
+(id)supportedFeatures;
-(BOOL)tv_isSecure;
-(long long)tv_keyboardType;
-(IKAppKeyboard *)keyboard;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end

