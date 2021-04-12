/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * dominantScript; 
@property (copy,readonly) NSDictionary * languageMap; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
+(id)_orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
+(id)_scriptNameForScriptIndex:(unsigned long long)arg1 ;
+(id)defaultOrthographyForLanguage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(NSString *)dominantScript;
-(NSDictionary *)languageMap;
-(id)dominantLanguage;
-(id)allScripts;
-(id)languagesForScript:(id)arg1 ;
-(id)dominantLanguageForScript:(id)arg1 ;
-(id)allLanguages;
@end

