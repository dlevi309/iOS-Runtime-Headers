/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {

	OADTextBodyProperties* mProperties;
	NSMutableArray* mParagraphs;
	OADTextListStyle* mTextListStyle;

}
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(unsigned long long)paragraphCount;
-(id)paragraphAtIndex:(unsigned long long)arg1 ;
-(id)plainText;
-(id)addParagraph;
-(id)overrideTextListStyle;
-(id)textListStyle;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(BOOL)arg2 ;
-(void)flattenProperties;
-(BOOL)propagateActualTextStyleToTextListStyle;
-(unsigned long long)nonEmptyParagraphCount;
-(void)removeAllParagraphs;
-(unsigned long long)newLineCount;
-(id)firstParagraphEffects;
-(void)applyTextListStyle:(id)arg1 ;
-(void)removeTrailingNewlines;
-(void)removeLeadingNewlines;
-(void)removeLastParagraphIfEmpty;
-(BOOL)isSimilarToTextBody:(id)arg1 ;
-(void)addParagraphsFromTextBody:(id)arg1 ;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
@end

