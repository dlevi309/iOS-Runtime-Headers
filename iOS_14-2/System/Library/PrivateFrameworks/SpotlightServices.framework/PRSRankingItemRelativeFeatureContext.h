/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSPredicate;

@interface PRSRankingItemRelativeFeatureContext : NSObject {

	unsigned short _relRankFeature;
	unsigned short _absRankFeature;
	NSPredicate* _predicate;
	/*^block*/id _comparator;

}

@property (assign,nonatomic) unsigned short relRankFeature;              //@synthesize relRankFeature=_relRankFeature - In the implementation block
@property (assign,nonatomic) unsigned short absRankFeature;              //@synthesize absRankFeature=_absRankFeature - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) id comparator;                                //@synthesize comparator=_comparator - In the implementation block
+(id)_relativeContextsForFeatures:(id)arg1 currentTime:(double)arg2 ;
+(void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short*)arg2 relRankFeatureOut:(unsigned short*)arg3 ;
+(id)_predicateForRelativeFeature:(unsigned long long)arg1 currentTime:(double)arg2 ;
+(/*^block*/id)_resultComparatorForRelativeFeature:(unsigned long long)arg1 ;
+(id)relativeContextsForBundle:(id)arg1 currentTime:(double)arg2 ;
+(id)relativeContextsForResultSetWithCurrentTime:(double)arg1 ;
-(NSPredicate *)predicate;
-(void)setComparator:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(id)comparator;
-(id)initWithFeature:(unsigned long long)arg1 currentTime:(double)arg2 ;
-(void)setAbsRankFeature:(unsigned short)arg1 ;
-(void)setRelRankFeature:(unsigned short)arg1 ;
-(unsigned short)relRankFeature;
-(unsigned short)absRankFeature;
@end

