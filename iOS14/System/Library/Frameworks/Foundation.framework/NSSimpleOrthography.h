/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOrthography.h>

@interface NSSimpleOrthography : NSOrthography {

	unsigned _orthographyFlags;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)orthographyWithFlags:(unsigned)arg1 ;
-(id)dominantLanguage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)languageMap;
-(id)allLanguages;
-(Class)classForCoder;
-(id)dominantScript;
-(unsigned)orthographyFlags;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(id)dominantLanguageForScript:(id)arg1 ;
-(id)languagesForScript:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFlags:(unsigned)arg1 ;
-(id)allScripts;
@end

