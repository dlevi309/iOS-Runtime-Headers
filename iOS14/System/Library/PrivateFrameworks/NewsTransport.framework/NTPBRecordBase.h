/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT5 _has;

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
-(BOOL)needsAssetURLRefresh;
-(BOOL)fc_isCachedAgeGreaterThan:(double)arg1 ;
-(BOOL)fc_isCachedAgeLessThan:(double)arg1 ;
-(NTPBDate *)modificationDate;
-(id)dictionaryRepresentation;
-(BOOL)hasIdentifier;
-(BOOL)hasChangeTag;
-(BOOL)hasFetchDate;
-(void)setHasDeletedFromCloud:(BOOL)arg1 ;
-(BOOL)hasDeletedFromCloud;
-(void)setHasCacheLifetimeHint:(BOOL)arg1 ;
-(BOOL)hasCacheLifetimeHint;
-(void)setHasRecordType:(BOOL)arg1 ;
-(BOOL)hasRecordType;
-(BOOL)hasAssetURLsDate;
-(int)recordType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)deletedFromCloud;
-(void)setChangeTag:(NSString *)arg1 ;
-(void)setFetchDate:(NTPBDate *)arg1 ;
-(void)setAssetURLsDate:(NTPBDate *)arg1 ;
-(void)setDeletedFromCloud:(BOOL)arg1 ;
-(NTPBDate *)assetURLsDate;
-(id)description;
-(void)setRecordType:(int)arg1 ;
-(void)setCacheLifetimeHint:(int)arg1 ;
-(void)setModificationDate:(NTPBDate *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(int)cacheLifetimeHint;
-(BOOL)hasModificationDate;
-(NSString *)changeTag;
-(NTPBDate *)fetchDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

