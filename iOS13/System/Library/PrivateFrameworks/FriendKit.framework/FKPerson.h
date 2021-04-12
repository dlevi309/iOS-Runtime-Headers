/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
*/

#import <FriendKit/FriendKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSSet, NSMutableDictionary, NSDictionary;

@interface FKPerson : NSObject <NSCopying, NSSecureCoding> {

	NSString* _primaryDestination;
	NSString* _initials;
	NSNumber* _phoneNumberCount;
	NSNumber* _emailAddressCount;
	int _abRecordID;
	NSString* _abRecordGUID;
	NSString* _abDatabaseUID;
	NSString* _name;
	NSSet* _allValues;
	NSMutableDictionary* _metadata;
	BOOL _hasUnreadMessages;
	BOOL _needsSave;
	NSString* _preferredReplyAs;

}

@property (assign,nonatomic) BOOL needsSave;                              //@synthesize needsSave=_needsSave - In the implementation block
@property (nonatomic,readonly) BOOL hasUnreadMessages;                    //@synthesize hasUnreadMessages=_hasUnreadMessages - In the implementation block
@property (nonatomic,retain) NSString * preferredReplyAs;                 //@synthesize preferredReplyAs=_preferredReplyAs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata; 
+(BOOL)supportsSecureCoding;
+(id)allValuesForPerson:(void*)arg1 ;
+(id)sharedMetadataQueue;
+(id)_allPhoneValuesInSet:(id)arg1 ;
+(id)_allEmailValuesInSet:(id)arg1 ;
+(id)preferredNameForPerson:(void*)arg1 ;
+(id)_allEmailValuesForRecord:(void*)arg1 ;
+(id)_allPhoneValuesForRecord:(void*)arg1 ;
+(int)addValue:(void*)arg1 withLabel:(CFStringRef)arg2 toPerson:(void*)arg3 property:(int)arg4 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allValues;
-(id)dictionaryRepresentation;
-(BOOL)needsSave;
-(void)setNeedsSave:(BOOL)arg1 ;
-(id)displayName;
-(NSDictionary *)metadata;
-(BOOL)hasName;
-(void)_postChangeNotification;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(id)metadataValueForKey:(id)arg1 ;
-(BOOL)hasUnreadMessages;
-(id)_metadataDictionary;
-(id)abRecordGUID;
-(id)initWithFavorite:(id)arg1 addressBook:(void*)arg2 ;
-(BOOL)isLikePerson:(id)arg1 ;
-(id)initWithDestinations:(id)arg1 addressBook:(void*)arg2 ;
-(id)initWithABRecordGUID:(id)arg1 addressBook:(void*)arg2 ;
-(BOOL)isEqualToDictionaryRepresentation:(id)arg1 ;
-(BOOL)updateFromDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)allValuesCount;
-(void)refreshWithAddressBook:(void*)arg1 ;
-(BOOL)_updateFromDictionaryRepresentation:(id)arg1 shouldLogUpdates:(BOOL)arg2 ;
-(void)_reconcile:(void*)arg1 canPostChangeNotification:(BOOL)arg2 shouldLogUpdates:(BOOL)arg3 ;
-(void)_setABRecordGUID:(id)arg1 ;
-(id)primaryDestination;
-(id)_recordMatchDictionaryFromCFArray:(CFArrayRef)arg1 followLinks:(BOOL)arg2 addressBook:(void*)arg3 ;
-(void*)_bestRecordMatchFromDictionary:(id)arg1 addressBook:(void*)arg2 ;
-(float)_allValuesMatchScore:(id)arg1 ;
-(void)setPreferredReplyAs:(NSString *)arg1 ;
-(void)addMetadataEntriesFromDictionary:(id)arg1 ;
-(void)removeAllMetadataValues;
-(void*)copyABPersonWithAddressBook:(void*)arg1 ;
-(id)abDatabaseUID;
-(id)initials;
-(NSString *)preferredReplyAs;
@end

