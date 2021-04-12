/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class OADTextRun;

@interface PMTextRunMapper : CMMapper {

	OADTextRun* mTextRun;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTextRun:(id)arg1 parent:(id)arg2 ;
-(id)fontScheme;
-(id)copyCharacterStyleWithState:(id)arg1 ;
-(void)addFontForLanguageType:(int)arg1 toCharacterStyle:(id)arg2 ;
-(BOOL)_isDefaultFill:(id)arg1 ;
@end

