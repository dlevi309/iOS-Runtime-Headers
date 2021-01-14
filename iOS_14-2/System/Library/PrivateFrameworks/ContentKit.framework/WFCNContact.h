/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFContact.h>

@class NSString, CNContact;

@interface WFCNContact : WFContact {

	BOOL _fromVCard;
	int _propertyID;
	NSString* _accountIdentifier;
	long long _multivalueIndex;
	CNContact* _contact;

}

@property (nonatomic,readonly) BOOL fromVCard;                                 //@synthesize fromVCard=_fromVCard - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact;                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier; 
@property (nonatomic,copy,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(void)contactStoreDidChange:(id)arg1 ;
+(id)changeObservers;
+(id)contactWithCNContact:(id)arg1 ;
+(id)requiredKeysToFetch;
+(id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 ;
+(id)allContactsWithSortOrder:(long long)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)allContactsWithSortOrder:(long long)arg1 ;
+(id)contactsWithName:(id)arg1 ;
+(id)contactsWithVCardData:(id)arg1 ;
+(id)addContactsChangeObserver:(/*^block*/id)arg1 ;
+(void)removeContactsChangeObserver:(id)arg1 ;
+(id)contactWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 ;
+(id)contactsWithName:(id)arg1 keysToFetch:(id)arg2 ;
+(void)updateContactStoreObservation;
-(id)instantMessageAddresses;
-(id)firstName;
-(id)lastName;
-(NSString *)contactIdentifier;
-(id)dates;
-(CNContact *)contact;
-(id)namePrefix;
-(id)nameSuffix;
-(NSString *)accountIdentifier;
-(id)emailAddresses;
-(id)nickname;
-(id)birthday;
-(id)socialProfiles;
-(id)phoneNumbers;
-(id)middleName;
-(id)URLs;
-(id)imageData;
-(id)formattedName;
-(id)thumbnailImageData;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)organization;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasImageData;
-(BOOL)hasValueForPropertyID:(int)arg1 ;
-(id)valueForPropertyID:(int)arg1 ;
-(id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2 ;
-(id)vCardRepresentationWithFullData:(BOOL)arg1 ;
-(id)streetAddresses;
-(int)propertyID;
-(long long)multivalueIndex;
-(id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(BOOL)arg4 ;
-(void)refetchContact;
-(BOOL)isPropertyIDRepresented:(int)arg1 ;
-(BOOL)fromVCard;
@end

