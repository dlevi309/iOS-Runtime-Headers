/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSSocialServiceContactsDelegate.h>

@class CLSLRUMemoryCache, CLSRoutineService, CLSSocialServiceContacts, CLSSocialServiceCalendar, CLSSocialServiceCoreDuet, CLSSocialServiceCoreNameParser, CLSPerson, NSObject, NSDateInterval, NSURL, NSString;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate> {

	CLSLRUMemoryCache* _personsCache;
	CLSRoutineService* _routineService;
	CLSSocialServiceContacts* _contactsService;
	CLSSocialServiceCalendar* _calendarService;
	CLSSocialServiceCoreDuet* _coreDuetService;
	CLSSocialServiceCoreNameParser* _coreNameParserService;
	CLSPerson* _mePerson;
	NSObject* _routineServiceLockObject;
	NSDateInterval* _validDateInterval;
	NSURL* _applicationDataURL;

}

@property (nonatomic,readonly) CLSSocialServiceContacts * contactsService;                          //@synthesize contactsService=_contactsService - In the implementation block
@property (nonatomic,readonly) CLSSocialServiceCoreDuet * coreDuetService;                          //@synthesize coreDuetService=_coreDuetService - In the implementation block
@property (nonatomic,readonly) CLSSocialServiceCalendar * calendarService;                          //@synthesize calendarService=_calendarService - In the implementation block
@property (nonatomic,readonly) CLSSocialServiceCoreNameParser * coreNameParserService;              //@synthesize coreNameParserService=_coreNameParserService - In the implementation block
@property (nonatomic,readonly) NSObject * routineServiceLockObject;                                 //@synthesize routineServiceLockObject=_routineServiceLockObject - In the implementation block
@property (nonatomic,retain) CLSPerson * mePerson;                                                  //@synthesize mePerson=_mePerson - In the implementation block
@property (nonatomic,readonly) CLSRoutineService * routineService;                                  //@synthesize routineService=_routineService - In the implementation block
@property (nonatomic,readonly) NSURL * applicationDataURL;                                          //@synthesize applicationDataURL=_applicationDataURL - In the implementation block
@property (nonatomic,retain) NSDateInterval * validDateInterval;                                    //@synthesize validDateInterval=_validDateInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)sharedManagerWithURL:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)contactsForIdentifiers:(id)arg1 ;
-(BOOL)routineIsAvailable;
-(id)locationOfInterestAtLocation:(id)arg1 ;
-(unsigned long long)numberOfLocationsOfInterest;
-(id)lastLocationOfInterestVisit;
-(void)postProcessLocationsOfInterest;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(CLSPerson *)mePerson;
-(void)flushSocialServicesAtURL:(id)arg1 ;
-(void)enumerateAllPersonsUsingBlock:(/*^block*/id)arg1 ;
-(id)coreDuetPersonSuggestionsOnDate:(id)arg1 ;
-(id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 usingPersonsModel:(id)arg2 ;
-(id)personForIdentifier:(id)arg1 ;
-(id)contactHistoryCollector;
-(id)eventsForDates:(id)arg1 ;
-(void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)eventsForClueCollection:(id)arg1 ;
-(id)workCalendarEventsMatchingContactIdentifiers:(id)arg1 fromUniversalDate:(id)arg2 toUniversalDate:(id)arg3 ;
-(id)personsFromEventParticipants:(id)arg1 excludeCurrentUser:(BOOL)arg2 ;
-(BOOL)hasAddressesForMePerson;
-(id)mePersonAddressesOfType:(unsigned long long)arg1 ;
-(BOOL)shutdownForPhotoLibraryURL:(id)arg1 ;
-(CLSSocialServiceContacts *)contactsService;
-(CLSSocialServiceCoreDuet *)coreDuetService;
-(CLSSocialServiceCalendar *)calendarService;
-(CLSRoutineService *)routineService;
-(CLSSocialServiceCoreNameParser *)coreNameParserService;
-(void)setValidDateInterval:(NSDateInterval *)arg1 ;
-(void)invalidatePermanentMemoryCaches;
-(void)invalidateMomentaryMemoryCaches;
-(void)invalidatePersonsCacheForPersonsWithNames:(id)arg1 ;
-(id)personResultForName:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersonsAndHomeAddressUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersonsAndBirthdayDateUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersonsAndRelationshipUsingBlock:(/*^block*/id)arg1 ;
-(id)cachedPersonLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 ;
-(id)personForPersonHandle:(id)arg1 ;
-(void)enumeratePersonsForFullname:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)matchingDictionaryForContactIdentifier:(id)arg1 ;
-(id)fetchLocationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)predominantLocationMobilityForDateInterval:(id)arg1 confidence:(double*)arg2 ;
-(id)fetchImportantLocationsOfInterest;
-(void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)genderHintForPerson:(id)arg1 usingLocales:(id)arg2 ;
-(unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2 ;
-(void)setMePerson:(CLSPerson *)arg1 ;
-(NSObject *)routineServiceLockObject;
-(NSDateInterval *)validDateInterval;
-(NSURL *)applicationDataURL;
-(unsigned long long)numberOfVisits;
-(unsigned long long)numberOfTimeMatches;
-(unsigned long long)numberOfCloseByLocationMatches;
-(unsigned long long)numberOfRemoteLocationMatches;
-(unsigned long long)numberOfMatchRequests;
-(double)pinningVisitsRatio;
@end

