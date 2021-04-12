/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate, NSString;

@interface NTPBRecordBase : PBCodable <NSCopying> {

	NTPBDate* _assetURLsDate;
	int _cacheLifetimeHint;
	NSString* _changeTag;
	NTPBDate* _fetchDate;
	NSString* _identifier;
	NTPBDate* _modificationDate;
	int _recordType;
	BOOL _deletedFromCloud;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,readonly) BOOL needsAssetURLRefresh; 
@property (nonatomic,readonly) BOOL hasExpiredAssetURLs; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeTag; 
@property (nonatomic,retain) NSString * changeTag;                     //@synthesize changeTag=_changeTag - In the implementation block
@property (nonatomic,readonly) BOOL hasModificationDate; 
@property (nonatomic,retain) NTPBDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchDate; 
@property (nonatomic,retain) NTPBDate * fetchDate;                     //@synthesize fetchDate=_fetchDate - In the implementation block
@property (assign,nonatomic) BOOL hasDeletedFromCloud; 
@property (assign,nonatomic) BOOL deletedFromCloud;                    //@synthesize deletedFromCloud=_deletedFromCloud - In the implementation block
@property (assign,nonatomic) BOOL hasCacheLifetimeHint; 
@property (assign,nonatomic) int cacheLifetimeHint;                    //@synthesize cacheLifetimeHint=_cacheLifetimeHint - In the implementation block
@property (assign,nonatomic) BOOL hasRecordType; 
@property (assign,nonatomic) int recordType;                           //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetURLsDate; 
@property (nonatomic,retain) NTPBDate * assetURLsDate;                 //@synthesize assetURLsDate=_assetURLsDate - In the implementation block
-(BOOL)hasExpiredAssetURLs;
-(BOOL)fc_isCachedAgeGreaterThan:(double)arg1 ;
-(BOOL)needsAssetURLRefresh;
-(BOOL)fc_isCachedAgeLessThan:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NTPBDate *)modificationDate;
-(void)writeTo:(id)arg1 ;
-(int)recordType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setModificationDate:(NTPBDate *)arg1 ;
-(void)setRecordType:(int)arg1 ;
-(BOOL)hasIdentifier;
-(NSString *)changeTag;
-(void)setChangeTag:(NSString *)arg1 ;
-(int)cacheLifetimeHint;
-(BOOL)deletedFromCloud;
-(NTPBDate *)fetchDate;
-(void)setFetchDate:(NTPBDate *)arg1 ;
-(void)setAssetURLsDate:(NTPBDate *)arg1 ;
-(void)setDeletedFromCloud:(BOOL)arg1 ;
-(NTPBDate *)assetURLsDate;
-(void)setCacheLifetimeHint:(int)arg1 ;
-(BOOL)hasModificationDate;
-(BOOL)hasChangeTag;
-(BOOL)hasFetchDate;
-(void)setHasDeletedFromCloud:(BOOL)arg1 ;
-(BOOL)hasDeletedFromCloud;
-(void)setHasCacheLifetimeHint:(BOOL)arg1 ;
-(BOOL)hasCacheLifetimeHint;
-(void)setHasRecordType:(BOOL)arg1 ;
-(BOOL)hasRecordType;
-(BOOL)hasAssetURLsDate;
@end

