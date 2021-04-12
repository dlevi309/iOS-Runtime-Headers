/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class CNContactStore, NSArray;

@interface _PSContactResolver : NSObject {

	CNContactStore* _contactStore;
	NSArray* _keysToFetch;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                      //@synthesize keysToFetch=_keysToFetch - In the implementation block
+(id)handlesForContactFavorites;
-(NSArray *)keysToFetch;
-(CNContactStore *)contactStore;
-(id)normalizedHandlesDictionaryFromHandles:(id)arg1 ;
-(id)contactWithIdentifier:(id)arg1 ;
-(id)resolveContactIdentifier:(id)arg1 ;
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 ;
-(id)allEmailAndPhoneNumberHandlesForContact:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 ;
-(id)resolveContactFromINPerson:(id)arg1 ;
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 pickFirstOfMultiple:(BOOL)arg2 ;
-(id)resolveContact:(id)arg1 ;
@end

