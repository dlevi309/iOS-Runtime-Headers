/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

