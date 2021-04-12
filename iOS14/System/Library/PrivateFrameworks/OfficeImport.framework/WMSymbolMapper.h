/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class NSString;

@interface WMSymbolMapper : CMMapper {

	unsigned short mCharacter;
	NSString* mFontName;

}
+(unsigned short)mapWindingsCharacter:(unsigned short)arg1 ;
+(unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg1 ;
+(unsigned short)mapCharacter:(unsigned short)arg1 withFontName:(id)arg2 ;
+(BOOL)isSymbolFontName:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDSymbol:(id)arg1 parent:(id)arg2 ;
@end

