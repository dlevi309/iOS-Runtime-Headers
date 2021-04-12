/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {

	OADParagraphProperties* mProperties;
	NSMutableArray* mTextRuns;
	OADCharacterProperties* mParagraphEndCharacterProperties;

}
-(unsigned long long)characterCount;
-(id)properties;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(void)applyProperties:(id)arg1 ;
-(id)plainText;
-(unsigned long long)textRunCount;
-(id)textRunAtIndex:(unsigned long long)arg1 ;
-(id)paragraphEndCharacterProperties;
-(id)addRegularTextRun;
-(id)addTextLineBreak;
-(id)addDateTimeFieldWithFormat:(int)arg1 ;
-(id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2 ;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1 ;
-(void)removeAllTextRuns;
-(unsigned long long)lineBreakCount;
-(id)addFooterField;
-(void)setParagraphEndCharacterProperties:(id)arg1 ;
-(BOOL)hasBulletCharacterProperties;
-(id)bulletCharacterProperties;
-(BOOL)isSimilarToParagraph:(id)arg1 ;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
-(id)addSlideNumberField;
@end

