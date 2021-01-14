/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * dominantScript; 
@property (copy,readonly) NSDictionary * languageMap; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
+(id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
+(id)defaultOrthographyForLanguage:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_scriptNameForScriptIndex:(unsigned long long)arg1 ;
-(id)dominantLanguage;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)languageMap;
-(id)allLanguages;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)description;
-(Class)classForCoder;
-(NSString *)dominantScript;
-(unsigned)orthographyFlags;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned long long)hash;
-(id)dominantLanguageForScript:(id)arg1 ;
-(id)languagesForScript:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allScripts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

