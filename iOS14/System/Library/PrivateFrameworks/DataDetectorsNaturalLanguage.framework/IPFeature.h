/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@class NSString;

@interface IPFeature : NSObject {

	double _confidence;
	double _weight;
	NSString* _textUnit;
	NSRange _matchRange;

}

@property (assign) double confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (assign) double weight;                   //@synthesize weight=_weight - In the implementation block
@property (assign) NSRange matchRange;              //@synthesize matchRange=_matchRange - In the implementation block
@property (copy) NSString * textUnit;               //@synthesize textUnit=_textUnit - In the implementation block
-(double)confidence;
-(void)setWeight:(double)arg1 ;
-(double)weight;
-(id)description;
-(void)setConfidence:(double)arg1 ;
-(NSRange)matchRange;
-(id)matchString;
-(BOOL)isMatchStringInsideQuotationMarks;
-(void)setMatchRange:(NSRange)arg1 ;
-(void)setTextUnit:(NSString *)arg1 ;
-(NSString *)textUnit;
@end

