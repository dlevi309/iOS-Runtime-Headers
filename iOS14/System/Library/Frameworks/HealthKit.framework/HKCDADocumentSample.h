/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKDocumentSample.h>

@class HKCDADocument;

@interface HKCDADocumentSample : HKDocumentSample {

	long long _omittedContentFlags;
	HKCDADocument* _document;

}

@property (readonly) HKCDADocument * document;              //@synthesize document=_document - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_globStringToRegexString:(id)arg1 ;
+(BOOL)_isValidOperatorType:(unsigned long long)arg1 ;
+(id)CDADocumentSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 validationError:(id*)arg5 ;
+(BOOL)_isValidCDAKeyPath:(id)arg1 ;
+(id)_comparisonExpressionForValue:(id)arg1 operatorType:(unsigned long long)arg2 ;
+(BOOL)_isConcreteObjectClass;
-(BOOL)prepareForDelivery:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_processDocumentData:(id)arg1 extractedFields:(id)arg2 ;
-(BOOL)_validateDocumentContentWithError:(id*)arg1 ;
-(id)_fieldValueForKeyPath:(id)arg1 ;
-(long long)_omittedContentFlags;
-(BOOL)_predicateMatchForKeyPath:(id)arg1 pattern:(id)arg2 ;
-(void)_applyPropertiesWithOmittedFlags:(long long)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(HKCDADocument *)document;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(BOOL)prepareForSaving:(id*)arg1 ;
@end

