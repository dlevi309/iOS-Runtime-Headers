/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class WDFont;

@interface WDSymbol : WDRunWithCharacterProperties {

	WDFont* mFont;
	unsigned short mCharacter;

}
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)initWithParagraph:(id)arg1 ;
-(unsigned short)character;
-(void)setCharacter:(unsigned short)arg1 ;
-(int)runType;
@end

