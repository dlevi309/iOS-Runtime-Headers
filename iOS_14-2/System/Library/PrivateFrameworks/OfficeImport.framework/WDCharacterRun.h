/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {

	NSMutableString* mString;
	BOOL mBinaryWriterContentFlag;

}
-(void)appendString:(id)arg1 ;
-(id)description;
-(id)string;
-(BOOL)isEmpty;
-(void)setString:(id)arg1 ;
-(int)runType;
-(void)copyPropertiesFrom:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)binaryWriterContentFlag;
-(void)setBinaryWriterContentFlag:(BOOL)arg1 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)setPropertiesForDocument;
-(void)clearString;
-(id)initWithParagraph:(id)arg1 string:(id)arg2 ;
@end

