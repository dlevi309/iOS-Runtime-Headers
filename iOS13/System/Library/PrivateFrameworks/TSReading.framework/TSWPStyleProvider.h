/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSWPStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL supportsBoldItalicUnderlineShortcuts; 
@optional
-(unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1;
-(id)listLabelParagraphStyleOverrideAtParIndex:(unsigned long long)arg1;
-(id)listStyleAtParIndex:(unsigned long long)arg1;
-(id)coreTextPropertiesFilterDelegateAtParIndex:(unsigned long long)arg1;
-(unsigned long long)listNumberAtParIndex:(unsigned long long)arg1 numberingData:(SCD_Struct_TS130*)arg2;
-(id)modifiedCharacterStyle:(id)arg1 atCharIndex:(unsigned long long)arg2;
-(BOOL)supportsBoldItalicUnderlineShortcuts;

@required
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;

@end

