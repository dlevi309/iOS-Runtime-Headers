/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)lowercaseCharacterClass;
+(id)digitCharacterClass;
+(id)specialCharacterClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(NSString *)value;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
@end

