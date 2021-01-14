/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol TSUNumberFormatting <TSUDataFormat,NSObject>
@required
-(int)valueType;
-(id)currencyCode;
-(id)formatString;
-(unsigned short)base;
-(double)scaleFactor;
-(BOOL)isEquivalent:(id)arg1;
-(BOOL)isCustom;
-(id)stringFromString:(id)arg1;
-(id)formatName;
-(void)setFormatName:(id)arg1;
-(unsigned short)decimalPlaces;
-(BOOL)usesAccountingStyle;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(BOOL)hasValidDecimalPlaces;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(BOOL)isTextFormat;
-(BOOL)canFormatText;
-(BOOL)usesTextFormatForValue:(double)arg1;
-(BOOL)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(BOOL)baseUseMinusSign;
-(BOOL)usesTabs;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2;

@end

