/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSTextCheckingResult : NSObject <NSCopying, NSSecureCoding>

@property (readonly) unsigned long long resultType; 
@property (readonly) NSRange range; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)correctionCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3 ;
+(id)regularExpressionCheckingResultWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
+(id)dateCheckingResultWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
+(id)correctionCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)replacementCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)transitInformationCheckingResultWithRange:(NSRange)arg1 components:(id)arg2 ;
+(id)dashCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)orthographyCheckingResultWithRange:(NSRange)arg1 orthography:(id)arg2 ;
+(id)grammarCheckingResultWithRange:(NSRange)arg1 details:(id)arg2 ;
+(id)addressCheckingResultWithRange:(NSRange)arg1 components:(id)arg2 ;
+(id)quoteCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)phoneNumberCheckingResultWithRange:(NSRange)arg1 phoneNumber:(id)arg2 ;
+(id)linkCheckingResultWithRange:(NSRange)arg1 URL:(id)arg2 ;
+(id)dateCheckingResultWithRange:(NSRange)arg1 date:(id)arg2 ;
+(id)spellCheckingResultWithRange:(NSRange)arg1 ;
-(id)timeZone;
-(NSRange)range;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(id)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)regularExpression;
-(unsigned long long)resultType;
-(id)orthography;
-(id)leadingText;
-(BOOL)timeIsPast;
-(id)trailingText;
-(id)components;
-(id)description;
-(id)addressComponents;
-(id)replacementString;
-(void*)underlyingResult;
-(BOOL)timeIsSignificant;
-(BOOL)timeIsApproximate;
-(id)grammarDetails;
-(id)referenceDate;
-(void)encodeRangeWithCoder:(id)arg1 ;
-(NSRange)decodeRangeWithCoder:(id)arg1 ;
-(id)URL;
-(id)alternativeStrings;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(NSRange)rangeWithName:(id)arg1 ;
-(id)date;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(double)duration;
-(unsigned long long)numberOfRanges;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

