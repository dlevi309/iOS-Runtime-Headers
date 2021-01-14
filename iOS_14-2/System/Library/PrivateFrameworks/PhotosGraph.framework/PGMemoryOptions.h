/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSDate, CLLocation, NSArray, NSSet, NSDictionary;

@interface PGMemoryOptions : NSObject {

	unsigned long long _reason;
	NSDate* _universalDate;
	CLLocation* _location;
	NSArray* _peopleNames;
	NSArray* _existingMemories;
	NSArray* _blacklistedMemories;
	NSSet* _blacklistedFeatures;
	NSArray* _existingSuggestions;
	NSDate* _lastMemoryCreationUniversalDate;
	NSDate* _baseMemoryCreationUniversalDate;
	NSDictionary* _extraParameters;
	unsigned long long _randomSeed;
	double _forcedBeta;

}

@property (assign) unsigned long long reason;                                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSDate * universalDate;                                //@synthesize universalDate=_universalDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSArray * peopleNames;                                 //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,retain) NSArray * existingMemories;                            //@synthesize existingMemories=_existingMemories - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedMemories;                         //@synthesize blacklistedMemories=_blacklistedMemories - In the implementation block
@property (nonatomic,retain) NSSet * blacklistedFeatures;                           //@synthesize blacklistedFeatures=_blacklistedFeatures - In the implementation block
@property (nonatomic,retain) NSArray * existingSuggestions;                         //@synthesize existingSuggestions=_existingSuggestions - In the implementation block
@property (nonatomic,retain) NSDate * lastMemoryCreationUniversalDate;              //@synthesize lastMemoryCreationUniversalDate=_lastMemoryCreationUniversalDate - In the implementation block
@property (nonatomic,retain) NSDate * baseMemoryCreationUniversalDate;              //@synthesize baseMemoryCreationUniversalDate=_baseMemoryCreationUniversalDate - In the implementation block
@property (nonatomic,retain) NSDictionary * extraParameters;                        //@synthesize extraParameters=_extraParameters - In the implementation block
@property (assign,nonatomic) unsigned long long randomSeed;                         //@synthesize randomSeed=_randomSeed - In the implementation block
@property (assign,nonatomic) double forcedBeta;                                     //@synthesize forcedBeta=_forcedBeta - In the implementation block
+(id)stringForReason:(unsigned long long)arg1 ;
-(NSSet *)blacklistedFeatures;
-(CLLocation *)location;
-(void)setBlacklistedFeatures:(NSSet *)arg1 ;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSArray *)existingMemories;
-(void)setExistingMemories:(NSArray *)arg1 ;
-(NSArray *)blacklistedMemories;
-(void)setBlacklistedMemories:(NSArray *)arg1 ;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
-(NSArray *)peopleNames;
-(void)setLocation:(CLLocation *)arg1 ;
-(unsigned long long)randomSeed;
-(id)description;
-(void)setRandomSeed:(unsigned long long)arg1 ;
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(id)initWithReason:(unsigned long long)arg1 universalDate:(id)arg2 location:(id)arg3 peopleNames:(id)arg4 ;
-(void)setUniversalDate:(NSDate *)arg1 ;
-(NSDate *)universalDate;
-(NSArray *)existingSuggestions;
-(void)setExistingSuggestions:(NSArray *)arg1 ;
-(NSDate *)lastMemoryCreationUniversalDate;
-(void)setLastMemoryCreationUniversalDate:(NSDate *)arg1 ;
-(NSDate *)baseMemoryCreationUniversalDate;
-(void)setBaseMemoryCreationUniversalDate:(NSDate *)arg1 ;
-(double)forcedBeta;
-(void)setForcedBeta:(double)arg1 ;
@end

