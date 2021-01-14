/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface UIKBAutoFillTestExpectedResult : NSObject <NSCoding> {

	NSMutableDictionary* _textFieldTagToTextFieldType;
	long long _formType;

}

@property (assign,nonatomic) long long formType;              //@synthesize formType=_formType - In the implementation block
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)formType;
-(id)initWithCoder:(id)arg1 ;
-(void)setFormType:(long long)arg1 ;
-(long long)typeForTextFieldWithTag:(long long)arg1 ;
-(void)setType:(long long)arg1 forTextFieldWithTag:(long long)arg2 ;
@end

