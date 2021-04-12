/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)property;
-(void*)person;
-(int)matchedIdentifier;
-(void*)existingPerson;
-(id)_addressBookContext;
-(void)_setAddressBookContext:(id)arg1 ;
-(id)contactKey;
-(id)contactWithKeysToFetch:(id)arg1 ;
-(id)existingContactWithKeysToFetch:(id)arg1 contactStore:(id)arg2 ;
-(id)_contactContext;
-(void)_setContactContext:(id)arg1 ;
-(id)contactWithKeysToFetch:(id)arg1 contactStore:(id)arg2 ;
-(id)existingContactWithKeysToFetch:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(NSString *)kind;
-(NSString *)displayName;
-(void)setKind:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(long long)contactID;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setWeight:(NSNumber *)arg1 ;
-(NSNumber *)weight;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)members;
-(BOOL)isGroup;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)rawAddress;
-(void)setContactID:(long long)arg1 ;
-(void)setOriginalSource:(NSString *)arg1 ;
-(NSString *)originalSource;
-(BOOL)hasFullTextMatch:(id)arg1 ;
-(NSString *)lastSendingAddress;
-(unsigned long long)countOfRecents;
-(NSDate *)leastRecentDate;
-(NSNumber *)decayedWeight;
-(NSDate *)mostRecentDate;
-(id)initWithContactID:(long long)arg1 ;
-(void)setRecentID:(long long)arg1 ;
-(void)setRecentsDomain:(NSString *)arg1 ;
-(void)setRecentDates:(NSArray *)arg1 ;
-(void)setMembers:(NSArray *)arg1 ;
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
-(void)setLastSendingAddress:(NSString *)arg1 ;
-(void)setDecayedWeight:(NSNumber *)arg1 ;
-(unsigned long long)groupKind;
-(void)setGroupKind:(unsigned long long)arg1 ;
-(void)setRawAddress:(NSString *)arg1 ;
@end

