/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFContact.h>

@class NSString, WFFileRepresentation, CNContact;

@interface WFCNContact : WFContact {

	BOOL _fromVCard;
	int _propertyID;
	NSString* _accountIdentifier;
	long long _multivalueIndex;
	WFFileRepresentation* _vCardRepresentation;
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)URLs;
-(id)middleName;
-(id)namePrefix;
-(id)nameSuffix;
-(id)nickname;
-(id)phoneNumbers;
-(CNContact *)contact;
-(NSString *)contactIdentifier;
-(id)formattedName;
-(NSString *)accountIdentifier;
-(id)emailAddresses;
-(id)birthday;
-(id)organization;
-(id)imageData;
-(id)firstName;
-(id)lastName;
-(id)instantMessageAddresses;
-(id)socialProfiles;
-(id)dates;
-(id)thumbnailImageData;
-(id)vCardRepresentation;
-(int)propertyID;
-(BOOL)hasImageData;
-(BOOL)hasValueForPropertyID:(int)arg1 ;
-(id)valueForPropertyID:(int)arg1 ;
-(id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2 ;
-(id)streetAddresses;
-(long long)multivalueIndex;
-(id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(BOOL)arg4 ;
-(void)refetchContact;
-(BOOL)isPropertyIDRepresented:(int)arg1 ;
-(BOOL)fromVCard;
@end

