/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate;

@interface NNMKMailbox : NSObject <NSSecureCoding, NSCopying> {

	BOOL _syncEnabled;
	BOOL _syncRequested;
	BOOL _syncActive;
	BOOL _hasSelection;
	BOOL _databaseContentVerified;
	unsigned long long _type;
	unsigned long long _filterType;
	NSString* _mailboxId;
	NSString* _accountId;
	NSString* _accountLocalId;
	NSURL* _url;
	NSString* _customName;
	NSDate* _lastUpdate;

}

@property (assign,nonatomic) BOOL databaseContentVerified;                 //@synthesize databaseContentVerified=_databaseContentVerified - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long filterType;                //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,retain) NSString * mailboxId;                         //@synthesize mailboxId=_mailboxId - In the implementation block
@property (nonatomic,retain) NSString * accountId;                         //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * accountLocalId;                    //@synthesize accountLocalId=_accountLocalId - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * customName;                        //@synthesize customName=_customName - In the implementation block
@property (assign,nonatomic) BOOL syncEnabled;                             //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,nonatomic) BOOL syncRequested;                           //@synthesize syncRequested=_syncRequested - In the implementation block
@property (assign,nonatomic) BOOL syncActive;                              //@synthesize syncActive=_syncActive - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                          //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL hasSelection;                            //@synthesize hasSelection=_hasSelection - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)syncedTypeFromFilterType:(unsigned long long)arg1 ;
+(id)idsFromMailboxes:(id)arg1 ;
+(unsigned long long)messageStateForMailboxFilterType:(unsigned long long)arg1 ;
+(id)generateMailboxIdWithAccountId:(id)arg1 mailboxName:(id)arg2 ;
+(unsigned long long)syncedTypeFromMailbox:(id)arg1 ;
+(unsigned long long)defaultFilterTypes;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSDate *)lastUpdate;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isSelected;
-(unsigned long long)filterType;
-(void)setFilterType:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)hasSelection;
-(void)setHasSelection:(BOOL)arg1 ;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(BOOL)syncEnabled;
-(void)setCustomName:(NSString *)arg1 ;
-(NSString *)customName;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(void)resetURL;
-(BOOL)syncActive;
-(void)setSyncRequested:(BOOL)arg1 ;
-(BOOL)syncRequested;
-(void)setSyncActive:(BOOL)arg1 ;
-(NSString *)accountLocalId;
-(void)setAccountLocalId:(NSString *)arg1 ;
-(BOOL)hasFilterType:(unsigned long long)arg1 ;
-(BOOL)hasCompoundFilters;
-(id)initWithFilterType:(unsigned long long)arg1 ;
-(BOOL)databaseContentVerified;
-(void)setDatabaseContentVerified:(BOOL)arg1 ;
-(BOOL)isSelectedForFilterType:(unsigned long long)arg1 ;
-(BOOL)hasAnyFilter;
-(void)addFilterType:(unsigned long long)arg1 ;
-(void)removeFilterType:(unsigned long long)arg1 ;
@end

