/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet, NSString;

@interface PPTopicQuery : NSObject <NSCopying, NSSecureCoding> {

	BOOL _scoreWithBiases;
	BOOL _scoreWithStrictFiltering;
	BOOL _excludeWithoutSentiment;
	BOOL _scoreWithCalibration;
	BOOL _orderByIdentifier;
	unsigned long long _limit;
	NSDate* _fromDate;
	NSDate* _toDate;
	NSDate* _scoringDate;
	NSSet* _matchingSourceBundleIds;
	NSSet* _excludingSourceBundleIds;
	unsigned long long _deviceFilter;
	double _decayRate;
	NSSet* _matchingTopicIds;
	unsigned long long _minimumComponentCount;
	NSSet* _matchingAlgorithms;
	NSSet* _excludingAlgorithms;
	NSString* _matchingTopicTrie;

}

@property (assign,nonatomic) BOOL scoreWithCalibration;                             //@synthesize scoreWithCalibration=_scoreWithCalibration - In the implementation block
@property (assign,nonatomic) unsigned long long minimumComponentCount;              //@synthesize minimumComponentCount=_minimumComponentCount - In the implementation block
@property (nonatomic,retain) NSSet * matchingAlgorithms;                            //@synthesize matchingAlgorithms=_matchingAlgorithms - In the implementation block
@property (nonatomic,retain) NSSet * excludingAlgorithms;                           //@synthesize excludingAlgorithms=_excludingAlgorithms - In the implementation block
@property (nonatomic,retain) NSString * matchingTopicTrie;                          //@synthesize matchingTopicTrie=_matchingTopicTrie - In the implementation block
@property (assign,nonatomic) BOOL orderByIdentifier;                                //@synthesize orderByIdentifier=_orderByIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) NSDate * fromDate;                                     //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                                       //@synthesize toDate=_toDate - In the implementation block
@property (nonatomic,retain) NSDate * scoringDate;                                  //@synthesize scoringDate=_scoringDate - In the implementation block
@property (nonatomic,retain) NSSet * matchingSourceBundleIds;                       //@synthesize matchingSourceBundleIds=_matchingSourceBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * excludingSourceBundleIds;                      //@synthesize excludingSourceBundleIds=_excludingSourceBundleIds - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFilter;                       //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (assign,nonatomic) BOOL overrideDecayRate; 
@property (assign,nonatomic) double decayRate;                                      //@synthesize decayRate=_decayRate - In the implementation block
@property (assign,nonatomic) BOOL scoreWithBiases;                                  //@synthesize scoreWithBiases=_scoreWithBiases - In the implementation block
@property (nonatomic,retain) NSSet * matchingTopicIds;                              //@synthesize matchingTopicIds=_matchingTopicIds - In the implementation block
@property (assign,nonatomic) BOOL scoreWithStrictFiltering;                         //@synthesize scoreWithStrictFiltering=_scoreWithStrictFiltering - In the implementation block
@property (assign,nonatomic) BOOL excludeWithoutSentiment;                          //@synthesize excludeWithoutSentiment=_excludeWithoutSentiment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_algorithmsDescription:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
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
-(NSSet *)matchingAlgorithms;
-(void)setMatchingAlgorithms:(NSSet *)arg1 ;
-(NSSet *)excludingAlgorithms;
-(void)setExcludingAlgorithms:(NSSet *)arg1 ;
-(BOOL)overrideDecayRate;
-(void)setOverrideDecayRate:(BOOL)arg1 ;
-(BOOL)isEqualToTopicQuery:(id)arg1 ;
-(BOOL)scoreWithBiases;
-(void)setScoreWithBiases:(BOOL)arg1 ;
-(NSSet *)matchingTopicIds;
-(void)setMatchingTopicIds:(NSSet *)arg1 ;
-(BOOL)scoreWithStrictFiltering;
-(void)setScoreWithStrictFiltering:(BOOL)arg1 ;
-(BOOL)excludeWithoutSentiment;
-(void)setExcludeWithoutSentiment:(BOOL)arg1 ;
-(BOOL)scoreWithCalibration;
-(void)setScoreWithCalibration:(BOOL)arg1 ;
-(unsigned long long)minimumComponentCount;
-(void)setMinimumComponentCount:(unsigned long long)arg1 ;
-(NSString *)matchingTopicTrie;
-(void)setMatchingTopicTrie:(NSString *)arg1 ;
-(BOOL)orderByIdentifier;
-(void)setOrderByIdentifier:(BOOL)arg1 ;
@end

