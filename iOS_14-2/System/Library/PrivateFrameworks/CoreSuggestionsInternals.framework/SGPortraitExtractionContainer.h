/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGExternalEnrichment.h>

@class NSMutableArray, NSMutableDictionary, PPSource;

@interface SGPortraitExtractionContainer : NSObject <SGExternalEnrichment> {

	BOOL _cloudSync;
	NSMutableArray* _entities;
	NSMutableArray* _topics;
	NSMutableArray* _topicsExactMatchesInSourceText;
	NSMutableDictionary* _locations;
	PPSource* _source;
	unsigned long long _entityAlgorithm;
	unsigned long long _topicAlgorithm;
	double _decayRate;
	double _sentimentScore;

}

@property (nonatomic,retain) NSMutableArray * entities;                                    //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSMutableArray * topics;                                      //@synthesize topics=_topics - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicsExactMatchesInSourceText;              //@synthesize topicsExactMatchesInSourceText=_topicsExactMatchesInSourceText - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locations;                              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) PPSource * source;                                            //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long entityAlgorithm;                           //@synthesize entityAlgorithm=_entityAlgorithm - In the implementation block
@property (assign,nonatomic) unsigned long long topicAlgorithm;                            //@synthesize topicAlgorithm=_topicAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL cloudSync;                                               //@synthesize cloudSync=_cloudSync - In the implementation block
@property (assign,nonatomic) double decayRate;                                             //@synthesize decayRate=_decayRate - In the implementation block
@property (assign,nonatomic) double sentimentScore;                                        //@synthesize sentimentScore=_sentimentScore - In the implementation block
-(NSMutableDictionary *)locations;
-(double)decayRate;
-(NSMutableArray *)entities;
-(void)setDecayRate:(double)arg1 ;
-(void)setLocations:(NSMutableDictionary *)arg1 ;
-(unsigned long long)entityAlgorithm;
-(double)sentimentScore;
-(void)addLocation:(id)arg1 algorithm:(unsigned short)arg2 ;
-(void)setSource:(PPSource *)arg1 ;
-(NSMutableArray *)topics;
-(void)setTopics:(NSMutableArray *)arg1 ;
-(void)writeWithEntityStore:(id)arg1 ;
-(void)flushWrites;
-(void)writeSynchronous;
-(NSMutableArray *)topicsExactMatchesInSourceText;
-(unsigned long long)topicAlgorithm;
-(void)setSentimentScore:(double)arg1 ;
-(BOOL)cloudSync;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(void)setEntityAlgorithm:(unsigned long long)arg1 ;
-(void)setTopicAlgorithm:(unsigned long long)arg1 ;
-(void)setCloudSync:(BOOL)arg1 ;
-(void)setTopicsExactMatchesInSourceText:(NSMutableArray *)arg1 ;
-(unsigned long long)_donateLocationsWithContextualNamedEntities:(id)arg1 ;
-(PPSource *)source;
@end

