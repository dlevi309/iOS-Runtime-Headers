/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(long long)typeForTextFieldWithTag:(long long)arg1 ;
-(void)setType:(long long)arg1 forTextFieldWithTag:(long long)arg2 ;
-(long long)formType;
-(void)setFormType:(long long)arg1 ;
@end

