/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOrthography.h>

@interface NSSimpleOrthography : NSOrthography {

	unsigned _orthographyFlags;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)orthographyWithFlags:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(id)dominantScript;
-(id)languageMap;
-(id)dominantLanguage;
-(id)allScripts;
-(id)languagesForScript:(id)arg1 ;
-(id)dominantLanguageForScript:(id)arg1 ;
-(id)allLanguages;
-(id)initWithFlags:(unsigned)arg1 ;
@end

