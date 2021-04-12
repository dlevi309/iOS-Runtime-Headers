/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
*/

#import <CoreRecents/CoreRecents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSDictionary, NSNumber, NSArray, NSDate;

@interface CRRecentContact : NSObject <NSSecureCoding> {

	NSMutableArray* _recentDates;
	long long _contactID;
	NSString* _recentsDomain;
	NSString* _displayName;
	NSString* _kind;
	NSString* _address;
	NSString* _lastSendingAddress;
	NSString* _originalSource;
	NSDictionary* _metadata;
	NSNumber* _weight;
	NSNumber* _decayedWeight;
	NSArray* _members;
	unsigned long long _groupKind;
	long long _recentID;
	NSString* _groupName;
	NSString* _rawAddress;

}

@property (assign,nonatomic) long long contactID;                              //@synthesize contactID=_contactID - In the implementation block
@property (assign,nonatomic) long long recentID;                               //@synthesize recentID=_recentID - In the implementation block
@property (nonatomic,copy) NSString * groupName;                               //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * recentsDomain;                           //@synthesize recentsDomain=_recentsDomain - In the implementation block
@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * kind;                                    //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * address;                                 //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * rawAddress;                              //@synthesize rawAddress=_rawAddress - In the implementation block
@property (nonatomic,copy) NSString * lastSendingAddress;                      //@synthesize lastSendingAddress=_lastSendingAddress - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                                //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSNumber * decayedWeight;                         //@synthesize decayedWeight=_decayedWeight - In the implementation block
@property (nonatomic,copy) NSArray * recentDates; 
@property (nonatomic,copy) NSArray * members;                                  //@synthesize members=_members - In the implementation block
@property (nonatomic,copy) NSString * originalSource;                          //@synthesize originalSource=_originalSource - In the implementation block
@property (assign,nonatomic) unsigned long long groupKind;                     //@synthesize groupKind=_groupKind - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfRecents; 
@property (nonatomic,copy,readonly) NSDate * mostRecentDate; 
@property (nonatomic,copy,readonly) NSDate * leastRecentDate; 
@property (getter=isGroup,nonatomic,readonly) BOOL group; 
+(BOOL)supportsSecureCoding;
-(void*)person;
-(int)property;
-(void*)existingPerson;
-(id)_addressBookContext;
-(void)_setAddressBookContext:(id)arg1 ;
-(int)matchedIdentifier;
-(id)contactKey;
-(id)contactWithKeysToFetch:(id)arg1 ;
-(id)existingContactWithKeysToFetch:(id)arg1 contactStore:(id)arg2 ;
-(id)_contactContext;
-(void)_setContactContext:(id)arg1 ;
-(id)contactWithKeysToFetch:(id)arg1 contactStore:(id)arg2 ;
-(id)existingContactWithKeysToFetch:(id)arg1 ;
-(long long)contactID;
-(BOOL)isGroup;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setWeight:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)weight;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)kind;
-(NSArray *)members;
-(id)description;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)hasFullTextMatch:(id)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setOriginalSource:(NSString *)arg1 ;
-(NSString *)originalSource;
-(NSString *)lastSendingAddress;
-(void)setMembers:(NSArray *)arg1 ;
-(void)setContactID:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)displayName;
-(NSString *)rawAddress;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSDate *)mostRecentDate;
-(unsigned long long)countOfRecents;
-(void)setLastSendingAddress:(NSString *)arg1 ;
-(void)setRecentDates:(NSArray *)arg1 ;
-(NSDate *)leastRecentDate;
-(NSNumber *)decayedWeight;
-(id)initWithContactID:(long long)arg1 ;
-(void)setRecentID:(long long)arg1 ;
-(void)setRecentsDomain:(NSString *)arg1 ;
-(CFStringTokenizerRef)_wordTokenizerForString:(id)arg1 locale:(id)arg2 ;
-(void)_enumerateWordsInString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)recentID;
-(void)lazilyCreateRecentDates;
-(unsigned long long)insertionIndexForDate:(id)arg1 wouldBeUnique:(BOOL*)arg2 ;
-(void)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 required:(BOOL)arg3 ;
-(void)enumerateArchivablePropertiesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5 ;
-(id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4 ;
-(void)applyWeight:(id)arg1 ;
-(NSArray *)recentDates;
-(void)recordRecentEventForDate:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)setArchivableRecentID:(id)arg1 ;
-(id)archivableRecentID;
-(void)setArchivableContactID:(id)arg1 ;
-(id)archivableContactID;
-(void)setArchivableGroupMembers:(id)arg1 ;
-(id)archivableGroupMembers;
-(void)setArchivableMetadata:(id)arg1 ;
-(id)archivableMetadata;
-(void)setArchivableGroupKind:(id)arg1 ;
-(id)archivableGroupKind;
-(NSString *)recentsDomain;
-(void)setDecayedWeight:(NSNumber *)arg1 ;
-(unsigned long long)groupKind;
-(void)setGroupKind:(unsigned long long)arg1 ;
-(void)setRawAddress:(NSString *)arg1 ;
@end

