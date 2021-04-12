/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class RTContactsManager, RTLearnedLocationAlgorithmMetricCalculator, RTDistanceCalculator, RTLearnedLocationStore, RTMapServiceManager, RTMapsSupportManager, RTPlatform, NSObject;

@interface RTPlaceTypeClassifier : NSObject {

	RTContactsManager* _contactsManager;
	RTLearnedLocationAlgorithmMetricCalculator* _algorithmMetricCalculator;
	RTDistanceCalculator* _distanceCalculator;
	RTLearnedLocationStore* _learnedLocationStore;
	RTMapServiceManager* _mapServiceManager;
	RTMapsSupportManager* _mapsSupportManager;
	RTPlatform* _platform;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RTContactsManager * contactsManager;                                                 //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationAlgorithmMetricCalculator * algorithmMetricCalculator;              //@synthesize algorithmMetricCalculator=_algorithmMetricCalculator - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;                                           //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;                                       //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                                             //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTMapsSupportManager * mapsSupportManager;                                           //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                               //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                  //@synthesize queue=_queue - In the implementation block
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(void)setContactsManager:(RTContactsManager *)arg1 ;
-(RTContactsManager *)contactsManager;
-(RTPlatform *)platform;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(RTLearnedLocationStore *)learnedLocationStore;
-(void)setMapsSupportManager:(RTMapsSupportManager *)arg1 ;
-(id)init;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(RTMapsSupportManager *)mapsSupportManager;
-(RTDistanceCalculator *)distanceCalculator;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RTLearnedLocationAlgorithmMetricCalculator *)algorithmMetricCalculator;
-(id)initWithAlgorithmMetricCalculator:(id)arg1 contactsManager:(id)arg2 distanceCalculator:(id)arg3 learnedLocationStore:(id)arg4 mapServiceManager:(id)arg5 mapsSupportManager:(id)arg6 platform:(id)arg7 queue:(id)arg8 ;
-(BOOL)classifyWithError:(id*)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
-(BOOL)isRottedMeCard:(id)arg1 inferredPlace:(id)arg2 ;
-(id)replaceBusinessMapItemWithReverseGeocodedMapItemForHome:(id)arg1 ;
-(void)donateInferredPlaces:(id)arg1 ;
-(id)coalescePlacesFromExperts:(id)arg1 ;
-(id)getExistingClassifiedPlacesWithError:(id*)arg1 ;
-(id)mergeExistingPlaces:(id)arg1 intoUpdatedPlace:(id)arg2 typesInMeCard:(id)arg3 ;
-(BOOL)updatePlaces:(id)arg1 error:(id*)arg2 ;
-(id)getExperts;
-(id)getClassificationsFromExperts:(id)arg1 error:(id*)arg2 ;
-(BOOL)processExpertClassifications:(id)arg1 error:(id*)arg2 ;
-(void)setAlgorithmMetricCalculator:(RTLearnedLocationAlgorithmMetricCalculator *)arg1 ;
@end

