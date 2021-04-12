/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSArray, NSSet, NSDate, NSDictionary;

@interface PGMoodGeneratorOptions : NSObject {

	unsigned long long _memoryCategory;
	unsigned long long _memorySubcategory;
	NSArray* _moodHistory;
	NSSet* _momentIDs;
	NSDate* _referenceDate;
	NSArray* _prefetchedAssets;
	NSDictionary* _sceneIdentifiersByMomentNodeIdentifier;

}

@property (retain) NSArray * prefetchedAssets;                                         //@synthesize prefetchedAssets=_prefetchedAssets - In the implementation block
@property (retain) NSDictionary * sceneIdentifiersByMomentNodeIdentifier;              //@synthesize sceneIdentifiersByMomentNodeIdentifier=_sceneIdentifiersByMomentNodeIdentifier - In the implementation block
@property (retain) NSSet * momentIDs;                                                  //@synthesize momentIDs=_momentIDs - In the implementation block
@property (retain) NSDate * referenceDate;                                             //@synthesize referenceDate=_referenceDate - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;                        //@synthesize memoryCategory=_memoryCategory - In the implementation block
@property (assign,nonatomic) unsigned long long memorySubcategory;                     //@synthesize memorySubcategory=_memorySubcategory - In the implementation block
@property (nonatomic,retain) NSArray * moodHistory;                                    //@synthesize moodHistory=_moodHistory - In the implementation block
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(void)setMomentIDs:(NSSet *)arg1 ;
-(NSSet *)momentIDs;
-(void)setMoodHistory:(NSArray *)arg1 ;
-(void)setMemorySubcategory:(unsigned long long)arg1 ;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(unsigned long long)memoryCategory;
-(unsigned long long)memorySubcategory;
-(NSArray *)moodHistory;
-(NSArray *)prefetchedAssets;
-(void)setPrefetchedAssets:(NSArray *)arg1 ;
-(NSDictionary *)sceneIdentifiersByMomentNodeIdentifier;
-(void)setSceneIdentifiersByMomentNodeIdentifier:(NSDictionary *)arg1 ;
@end

