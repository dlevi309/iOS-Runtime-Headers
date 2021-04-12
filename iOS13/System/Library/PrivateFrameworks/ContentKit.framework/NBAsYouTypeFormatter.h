/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSString, NSMutableString, NSRegularExpression, NBPhoneNumberUtil, NSMutableArray, NBPhoneMetaData;

@interface NBAsYouTypeFormatter : NSObject {

	BOOL _isSuccessfulFormatting;
	BOOL _ableToFormat_;
	BOOL _inputHasFormatting_;
	BOOL _isCompleteNumber_;
	BOOL _isExpectingCountryCallingCode_;
	BOOL _shouldAddSpaceAfterNationalPrefix_;
	NSString* _DIGIT_PLACEHOLDER_;
	NSString* _SEPARATOR_BEFORE_NATIONAL_NUMBER_;
	NSString* _currentOutput_;
	NSString* _currentFormattingPattern_;
	NSString* _defaultCountry_;
	NSString* _nationalPrefixExtracted_;
	NSMutableString* _formattingTemplate_;
	NSMutableString* _accruedInput_;
	NSMutableString* _prefixBeforeNationalNumber_;
	NSMutableString* _accruedInputWithoutFormatting_;
	NSMutableString* _nationalNumber_;
	NSRegularExpression* _DIGIT_PATTERN_;
	NSRegularExpression* _NATIONAL_PREFIX_SEPARATORS_PATTERN_;
	NSRegularExpression* _CHARACTER_CLASS_PATTERN_;
	NSRegularExpression* _STANDALONE_DIGIT_PATTERN_;
	NSRegularExpression* _ELIGIBLE_FORMAT_PATTERN_;
	NBPhoneNumberUtil* _phoneUtil_;
	unsigned long long _lastMatchPosition_;
	unsigned long long _originalPosition_;
	unsigned long long _positionToRemember_;
	unsigned long long _MIN_LEADING_DIGITS_LENGTH_;
	NSMutableArray* _possibleFormats_;
	NBPhoneMetaData* _currentMetaData_;
	NBPhoneMetaData* _defaultMetaData_;
	NBPhoneMetaData* _EMPTY_METADATA_;

}

@property (nonatomic,retain) NSString * DIGIT_PLACEHOLDER_;                                                                     //@synthesize DIGIT_PLACEHOLDER_=_DIGIT_PLACEHOLDER_ - In the implementation block
@property (assign,setter=EPARATOR_BEFORE_NATIONAL_NUMBER_,nonatomic) NSString * SEPARATOR_BEFORE_NATIONAL_NUMBER_;              //@synthesize SEPARATOR_BEFORE_NATIONAL_NUMBER_=_SEPARATOR_BEFORE_NATIONAL_NUMBER_ - In the implementation block
@property (nonatomic,retain) NSString * currentOutput_;                                                                         //@synthesize currentOutput_=_currentOutput_ - In the implementation block
@property (nonatomic,retain) NSString * currentFormattingPattern_;                                                              //@synthesize currentFormattingPattern_=_currentFormattingPattern_ - In the implementation block
@property (nonatomic,retain) NSString * defaultCountry_;                                                                        //@synthesize defaultCountry_=_defaultCountry_ - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefixExtracted_;                                                               //@synthesize nationalPrefixExtracted_=_nationalPrefixExtracted_ - In the implementation block
@property (nonatomic,retain) NSMutableString * formattingTemplate_;                                                             //@synthesize formattingTemplate_=_formattingTemplate_ - In the implementation block
@property (nonatomic,retain) NSMutableString * accruedInput_;                                                                   //@synthesize accruedInput_=_accruedInput_ - In the implementation block
@property (nonatomic,retain) NSMutableString * prefixBeforeNationalNumber_;                                                     //@synthesize prefixBeforeNationalNumber_=_prefixBeforeNationalNumber_ - In the implementation block
@property (nonatomic,retain) NSMutableString * accruedInputWithoutFormatting_;                                                  //@synthesize accruedInputWithoutFormatting_=_accruedInputWithoutFormatting_ - In the implementation block
@property (nonatomic,retain) NSMutableString * nationalNumber_;                                                                 //@synthesize nationalNumber_=_nationalNumber_ - In the implementation block
@property (nonatomic,retain) NSRegularExpression * DIGIT_PATTERN_;                                                              //@synthesize DIGIT_PATTERN_=_DIGIT_PATTERN_ - In the implementation block
@property (nonatomic,retain) NSRegularExpression * NATIONAL_PREFIX_SEPARATORS_PATTERN_;                                         //@synthesize NATIONAL_PREFIX_SEPARATORS_PATTERN_=_NATIONAL_PREFIX_SEPARATORS_PATTERN_ - In the implementation block
@property (nonatomic,retain) NSRegularExpression * CHARACTER_CLASS_PATTERN_;                                                    //@synthesize CHARACTER_CLASS_PATTERN_=_CHARACTER_CLASS_PATTERN_ - In the implementation block
@property (setter=TANDALONE_DIGIT_PATTERN_,nonatomic,retain) NSRegularExpression * STANDALONE_DIGIT_PATTERN_;                   //@synthesize STANDALONE_DIGIT_PATTERN_=_STANDALONE_DIGIT_PATTERN_ - In the implementation block
@property (nonatomic,retain) NSRegularExpression * ELIGIBLE_FORMAT_PATTERN_;                                                    //@synthesize ELIGIBLE_FORMAT_PATTERN_=_ELIGIBLE_FORMAT_PATTERN_ - In the implementation block
@property (assign,nonatomic) BOOL ableToFormat_;                                                                                //@synthesize ableToFormat_=_ableToFormat_ - In the implementation block
@property (assign,nonatomic) BOOL inputHasFormatting_;                                                                          //@synthesize inputHasFormatting_=_inputHasFormatting_ - In the implementation block
@property (assign,nonatomic) BOOL isCompleteNumber_;                                                                            //@synthesize isCompleteNumber_=_isCompleteNumber_ - In the implementation block
@property (assign,nonatomic) BOOL isExpectingCountryCallingCode_;                                                               //@synthesize isExpectingCountryCallingCode_=_isExpectingCountryCallingCode_ - In the implementation block
@property (assign,nonatomic) BOOL shouldAddSpaceAfterNationalPrefix_;                                                           //@synthesize shouldAddSpaceAfterNationalPrefix_=_shouldAddSpaceAfterNationalPrefix_ - In the implementation block
@property (nonatomic,retain) NBPhoneNumberUtil * phoneUtil_;                                                                    //@synthesize phoneUtil_=_phoneUtil_ - In the implementation block
@property (assign,nonatomic) unsigned long long lastMatchPosition_;                                                             //@synthesize lastMatchPosition_=_lastMatchPosition_ - In the implementation block
@property (assign,nonatomic) unsigned long long originalPosition_;                                                              //@synthesize originalPosition_=_originalPosition_ - In the implementation block
@property (assign,nonatomic) unsigned long long positionToRemember_;                                                            //@synthesize positionToRemember_=_positionToRemember_ - In the implementation block
@property (assign,nonatomic) unsigned long long MIN_LEADING_DIGITS_LENGTH_;                                                     //@synthesize MIN_LEADING_DIGITS_LENGTH_=_MIN_LEADING_DIGITS_LENGTH_ - In the implementation block
@property (nonatomic,retain) NSMutableArray * possibleFormats_;                                                                 //@synthesize possibleFormats_=_possibleFormats_ - In the implementation block
@property (nonatomic,retain) NBPhoneMetaData * currentMetaData_;                                                                //@synthesize currentMetaData_=_currentMetaData_ - In the implementation block
@property (nonatomic,retain) NBPhoneMetaData * defaultMetaData_;                                                                //@synthesize defaultMetaData_=_defaultMetaData_ - In the implementation block
@property (nonatomic,retain) NBPhoneMetaData * EMPTY_METADATA_;                                                                 //@synthesize EMPTY_METADATA_=_EMPTY_METADATA_ - In the implementation block
@property (nonatomic,readonly) BOOL isSuccessfulFormatting;                                                                     //@synthesize isSuccessfulFormatting=_isSuccessfulFormatting - In the implementation block
-(id)init;
-(id)description;
-(void)clear;
-(id)initWithRegionCode:(id)arg1 ;
-(id)initWithRegionCodeForTest:(id)arg1 ;
-(id)initWithRegionCode:(id)arg1 bundle:(id)arg2 ;
-(id)initWithRegionCodeForTest:(id)arg1 bundle:(id)arg2 ;
-(id)getMetadataForRegion_:(id)arg1 ;
-(BOOL)maybeCreateNewTemplate_;
-(void)getAvailableFormats_:(id)arg1 ;
-(BOOL)isFormatEligible_:(id)arg1 ;
-(void)narrowDownPossibleFormats_:(id)arg1 ;
-(BOOL)createFormattingTemplate_:(id)arg1 ;
-(id)getFormattingTemplate_:(id)arg1 numberFormat:(id)arg2 ;
-(id)removeLastDigitAndRememberPosition;
-(id)removeLastDigit;
-(id)inputStringAndRememberPosition:(id)arg1 ;
-(id)inputString:(id)arg1 ;
-(id)inputDigit:(id)arg1 ;
-(id)inputDigitAndRememberPosition:(id)arg1 ;
-(id)inputDigitWithOptionToRememberPosition_:(id)arg1 rememberPosition:(BOOL)arg2 ;
-(id)attemptToChoosePatternWithPrefixExtracted_;
-(BOOL)ableToExtractLongerNdd_;
-(BOOL)isDigitOrLeadingPlusSign_:(id)arg1 ;
-(id)attemptToFormatAccruedDigits_;
-(id)appendNationalNumber_:(id)arg1 ;
-(long long)getRememberedPosition;
-(id)attemptToChooseFormattingPattern_;
-(id)inputAccruedNationalNumber_;
-(BOOL)isNanpaNumberWithNationalPrefix_;
-(id)removeNationalPrefixFromNationalNumber_;
-(BOOL)attemptToExtractIdd_;
-(BOOL)attemptToExtractCountryCallingCode_;
-(id)normalizeAndAccrueDigitsAndPlusSign_:(id)arg1 rememberPosition:(BOOL)arg2 ;
-(id)inputDigitHelper_:(id)arg1 ;
-(BOOL)isSuccessfulFormatting;
-(NSString *)DIGIT_PLACEHOLDER_;
-(void)setDIGIT_PLACEHOLDER_:(NSString *)arg1 ;
-(NSString *)SEPARATOR_BEFORE_NATIONAL_NUMBER_;
-(void)setSEPARATOR_BEFORE_NATIONAL_NUMBER_:(NSString *)arg1 ;
-(NSString *)currentOutput_;
-(void)setCurrentOutput_:(NSString *)arg1 ;
-(NSString *)currentFormattingPattern_;
-(void)setCurrentFormattingPattern_:(NSString *)arg1 ;
-(NSString *)defaultCountry_;
-(void)setDefaultCountry_:(NSString *)arg1 ;
-(NSString *)nationalPrefixExtracted_;
-(void)setNationalPrefixExtracted_:(NSString *)arg1 ;
-(NSMutableString *)formattingTemplate_;
-(void)setFormattingTemplate_:(NSMutableString *)arg1 ;
-(NSMutableString *)accruedInput_;
-(void)setAccruedInput_:(NSMutableString *)arg1 ;
-(NSMutableString *)prefixBeforeNationalNumber_;
-(void)setPrefixBeforeNationalNumber_:(NSMutableString *)arg1 ;
-(NSMutableString *)accruedInputWithoutFormatting_;
-(void)setAccruedInputWithoutFormatting_:(NSMutableString *)arg1 ;
-(NSMutableString *)nationalNumber_;
-(void)setNationalNumber_:(NSMutableString *)arg1 ;
-(NSRegularExpression *)DIGIT_PATTERN_;
-(void)setDIGIT_PATTERN_:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)NATIONAL_PREFIX_SEPARATORS_PATTERN_;
-(void)setNATIONAL_PREFIX_SEPARATORS_PATTERN_:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)CHARACTER_CLASS_PATTERN_;
-(void)setCHARACTER_CLASS_PATTERN_:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)STANDALONE_DIGIT_PATTERN_;
-(void)setSTANDALONE_DIGIT_PATTERN_:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)ELIGIBLE_FORMAT_PATTERN_;
-(void)setELIGIBLE_FORMAT_PATTERN_:(NSRegularExpression *)arg1 ;
-(BOOL)ableToFormat_;
-(void)setAbleToFormat_:(BOOL)arg1 ;
-(BOOL)inputHasFormatting_;
-(void)setInputHasFormatting_:(BOOL)arg1 ;
-(BOOL)isCompleteNumber_;
-(void)setIsCompleteNumber_:(BOOL)arg1 ;
-(BOOL)isExpectingCountryCallingCode_;
-(void)setIsExpectingCountryCallingCode_:(BOOL)arg1 ;
-(BOOL)shouldAddSpaceAfterNationalPrefix_;
-(void)setShouldAddSpaceAfterNationalPrefix_:(BOOL)arg1 ;
-(NBPhoneNumberUtil *)phoneUtil_;
-(void)setPhoneUtil_:(NBPhoneNumberUtil *)arg1 ;
-(unsigned long long)lastMatchPosition_;
-(void)setLastMatchPosition_:(unsigned long long)arg1 ;
-(unsigned long long)originalPosition_;
-(void)setOriginalPosition_:(unsigned long long)arg1 ;
-(unsigned long long)positionToRemember_;
-(void)setPositionToRemember_:(unsigned long long)arg1 ;
-(unsigned long long)MIN_LEADING_DIGITS_LENGTH_;
-(void)setMIN_LEADING_DIGITS_LENGTH_:(unsigned long long)arg1 ;
-(NSMutableArray *)possibleFormats_;
-(void)setPossibleFormats_:(NSMutableArray *)arg1 ;
-(NBPhoneMetaData *)currentMetaData_;
-(void)setCurrentMetaData_:(NBPhoneMetaData *)arg1 ;
-(NBPhoneMetaData *)defaultMetaData_;
-(void)setDefaultMetaData_:(NBPhoneMetaData *)arg1 ;
-(NBPhoneMetaData *)EMPTY_METADATA_;
-(void)setEMPTY_METADATA_:(NBPhoneMetaData *)arg1 ;
@end

