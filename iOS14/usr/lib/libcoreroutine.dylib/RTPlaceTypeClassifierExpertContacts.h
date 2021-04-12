/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTPlaceTypeProvider.h>

@class RTContactsManager, RTDistanceCalculator, RTLearnedLocationStore, RTMapServiceManager, RTMapsSupportManager, NSString;

@interface RTPlaceTypeClassifierExpertContacts : NSObject <RTPlaceTypeProvider> {

	RTContactsManager* _contactsManager;
	RTDistanceCalculator* _distanceCalculator;
	RTLearnedLocationStore* _learnedLocationStore;
	RTMapServiceManager* _mapServiceManager;
	RTMapsSupportManager* _mapsSupportManager;

}

@property (nonatomic,retain) RTContactsManager * contactsManager;                        //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;                  //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;              //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                    //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTMapsSupportManager * mapsSupportManager;                  //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(void)setContactsManager:(RTContactsManager *)arg1 ;
-(RTContactsManager *)contactsManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(RTLearnedLocationStore *)learnedLocationStore;
-(void)setMapsSupportManager:(RTMapsSupportManager *)arg1 ;
-(id)init;
-(RTMapsSupportManager *)mapsSupportManager;
-(RTDistanceCalculator *)distanceCalculator;
-(id)classifyWithError:(id*)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
-(id)initWithContactsManager:(id)arg1 distanceCalculator:(id)arg2 learnedLocationStore:(id)arg3 mapServiceManager:(id)arg4 mapsSupportManager:(id)arg5 ;
-(id)_meCardContactWithError:(id*)arg1 ;
-(id)_postalAddressMapItemsOfContact:(id)arg1 error:(id*)arg2 ;
-(id)_correctedMapItemsFromUserWithError:(id*)arg1 ;
@end

