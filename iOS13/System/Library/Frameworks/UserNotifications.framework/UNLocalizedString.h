/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(NSString *)value;
-(Class)classForKeyedArchiver;
-(BOOL)_allowsDirectEncoding;
-(NSArray *)arguments;
-(id)un_localizedStringKey;
-(id)_initWithKey:(id)arg1 arguments:(id)arg2 value:(id)arg3 ;
-(id)un_localizedStringArguments;
-(id)un_localizedStringValue;
@end

