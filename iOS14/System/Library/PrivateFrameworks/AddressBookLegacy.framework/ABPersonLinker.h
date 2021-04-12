/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {

	void* _addressBook;
	NSMutableDictionary* _peopleByFirstName;
	NSMutableDictionary* _peopleByLastName;
	NSMutableDictionary* _peopleByOrganization;

}
+(BOOL)isLinkDataValidForAddressBook:(void*)arg1 ;
+(void)startAutoLinkingNewPeopleInAddressBook:(void*)arg1 inProcess:(BOOL)arg2 ;
+(BOOL)isAutoLinkingEnabled;
-(void)makeInitialLinks;
-(id)init;
-(void)linkRecentlyAddedPeople;
-(id)otherPeopleInDatabaseMatchingPerson:(void*)arg1 notIncludingPeople:(id)arg2 ;
-(BOOL)shouldLinkPerson:(void*)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(BOOL)arg4 ;
-(void)removeAllLinks;
-(void)presortPeople:(id)arg1 ;
-(void)addPerson:(void*)arg1 toDictionary:(id)arg2 withProperty:(int)arg3 ;
-(id)otherPeopleInArray:(id)arg1 matchingPerson:(void*)arg2 ;
-(void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(BOOL)arg2 countingOuterIterations:(unsigned long long*)arg3 detectedLinkCount:(unsigned long long*)arg4 ;
-(void)makeInitialLinksCountingOuterIterations:(unsigned long long*)arg1 ;
-(id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg1 withLimit:(long long)arg2 ;
-(BOOL)linkRecentlyAddedPeopleWithLimit:(long long)arg1 ;
-(void)linkNewlyAddedPerson:(void*)arg1 ;
-(id)suggestedPeopleToLinkWithPerson:(void*)arg1 isInitialLinking:(BOOL)arg2 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)dealloc;
@end

