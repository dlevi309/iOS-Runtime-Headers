/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSSocialService.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>

@protocol SGSuggestionsServiceContactsProtocol, CLSSocialServiceContactsDelegate;
@class CNContactStore, CNContact, CLSPerson, NSMutableArray, NSMutableDictionary, NSMutableSet, CLSContactCache, NSURL, NSString;

@interface CLSSocialServiceContacts : CLSSocialService <PVVisionIntegrating> {

	CNContactStore* _contactStore;
	CNContact* _meContact;
	CLSPerson* _mePerson;
	NSMutableArray* _allPersons;
	NSMutableDictionary* _personsForCNIdentifiers;
	NSMutableDictionary* _personsForPHIdentifiers;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	id<CLSSocialServiceContactsDelegate> _delegate;
	NSMutableDictionary* _personByFullName;
	NSMutableSet* _nonFoundFullNames;
	NSMutableDictionary* _personByHandle;
	NSMutableSet* _nonFoundHandles;
	CLSContactCache* _contactCache;

}

@property (nonatomic,retain) NSMutableDictionary * personByFullName;                            //@synthesize personByFullName=_personByFullName - In the implementation block
@property (nonatomic,retain) NSMutableSet * nonFoundFullNames;                                  //@synthesize nonFoundFullNames=_nonFoundFullNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personByHandle;                              //@synthesize personByHandle=_personByHandle - In the implementation block
@property (nonatomic,retain) NSMutableSet * nonFoundHandles;                                    //@synthesize nonFoundHandles=_nonFoundHandles - In the implementation block
@property (nonatomic,retain) CLSContactCache * contactCache;                                    //@synthesize contactCache=_contactCache - In the implementation block
@property (assign,nonatomic,__weak) id<CLSSocialServiceContactsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSURL * diskCacheURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultKeysToFetch;
-(id<CLSSocialServiceContactsDelegate>)delegate;
-(void)setDelegate:(id<CLSSocialServiceContactsDelegate>)arg1 ;
-(id)contactsForIdentifiers:(id)arg1 ;
-(id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)suggestionsService;
-(CLSContactCache *)contactCache;
-(id)mePerson;
-(void)setContactCache:(CLSContactCache *)arg1 ;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(void)enumerateAllPersonsUsingBlock:(/*^block*/id)arg1 ;
-(id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 usingPersonsModel:(id)arg2 ;
-(id)personForIdentifier:(id)arg1 ;
-(id)contactHistoryCollector;
-(NSURL *)diskCacheURL;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(id)_fullNameWithContact:(id)arg1 ;
-(void)invalidateMemoryCaches;
-(id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersonsAndHomeAddressUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersonsAndBirthdayDateUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersonsAndRelationshipUsingBlock:(/*^block*/id)arg1 ;
-(id)cachedPersonLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 ;
-(id)personForPersonHandle:(id)arg1 ;
-(void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)matchingDictionaryForContactIdentifier:(id)arg1 ;
-(void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_allPersons;
-(id)_personResultsForfullName:(id)arg1 ;
-(id)_personResultsForPHPersonIdentifier:(id)arg1 isLackingFaces:(out BOOL*)arg2 inPhotoLibrary:(id)arg3 ;
-(id)_personWithContact:(id)arg1 createPersonIfNeeded:(BOOL)arg2 ;
-(id)_personWithContactIdentifier:(id)arg1 ;
-(id)__newPersonWithContact:(id)arg1 ;
-(void)_addAddressesToPerson:(id)arg1 withContact:(id)arg2 ;
-(unsigned long long)_relationshipForContact:(id)arg1 ;
-(id)_fullNameForPersonRecord:(id)arg1 ;
-(id)_firstNameForPersonRecord:(id)arg1 ;
-(id)_lastNameForPersonRecord:(id)arg1 ;
-(id)_nicknameForPersonRecord:(id)arg1 ;
-(id)_maidenNameForPersonRecord:(id)arg1 ;
-(void)enumeratePersonsForFullName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_personsMatchingPredicate:(id)arg1 ;
-(void)invalidateCacheForPersonWithIdentifiers:(id)arg1 ;
-(unsigned long long)_genderFromFaceGender:(unsigned short)arg1 ;
-(unsigned long long)_ageCategoryFromFaceAgeType:(unsigned short)arg1 ;
-(id)potentialBirthdayDateForCNIdentifier:(id)arg1 fullName:(id)arg2 ;
-(float)_fuzzyMatchingScoreBetweenNameComponents:(id)arg1 andNameComponents:(id)arg2 ;
-(float)_confidenceInPersonRecord:(id)arg1 forName:(id)arg2 components:(id)arg3 ;
-(void)updateProxy;
-(NSMutableDictionary *)personByFullName;
-(void)setPersonByFullName:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)nonFoundFullNames;
-(void)setNonFoundFullNames:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)personByHandle;
-(void)setPersonByHandle:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)nonFoundHandles;
-(void)setNonFoundHandles:(NSMutableSet *)arg1 ;
@end

