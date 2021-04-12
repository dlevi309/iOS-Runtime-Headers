/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUCustomFormatData.h>

@class NSString, NSArray, NSIndexSet;

@interface OITSUMutableCustomFormatData : OITSUCustomFormatData

@property (nonatomic,copy) NSString * formatString; 
@property (nonatomic,copy) NSArray * interstitialStrings; 
@property (nonatomic,copy) NSIndexSet * interstitialStringInsertionIndexes; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) int fractionAccuracy; 
@property (assign,nonatomic) unsigned char minimumIntegerWidth; 
@property (assign,nonatomic) unsigned char decimalWidth; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; 
@property (assign,nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; 
@property (assign,nonatomic) unsigned char numberOfHashDecimalPlaceholders; 
@property (assign,nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; 
@property (assign,nonatomic) unsigned short currencyCodeIndex; 
@property (assign,nonatomic) BOOL showThousandsSeparator; 
@property (assign,nonatomic) BOOL useAccountingStyle; 
@property (assign,nonatomic) BOOL requiresFractionReplacement; 
@property (assign,nonatomic) BOOL isConditional; 
@property (assign,nonatomic) BOOL formatContainsIntegerToken; 
@property (assign,nonatomic) BOOL isComplexFormat; 
+(id)customFormatData;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

