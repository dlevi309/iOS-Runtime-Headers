/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {

	NSMutableString* mString;
	BOOL mBinaryWriterContentFlag;

}
-(id)string;
-(id)description;
-(BOOL)isEmpty;
-(void)appendString:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)copyPropertiesFrom:(id)arg1 ;
-(int)runType;
-(BOOL)binaryWriterContentFlag;
-(void)setBinaryWriterContentFlag:(BOOL)arg1 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)setPropertiesForDocument;
-(void)clearString;
-(id)initWithParagraph:(id)arg1 string:(id)arg2 ;
@end

