/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet, NSString;

@interface PPLocationQuery : NSObject <NSCopying, NSSecureCoding> {

	BOOL _excludingWithoutSentiment;
	unsigned long long _limit;
	NSDate* _fromDate;
	NSDate* _toDate;
	NSDate* _scoringDate;
	NSSet* _matchingSourceBundleIds;
	NSSet* _excludingSourceBundleIds;
	unsigned long long _deviceFilter;
	double _perRecordDecayRate;
	double _decayRate;
	NSString* _fuzzyMatchingString;
	NSSet* _fuzzyMatchingFields;
	NSSet* _matchingCategories;
	NSSet* _matchingAlgorithms;
	NSSet* _excludingAlgorithms;
	NSString* _matchingContactHandle;
	unsigned long long _consumer;

}

@property (assign,nonatomic) unsigned long long consumer;                   //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                      //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) NSDate * fromDate;                             //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                               //@synthesize toDate=_toDate - In the implementation block
@property (nonatomic,retain) NSDate * scoringDate;                          //@synthesize scoringDate=_scoringDate - In the implementation block
@property (nonatomic,retain) NSSet * matchingSourceBundleIds;               //@synthesize matchingSourceBundleIds=_matchingSourceBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * excludingSourceBundleIds;              //@synthesize excludingSourceBundleIds=_excludingSourceBundleIds - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFilter;               //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (assign,nonatomic) double perRecordDecayRate;                     //@synthesize perRecordDecayRate=_perRecordDecayRate - In the implementation block
@property (assign,nonatomic) double decayRate;                              //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,retain) NSString * fuzzyMatchingString;                //@synthesize fuzzyMatchingString=_fuzzyMatchingString - In the implementation block
@property (nonatomic,retain) NSSet * fuzzyMatchingFields;                   //@synthesize fuzzyMatchingFields=_fuzzyMatchingFields - In the implementation block
@property (nonatomic,retain) NSSet * matchingCategories;                    //@synthesize matchingCategories=_matchingCategories - In the implementation block
@property (nonatomic,retain) NSSet * matchingAlgorithms;                    //@synthesize matchingAlgorithms=_matchingAlgorithms - In the implementation block
@property (nonatomic,retain) NSSet * excludingAlgorithms;                   //@synthesize excludingAlgorithms=_excludingAlgorithms - In the implementation block
@property (assign,nonatomic) BOOL excludingWithoutSentiment;                //@synthesize excludingWithoutSentiment=_excludingWithoutSentiment - In the implementation block
@property (nonatomic,retain) NSString * matchingContactHandle;              //@synthesize matchingContactHandle=_matchingContactHandle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_algorithmsDescription:(id)arg1 ;
+(id)queryForMapsWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3 ;
+(id)_matchingCategoriesDescription:(id)arg1 ;
-(NSDate *)toDate;
-(NSDate *)scoringDate;
-(void)setLimit:(unsigned long long)arg1 ;
-(double)decayRate;
-(void)setDecayRate:(double)arg1 ;
-(void)setPerRecordDecayRate:(double)arg1 ;
-(unsigned long long)limit;
-(BOOL)isEqualToLocationQuery:(id)arg1 ;
-(BOOL)excludingWithoutSentiment;
-(id)init;
-(NSSet *)excludingSourceBundleIds;
-(void)setScoringDate:(NSDate *)arg1 ;
-(void)setMatchingContactHandle:(NSString *)arg1 ;
-(void)setExcludingAlgorithms:(NSSet *)arg1 ;
-(NSString *)fuzzyMatchingString;
-(void)setExcludingSourceBundleIds:(NSSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMatchingCategories:(NSSet *)arg1 ;
-(NSSet *)matchingCategories;
-(id)description;
-(void)setDeviceFilter:(unsigned long long)arg1 ;
-(void)setMatchingAlgorithms:(NSSet *)arg1 ;
-(id)customizedDescription;
-(void)setMatchingSourceBundleIds:(NSSet *)arg1 ;
-(void)setFuzzyMatchingFields:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSSet *)matchingSourceBundleIds;
-(void)setExcludingWithoutSentiment:(BOOL)arg1 ;
-(unsigned long long)consumer;
-(NSString *)matchingContactHandle;
-(NSSet *)excludingAlgorithms;
-(void)setFuzzyMatchingString:(NSString *)arg1 ;
-(void)setConsumer:(unsigned long long)arg1 ;
-(NSSet *)fuzzyMatchingFields;
-(NSSet *)matchingAlgorithms;
-(NSDate *)fromDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)perRecordDecayRate;
-(unsigned long long)deviceFilter;
-(BOOL)isEqual:(id)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
@end

