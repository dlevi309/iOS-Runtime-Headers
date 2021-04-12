/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSNumber, NSDate;

@interface FAFamilyMember : NSObject <NSSecureCoding> {

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
@property (nonatomic,copy,readonly) NSDate * joinedDate; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * inviteEmail; 
@property (nonatomic,readonly) BOOL isChildAccount; 
@property (nonatomic,readonly) BOOL hasParentalControlsEnabled; 
@property (nonatomic,readonly) BOOL hasAskToBuyEnabled; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL isOrganizer; 
@property (nonatomic,readonly) BOOL hasLinkediTunesAccount; 
@property (nonatomic,readonly) NSNumber * iTunesAccountDSID; 
@property (nonatomic,copy,readonly) NSString * iTunesAccountUsername; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSNumber *)dsid;
-(NSString *)altDSID;
-(NSString *)appleID;
-(NSString *)inviteEmail;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)statusString;
-(unsigned long long)age;
-(BOOL)isMe;
-(BOOL)isOrganizer;
-(BOOL)isParent;
-(long long)memberType;
-(NSNumber *)iTunesAccountDSID;
-(NSString *)hashedDSID;
-(NSString *)memberTypeString;
-(BOOL)hasParentalControlsEnabled;
-(NSString *)memberTypeDisplayString;
-(NSDate *)joinedDate;
-(BOOL)isChildAccount;
-(BOOL)hasAskToBuyEnabled;
-(NSString *)iTunesAccountUsername;
-(BOOL)hasLinkediTunesAccount;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

