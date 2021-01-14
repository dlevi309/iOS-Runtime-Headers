/*
* Generated on Thursday, January 14, 2021 at 2:25:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSArray, NSSet, NSDate, NSDictionary, PGMoodGenerationContext;

@interface PGMoodGeneratorOptions : NSObject {

	unsigned long long _memoryCategory;
	unsigned long long _memorySubcategory;
	NSArray* _moodHistory;
	NSSet* _momentIDs;
	NSDate* _referenceDate;
	NSArray* _prefetchedAssets;
	NSDictionary* _sceneIdentifiersByMomentNodeIdentifier;
	PGMoodGenerationContext* _moodGenerationContext;

}

@property (retain) NSArray * prefetchedAssets;                                             //@synthesize prefetchedAssets=_prefetchedAssets - In the implementation block
@property (retain) NSDictionary * sceneIdentifiersByMomentNodeIdentifier;                  //@synthesize sceneIdentifiersByMomentNodeIdentifier=_sceneIdentifiersByMomentNodeIdentifier - In the implementation block
@property (retain) NSSet * momentIDs;                                                      //@synthesize momentIDs=_momentIDs - In the implementation block
@property (retain) NSDate * referenceDate;                                                 //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,retain) PGMoodGenerationContext * moodGenerationContext;              //@synthesize moodGenerationContext=_moodGenerationContext - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;                            //@synthesize memoryCategory=_memoryCategory - In the implementation block
@property (assign,nonatomic) unsigned long long memorySubcategory;                         //@synthesize memorySubcategory=_memorySubcategory - In the implementation block
@property (nonatomic,retain) NSArray * moodHistory;                                        //@synthesize moodHistory=_moodHistory - In the implementation block
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDate *)referenceDate;
-(unsigned long long)memoryCategory;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(unsigned long long)memorySubcategory;
-(void)setMemorySubcategory:(unsigned long long)arg1 ;
-(NSArray *)moodHistory;
-(void)setMoodHistory:(NSArray *)arg1 ;
-(NSSet *)momentIDs;
-(void)setMomentIDs:(NSSet *)arg1 ;
-(NSArray *)prefetchedAssets;
-(void)setPrefetchedAssets:(NSArray *)arg1 ;
-(NSDictionary *)sceneIdentifiersByMomentNodeIdentifier;
-(void)setSceneIdentifiersByMomentNodeIdentifier:(NSDictionary *)arg1 ;
-(PGMoodGenerationContext *)moodGenerationContext;
-(void)setMoodGenerationContext:(PGMoodGenerationContext *)arg1 ;
@end

