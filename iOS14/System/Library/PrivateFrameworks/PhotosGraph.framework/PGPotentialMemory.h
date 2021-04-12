/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PHAssetCollection, PGGraphMomentNode, NSSet, NSDate, CLLocation, NSString, NSDictionary, PGMemoryGenerator;

@interface PGPotentialMemory : NSObject {

	PHAssetCollection* _assetCollection;
	PGGraphMomentNode* _momentNode;
	NSSet* _momentNodes;
	long long _sourceType;
	unsigned long long _category;
	unsigned long long _subcategory;
	double _score;
	NSDate* _localDate;
	CLLocation* _location;
	NSSet* _peopleUUIDs;
	NSString* _eventName;
	double _contentScore;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSSet* _features;
	NSSet* _momentIDs;
	NSDictionary* _numberOfAssetsByMomentIDs;
	PGPotentialMemory* _upgradedPotentialMemory;
	PGMemoryGenerator* _upgradedMemoryGenerator;

}

@property (retain) PHAssetCollection * assetCollection;                                //@synthesize assetCollection=_assetCollection - In the implementation block
@property (retain) PGGraphMomentNode * momentNode;                                     //@synthesize momentNode=_momentNode - In the implementation block
@property (retain) NSSet * momentNodes;                                                //@synthesize momentNodes=_momentNodes - In the implementation block
@property (assign) long long sourceType;                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (assign) unsigned long long category;                                        //@synthesize category=_category - In the implementation block
@property (assign) unsigned long long subcategory;                                     //@synthesize subcategory=_subcategory - In the implementation block
@property (assign) double score;                                                       //@synthesize score=_score - In the implementation block
@property (retain) NSDate * localDate;                                                 //@synthesize localDate=_localDate - In the implementation block
@property (retain) CLLocation * location;                                              //@synthesize location=_location - In the implementation block
@property (retain) NSSet * peopleUUIDs;                                                //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
@property (retain) NSString * eventName;                                               //@synthesize eventName=_eventName - In the implementation block
@property (assign) double contentScore;                                                //@synthesize contentScore=_contentScore - In the implementation block
@property (retain) NSSet * features;                                                   //@synthesize features=_features - In the implementation block
@property (readonly) NSDate * localStartDate;                                          //@synthesize localStartDate=_localStartDate - In the implementation block
@property (readonly) NSDate * localEndDate;                                            //@synthesize localEndDate=_localEndDate - In the implementation block
@property (readonly) NSDate * universalStartDate;                                      //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (readonly) NSDate * universalEndDate;                                        //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (readonly) NSSet * momentIDs;                                                //@synthesize momentIDs=_momentIDs - In the implementation block
@property (readonly) NSDictionary * numberOfAssetsByMomentIDs;                         //@synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs - In the implementation block
@property (nonatomic,retain) PGPotentialMemory * upgradedPotentialMemory;              //@synthesize upgradedPotentialMemory=_upgradedPotentialMemory - In the implementation block
@property (nonatomic,retain) PGMemoryGenerator * upgradedMemoryGenerator;              //@synthesize upgradedMemoryGenerator=_upgradedMemoryGenerator - In the implementation block
-(double)contentScore;
-(NSDate *)universalEndDate;
-(long long)sourceType;
-(NSDate *)localStartDate;
-(PGGraphMomentNode *)momentNode;
-(NSDate *)localEndDate;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSSet *)features;
-(NSSet *)peopleUUIDs;
-(NSDate *)universalStartDate;
-(double)score;
-(CLLocation *)location;
-(NSDate *)localDate;
-(NSString *)eventName;
-(void)setScore:(double)arg1 ;
-(unsigned long long)category;
-(void)setSourceType:(long long)arg1 ;
-(void)setContentScore:(double)arg1 ;
-(unsigned long long)subcategory;
-(void)setFeatures:(NSSet *)arg1 ;
-(void)setSubcategory:(unsigned long long)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setEventName:(NSString *)arg1 ;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(PHAssetCollection *)assetCollection;
-(NSSet *)momentNodes;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(void)setLocalDate:(NSDate *)arg1 ;
-(NSSet *)momentIDs;
-(NSDictionary *)numberOfAssetsByMomentIDs;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4 ;
-(void)setPeopleUUIDs:(NSSet *)arg1 ;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 ;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNode:(id)arg3 ;
-(void)_prepareForOverlapCheck;
-(void)_resetOverlapCheck;
-(double)computeContentScoreUsingMemoryController:(id)arg1 ;
-(id)buildAssetCollectionUsingMemoryController:(id)arg1 withMinimumNumberOfAssets:(unsigned long long)arg2 ;
-(PGPotentialMemory *)upgradedPotentialMemory;
-(void)setUpgradedPotentialMemory:(PGPotentialMemory *)arg1 ;
-(PGMemoryGenerator *)upgradedMemoryGenerator;
-(void)setUpgradedMemoryGenerator:(PGMemoryGenerator *)arg1 ;
@end

