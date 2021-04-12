/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString, NSSet, PGIncompleteLocationResolver, NSArray;

@interface PGLocationTripTitleUtility : NSObject {

	BOOL _filterMomentsAndCities;
	BOOL _allowLongAOI;
	NSString* _title;
	NSSet* _usedLocationNodes;
	NSSet* _momentNodes;
	PGIncompleteLocationResolver* _incompleteLocationResolver;
	NSArray* _usedTitleComponents;
	unsigned long long _tripTitleType;

}

@property (nonatomic,retain) NSSet * momentNodes;                                                    //@synthesize momentNodes=_momentNodes - In the implementation block
@property (assign,nonatomic) BOOL filterMomentsAndCities;                                            //@synthesize filterMomentsAndCities=_filterMomentsAndCities - In the implementation block
@property (assign,nonatomic) BOOL allowLongAOI;                                                      //@synthesize allowLongAOI=_allowLongAOI - In the implementation block
@property (nonatomic,retain) PGIncompleteLocationResolver * incompleteLocationResolver;              //@synthesize incompleteLocationResolver=_incompleteLocationResolver - In the implementation block
@property (nonatomic,retain) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSSet * usedLocationNodes;                                              //@synthesize usedLocationNodes=_usedLocationNodes - In the implementation block
@property (nonatomic,retain) NSArray * usedTitleComponents;                                          //@synthesize usedTitleComponents=_usedTitleComponents - In the implementation block
@property (nonatomic,readonly) unsigned long long tripTitleType;                                     //@synthesize tripTitleType=_tripTitleType - In the implementation block
+(id)_locationTitleWithLocationNode:(id)arg1 addressNode:(id)arg2 countryNode:(id)arg3 allowSecondPart:(BOOL)arg4 ;
+(void)_aoiTitleWithLocationNodes:(id)arg1 momentNodes:(id)arg2 allowLongAOI:(BOOL)arg3 result:(/*^block*/id)arg4 ;
+(id)_filteredCityNodesByNameForCityNodes:(id)arg1 ;
+(BOOL)_visitedLocationNodeMoreThanOnce:(id)arg1 withReferenceMomentNodes:(id)arg2 ;
+(void)_cityStateAndCountryNodesForLocationNodes:(id)arg1 result:(/*^block*/id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSSet *)momentNodes;
-(NSSet *)usedLocationNodes;
-(void)setUsedLocationNodes:(NSSet *)arg1 ;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(PGIncompleteLocationResolver *)incompleteLocationResolver;
-(void)setIncompleteLocationResolver:(PGIncompleteLocationResolver *)arg1 ;
-(id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(BOOL)arg2 ;
-(id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(BOOL)arg2 allowLongAOI:(BOOL)arg3 ;
-(void)_generateLocationTitle;
-(void)_generateTitleForMoments:(id)arg1 resolvedMoments:(id)arg2 resolvedLocations:(id)arg3 ;
-(void)_resolveMomentNodes:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)_cityNodesFromMomentNodes:(id)arg1 ;
-(void)_cityTitleWithCityNode:(id)arg1 countryNode:(id)arg2 visitedCountryOnlyOnce:(BOOL)arg3 momentNodes:(id)arg4 result:(/*^block*/id)arg5 ;
-(id)_bestAddressNodeForCityNodes:(id)arg1 inMomentNodes:(id)arg2 ;
-(BOOL)filterMomentsAndCities;
-(void)setFilterMomentsAndCities:(BOOL)arg1 ;
-(BOOL)allowLongAOI;
-(void)setAllowLongAOI:(BOOL)arg1 ;
-(NSArray *)usedTitleComponents;
-(void)setUsedTitleComponents:(NSArray *)arg1 ;
-(unsigned long long)tripTitleType;
@end

