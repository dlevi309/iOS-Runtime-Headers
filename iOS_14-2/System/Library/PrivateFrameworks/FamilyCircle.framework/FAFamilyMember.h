/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FamilyCircle-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSNumber, NSDate, CNContact;

@interface FAFamilyMember : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,copy,readonly) NSString * appleID; 
@property (nonatomic,copy,readonly) NSNumber * dsid; 
@property (nonatomic,copy,readonly) NSString * hashedDSID; 
@property (nonatomic,copy,readonly) NSString * altDSID; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,readonly) unsigned long long age; 
@property (nonatomic,copy,readonly) NSString * memberTypeDisplayString; 
@property (nonatomic,copy,readonly) NSString * memberTypeString; 
@property (nonatomic,readonly) long long memberType; 
@property (nonatomic,copy,readonly) NSNumber * memberSortOrder; 
@property (nonatomic,copy,readonly) NSDate * joinedDate; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * inviteEmail; 
@property (nonatomic,copy,readonly) NSDate * invitationDate; 
@property (nonatomic,readonly) BOOL isChildAccount; 
@property (nonatomic,readonly) BOOL hasParentalControlsEnabled; 
@property (nonatomic,readonly) BOOL hasAskToBuyEnabled; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL isOrganizer; 
@property (nonatomic,readonly) BOOL hasLinkediTunesAccount; 
@property (nonatomic,copy,readonly) NSString * iTunesNotLinkedMessage; 
@property (nonatomic,readonly) NSNumber * iTunesAccountDSID; 
@property (nonatomic,copy,readonly) NSString * iTunesAccountUsername; 
@property (nonatomic,readonly) CNContact * contact; 
+(BOOL)supportsSecureCoding;
-(BOOL)isMe;
-(NSString *)firstName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)lastName;
-(NSNumber *)dsid;
-(CNContact *)contact;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)hashedDSID;
-(BOOL)hasParentalControlsEnabled;
-(BOOL)hasAskToBuyEnabled;
-(BOOL)isEqualToFamilyMember:(id)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(NSDictionary *)dictionary;
-(NSString *)inviteEmail;
-(unsigned long long)hash;
-(NSString *)statusString;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)memberTypeString;
-(id)_dateWithEpochString:(id)arg1 ;
-(BOOL)_nilEqualProperty:(id)arg1 with:(id)arg2 ;
-(BOOL)hasLinkediTunesAccount;
-(long long)memberType;
-(NSString *)iTunesAccountUsername;
-(NSString *)memberTypeDisplayString;
-(NSNumber *)memberSortOrder;
-(NSDate *)invitationDate;
-(NSString *)iTunesNotLinkedMessage;
-(BOOL)isOrganizer;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isChildAccount;
-(NSString *)appleID;
-(unsigned long long)age;
-(BOOL)isParent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)joinedDate;
-(NSNumber *)iTunesAccountDSID;
-(BOOL)isEqual:(id)arg1 ;
@end

