/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <Foundation/NSString.h>

@class NSString, NSArray;

@interface UNLocalizedString : NSString {

	NSString* _key;
	NSArray* _arguments;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * key;                   //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;              //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                 //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg1 arguments:(id)arg2 value:(id)arg3 ;
-(Class)classForKeyedArchiver;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)init;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)un_localizedStringKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)length;
-(NSArray *)arguments;
-(id)description;
-(Class)classForCoder;
-(NSString *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(id)_initWithKey:(id)arg1 arguments:(id)arg2 value:(id)arg3 ;
-(id)un_localizedStringArguments;
-(id)un_localizedStringValue;
-(BOOL)isEqual:(id)arg1 ;
@end

