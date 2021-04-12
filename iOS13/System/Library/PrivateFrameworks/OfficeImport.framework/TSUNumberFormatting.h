/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol TSUNumberFormatting <TSUDataFormat,NSObject>
@required
-(id)currencyCode;
-(double)scaleFactor;
-(int)valueType;
-(id)formatString;
-(unsigned short)base;
-(id)stringFromString:(id)arg1;
-(BOOL)isCustom;
-(BOOL)isEquivalent:(id)arg1;
-(id)stringFromDouble:(double)arg1;
-(id)formatName;
-(void)setFormatName:(id)arg1;
-(unsigned short)decimalPlaces;
-(BOOL)showThousandsSeparator;
-(BOOL)usesAccountingStyle;
-(int)negativeStyle;
-(int)fractionAccuracy;
-(BOOL)hasValidDecimalPlaces;
-(id)numberFormatBySettingValueType:(int)arg1;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1;
-(id)numberFormatByIncrementingDecimalPlaces:(short)arg1;
-(id)numberFormatBySettingCurrencyCode:(id)arg1;
-(id)numberFormatBySettingSuffixString:(id)arg1;
-(id)numberFormatBySettingNegativeStyle:(int)arg1;
-(id)numberFormatBySettingShowThousandsSeparator:(BOOL)arg1;
-(id)numberFormatBySettingFractionAccuracy:(int)arg1;
-(id)numberFormatBySettingUseAccountingStyle:(BOOL)arg1;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(BOOL)isTextFormat;
-(BOOL)canFormatText;
-(BOOL)usesTextFormatForValue:(double)arg1;
-(BOOL)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(BOOL)baseUseMinusSign;
-(BOOL)usesTabs;
-(BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
-(id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2;
-(id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;
-(id)chartLabelStringFromDouble:(double)arg1;

@end

