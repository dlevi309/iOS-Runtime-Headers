/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSSocialServiceContactsDelegate.h>

@class CLSLRUMemoryCache, CLSRoutineService, CLSSocialServiceContacts, CLSSocialServiceCalendar, CLSSocialServiceCoreDuet, CLSSocialServiceCoreNameParser, CLSPersonIdentity, NSObject, NSDateInterval, NSURL, NSString;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate> {

	CLSLRUMemoryCache* _personsCache;
	CLSRoutineService* _routineService;
	CLSSocialServiceContacts* _contactsService;
	CLSSocialServiceCalendar* _calendarService;
	CLSSocialServiceCoreDuet* _coreDuetService;
	CLSSocialServiceCoreNameParser* _coreNameParserService;
	CLSPersonIdentity* _mePerson;
	NSObject* _routineServiceLockObject;
	NSDateInterval* _validDateInterval;
	NSURL* _applicationDataURL;

}

@property (nonatomic,readonly) CLSSocialServiceContacts * contactsService;                          //@synthesize contactsService=_contactsService - In the implementation block
@property (nonatomic,readonly) CLSSocialServiceCoreDuet * coreDuetService;                          //@synthesize coreDuetService=_coreDuetService - In the implementation block
@property (nonatomic,readonly) CLSSocialServiceCalendar * calendarService;                          //@synthesize calendarService=_calendarService - In the implementation block
@property (nonatomic,readonly) CLSSocialServiceCoreNameParser * coreNameParserService;              //@synthesize coreNameParserService=_coreNameParserService - In the implementation block
@property (nonatomic,readonly) NSObject * routineServiceLockObject;                                 //@synthesize routineServiceLockObject=_routineServiceLockObject - In the implementation block
@property (nonatomic,retain) CLSPersonIdentity * mePerson;                                          //@synthesize mePerson=_mePerson - In the implementation block
@property (nonatomic,readonly) CLSRoutineService * routineService;                                  //@synthesize routineService=_routineService - In the implementation block
@property (nonatomic,readonly) NSURL * applicationDataURL;                                          //@synthesize applicationDataURL=_applicationDataURL - In the implementation block
@property (nonatomic,retain) NSDateInterval * validDateInterval;                                    //@synthesize validDateInterval=_validDateInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)sharedManagerWithURL:(id)arg1 ;
-(id)personForIdentifier:(id)arg1 ;
-(id)eventsForClueCollection:(id)arg1 ;
-(id)cachedPersonLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 ;
-(id)matchingDictionaryForContactIdentifier:(id)arg1 ;
-(double)pinningVisitsRatio;
-(CLSSocialServiceContacts *)contactsService;
-(unsigned long long)numberOfMatchRequests;
-(void)invalidateMomentaryMemoryCaches;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)mePersonAddressesOfType:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLocationsOfInterest;
-(void)enumeratePersonsAndBirthdayDateUsingBlock:(/*^block*/id)arg1 ;
-(CLSSocialServiceCalendar *)calendarService;
-(id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)enumeratePersonsAndRelationshipUsingBlock:(/*^block*/id)arg1 ;
-(id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 usingPersonsModel:(id)arg2 ;
-(unsigned long long)numberOfTimeMatches;
-(id)personsFromEventParticipants:(id)arg1 excludeCurrentUser:(BOOL)arg2 ;
-(void)invalidatePermanentMemoryCaches;
-(unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2 ;
-(id)personForPersonHandle:(id)arg1 ;
-(BOOL)shutdownForPhotoLibraryURL:(id)arg1 ;
-(id)contactsForIdentifiers:(id)arg1 ;
-(void)postProcessLocationsOfInterest;
-(void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfVisits;
-(void)setMePerson:(CLSPersonIdentity *)arg1 ;
-(CLSPersonIdentity *)mePerson;
-(void)enumeratePersonsForFullname:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CLSSocialServiceCoreDuet *)coreDuetService;
-(CLSSocialServiceCoreNameParser *)coreNameParserService;
-(unsigned long long)numberOfRemoteLocationMatches;
-(BOOL)hasAddressesForMePerson;
-(void)enumerateAllPersonsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)sexHintForPerson:(id)arg1 usingLocales:(id)arg2 ;
-(void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(CLSRoutineService *)routineService;
-(BOOL)routineIsAvailable;
-(id)lastLocationOfInterestVisit;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)fetchLocationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(NSDateInterval *)validDateInterval;
-(id)eventsForDates:(id)arg1 ;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(NSObject *)routineServiceLockObject;
-(id)personResultForName:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(NSURL *)applicationDataURL;
-(id)predominantLocationMobilityForDateInterval:(id)arg1 confidence:(double*)arg2 ;
-(id)workCalendarEventsMatchingContactIdentifiers:(id)arg1 fromUniversalDate:(id)arg2 toUniversalDate:(id)arg3 ;
-(id)fetchImportantLocationsOfInterest;
-(void)invalidatePersonsCacheForPersonsWithNames:(id)arg1 ;
-(id)coreDuetPersonSuggestionsOnDate:(id)arg1 ;
-(void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setValidDateInterval:(NSDateInterval *)arg1 ;
-(void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfCloseByLocationMatches;
-(void)flushSocialServicesAtURL:(id)arg1 ;
-(id)locationOfInterestAtLocation:(id)arg1 ;
-(void)enumeratePersonsAndHomeAddressUsingBlock:(/*^block*/id)arg1 ;
-(id)contactHistoryCollector;
@end

