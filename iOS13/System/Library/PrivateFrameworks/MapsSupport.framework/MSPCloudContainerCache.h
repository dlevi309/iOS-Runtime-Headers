/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKServerChangeToken, NSString, NSMutableDictionary, NSMutableSet, NSDictionary, NSSet;

@interface MSPCloudContainerCache : NSObject <NSSecureCoding> {

	CKServerChangeToken* _serverToken;
	NSString* _cacheName;
	NSString* _accountIdentifier;
	long long _accountEnvironment;
	NSMutableDictionary* _stagedRecords;
	NSMutableSet* _stagedTombstones;
	NSDictionary* _cachedRecords;
	NSSet* _cachedTombstoneRecords;

}

@property (nonatomic,copy) NSString * cacheName;                               //@synthesize cacheName=_cacheName - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                       //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) long long accountEnvironment;                     //@synthesize accountEnvironment=_accountEnvironment - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stagedRecords;              //@synthesize stagedRecords=_stagedRecords - In the implementation block
@property (nonatomic,retain) NSMutableSet * stagedTombstones;                  //@synthesize stagedTombstones=_stagedTombstones - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedRecords;                     //@synthesize cachedRecords=_cachedRecords - In the implementation block
@property (nonatomic,retain) NSSet * cachedTombstoneRecords;                   //@synthesize cachedTombstoneRecords=_cachedTombstoneRecords - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverToken;                //@synthesize serverToken=_serverToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)load;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(void)save;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)cacheName;
-(id)cacheURL;
-(id)initWithName:(id)arg1 accountIdentifier:(id)arg2 ;
-(CKServerChangeToken *)serverToken;
-(void)setServerToken:(CKServerChangeToken *)arg1 ;
-(void)addRecordsFromChangeSet:(id)arg1 ;
-(void)addRecord:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)hasRecord:(id)arg1 withIdentifier:(id)arg2 ;
-(id)cachedRecordForRecord:(id)arg1 ;
-(id)initWithName:(id)arg1 accountIdentifier:(id)arg2 accountEnvironment:(long long)arg3 ;
-(NSDictionary *)cachedRecords;
-(NSSet *)cachedTombstoneRecords;
-(NSMutableSet *)stagedTombstones;
-(NSMutableDictionary *)stagedRecords;
-(void)setCachedRecords:(NSDictionary *)arg1 ;
-(void)setCachedTombstoneRecords:(NSSet *)arg1 ;
-(void)merge;
-(long long)accountEnvironment;
-(id)cachedRecordForIdentifier:(id)arg1 ;
-(void)setCacheName:(NSString *)arg1 ;
-(void)setAccountEnvironment:(long long)arg1 ;
-(void)setStagedRecords:(NSMutableDictionary *)arg1 ;
-(void)setStagedTombstones:(NSMutableSet *)arg1 ;
@end

