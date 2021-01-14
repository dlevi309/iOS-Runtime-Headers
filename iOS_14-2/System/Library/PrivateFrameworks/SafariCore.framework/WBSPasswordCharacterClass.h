/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class NSString;

@interface WBSPasswordCharacterClass : NSObject {

	long long _type;
	NSString* _value;

}

@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(id)namedCharacterClassWithType:(long long)arg1 ;
+(id)customCharacterClassWithValue:(id)arg1 ;
+(id)unicodeCharacterClass;
+(id)asciiPrintableCharacterClass;
+(id)uppercaseCharacterClass;
+(id)digitCharacterClass;
+(id)lowercaseCharacterClass;
+(id)specialCharacterClass;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(long long)type;
-(unsigned long long)hash;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

