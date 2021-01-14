/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSLocalizableString : NSString {

	NSString* _stringsFileKey;
	NSString* _developmentLanguageString;

}

@property (copy,readonly) NSString * stringsFileKey; 
@property (copy,readonly) NSString * developmentLanguageString; 
+(BOOL)supportsSecureCoding;
+(id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(void)setDevelopmentLanguageString:(NSString *)arg1 ;
-(Class)classForCoder;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSString *)stringsFileKey;
-(NSString *)developmentLanguageString;
-(id)initWithCoder:(id)arg1 ;
-(void)setStringsFileKey:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

