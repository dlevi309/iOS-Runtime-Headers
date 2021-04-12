/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet, NSString;

@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding> {

	BOOL _matchCategory;
	BOOL _excludeWithoutSentiment;
	BOOL _orderByName;
	unsigned long long _limit;
	NSDate* _fromDate;
	NSDate* _toDate;
	NSDate* _scoringDate;
	NSSet* _matchingSourceBundleIds;
	NSSet* _excludingSourceBundleIds;
	unsigned long long _deviceFilter;
	double _decayRate;
	NSString* _matchingName;
	NSSet* _matchingCategories;
	NSSet* _excludingAlgorithms;
	NSString* _matchingEntityTrie;
	unsigned long long _locationConsumer;

}

@property (nonatomic,retain) NSString * matchingEntityTrie;                    //@synthesize matchingEntityTrie=_matchingEntityTrie - In the implementation block
@property (assign,nonatomic) unsigned long long locationConsumer;              //@synthesize locationConsumer=_locationConsumer - In the implementation block
@property (assign,nonatomic) BOOL orderByName;                                 //@synthesize orderByName=_orderByName - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) NSDate * fromDate;                                //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                                  //@synthesize toDate=_toDate - In the implementation block
@property (nonatomic,retain) NSDate * scoringDate;                             //@synthesize scoringDate=_scoringDate - In the implementation block
@property (nonatomic,retain) NSSet * matchingSourceBundleIds;                  //@synthesize matchingSourceBundleIds=_matchingSourceBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * excludingSourceBundleIds;                 //@synthesize excludingSourceBundleIds=_excludingSourceBundleIds - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFilter;                  //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (assign,nonatomic) BOOL overrideDecayRate; 
@property (assign,nonatomic) double decayRate;                                 //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,copy) NSString * matchingName;                            //@synthesize matchingName=_matchingName - In the implementation block
@property (assign,nonatomic) BOOL matchCategory;                               //@synthesize matchCategory=_matchCategory - In the implementation block
@property (nonatomic,retain) NSSet * matchingCategories;                       //@synthesize matchingCategories=_matchingCategories - In the implementation block
@property (nonatomic,retain) NSSet * excludingAlgorithms;                      //@synthesize excludingAlgorithms=_excludingAlgorithms - In the implementation block
@property (assign,nonatomic) BOOL excludeWithoutSentiment;                     //@synthesize excludeWithoutSentiment=_excludeWithoutSentiment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_matchingCategoriesDescription:(id)arg1 ;
+(id)_excludingAlgorithmsDescription:(id)arg1 ;
+(id)locationQueryWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(double)decayRate;
-(void)setDeviceFilter:(unsigned long long)arg1 ;
-(unsigned long long)deviceFilter;
-(NSDate *)toDate;
-(void)setDecayRate:(double)arg1 ;
-(id)customizedDescription;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(NSDate *)scoringDate;
-(void)setScoringDate:(NSDate *)arg1 ;
-(NSSet *)matchingSourceBundleIds;
-(void)setMatchingSourceBundleIds:(NSSet *)arg1 ;
-(NSSet *)excludingSourceBundleIds;
-(void)setExcludingSourceBundleIds:(NSSet *)arg1 ;
-(NSSet *)matchingCategories;
-(void)setMatchingCategories:(NSSet *)arg1 ;
-(NSSet *)excludingAlgorithms;
-(void)setExcludingAlgorithms:(NSSet *)arg1 ;
-(BOOL)overrideDecayRate;
-(void)setOverrideDecayRate:(BOOL)arg1 ;
-(BOOL)excludeWithoutSentiment;
-(void)setExcludeWithoutSentiment:(BOOL)arg1 ;
-(NSString *)matchingName;
-(void)setMatchingName:(NSString *)arg1 ;
-(BOOL)isEqualToNamedEntityQuery:(id)arg1 ;
-(BOOL)matchCategory;
-(void)setMatchCategory:(BOOL)arg1 ;
-(NSString *)matchingEntityTrie;
-(void)setMatchingEntityTrie:(NSString *)arg1 ;
-(unsigned long long)locationConsumer;
-(void)setLocationConsumer:(unsigned long long)arg1 ;
-(BOOL)orderByName;
-(void)setOrderByName:(BOOL)arg1 ;
@end

