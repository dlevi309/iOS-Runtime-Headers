/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class CNContactStore, NSArray;

@interface _PSContactResolver : NSObject {

	CNContactStore* _contactStore;
	NSArray* _keysToFetch;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                      //@synthesize keysToFetch=_keysToFetch - In the implementation block
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)allEmailAndPhoneNumberHandlesForContact:(id)arg1 ;
-(NSArray *)keysToFetch;
-(id)contactWithIdentifier:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 ;
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 pickFirstOfMultiple:(BOOL)arg2 ;
-(id)resolveContact:(id)arg1 ;
-(id)resolveContactFromINPerson:(id)arg1 ;
-(id)resolveContactIdentifier:(id)arg1 ;
@end

