/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString, IKDataBindingValue;

@interface IKDataBindingEntry : NSObject {

	NSString* _key;
	IKDataBindingValue* _value;
	unsigned long long _attributes;

}

@property (nonatomic,copy,readonly) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) IKDataBindingValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
-(unsigned long long)attributes;
-(NSString *)key;
-(IKDataBindingValue *)value;
-(id)initWithKey:(id)arg1 value:(id)arg2 attributes:(unsigned long long)arg3 ;
@end

