/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitCloudSync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _dataSyncState;
	unsigned _fetchCount;
	unsigned _homeManagerFetchCount;
	unsigned _homeManagerUploadCount;
	unsigned _homeZoneFetchCount;
	unsigned _homeZoneUploadCount;
	unsigned _pushCount;
	NSMutableArray* _topErrors;
	NSMutableArray* _topReasons;
	unsigned _uploadCount;
	unsigned _uploadErrorCount;
	BOOL _hasDecryptionFailed;
	BOOL _lastDecryptionFailed;
	BOOL _uploadMaximumDelayReached;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPushCount; 
@property (assign,nonatomic) unsigned pushCount;                             //@synthesize pushCount=_pushCount - In the implementation block
@property (assign,nonatomic) BOOL hasFetchCount; 
@property (assign,nonatomic) unsigned fetchCount;                            //@synthesize fetchCount=_fetchCount - In the implementation block
@property (assign,nonatomic) BOOL hasUploadCount; 
@property (assign,nonatomic) unsigned uploadCount;                           //@synthesize uploadCount=_uploadCount - In the implementation block
@property (assign,nonatomic) BOOL hasUploadErrorCount; 
@property (assign,nonatomic) unsigned uploadErrorCount;                      //@synthesize uploadErrorCount=_uploadErrorCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * topReasons;                    //@synthesize topReasons=_topReasons - In the implementation block
@property (nonatomic,retain) NSMutableArray * topErrors;                     //@synthesize topErrors=_topErrors - In the implementation block
@property (assign,nonatomic) BOOL hasUploadMaximumDelayReached; 
@property (assign,nonatomic) BOOL uploadMaximumDelayReached;                 //@synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached - In the implementation block
@property (assign,nonatomic) BOOL hasHasDecryptionFailed; 
@property (assign,nonatomic) BOOL hasDecryptionFailed;                       //@synthesize hasDecryptionFailed=_hasDecryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL hasLastDecryptionFailed; 
@property (assign,nonatomic) BOOL lastDecryptionFailed;                      //@synthesize lastDecryptionFailed=_lastDecryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL hasDataSyncState; 
@property (assign,nonatomic) int dataSyncState;                              //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (assign,nonatomic) BOOL hasHomeManagerFetchCount; 
@property (assign,nonatomic) unsigned homeManagerFetchCount;                 //@synthesize homeManagerFetchCount=_homeManagerFetchCount - In the implementation block
@property (assign,nonatomic) BOOL hasHomeZoneFetchCount; 
@property (assign,nonatomic) unsigned homeZoneFetchCount;                    //@synthesize homeZoneFetchCount=_homeZoneFetchCount - In the implementation block
@property (assign,nonatomic) BOOL hasHomeManagerUploadCount; 
@property (assign,nonatomic) unsigned homeManagerUploadCount;                //@synthesize homeManagerUploadCount=_homeManagerUploadCount - In the implementation block
@property (assign,nonatomic) BOOL hasHomeZoneUploadCount; 
@property (assign,nonatomic) unsigned homeZoneUploadCount;                   //@synthesize homeZoneUploadCount=_homeZoneUploadCount - In the implementation block
+(Class)topReasonsType;
+(Class)topErrorsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)dataSyncState;
-(void)setPushCount:(unsigned)arg1 ;
-(unsigned)pushCount;
-(BOOL)hasPushCount;
-(void)setDataSyncState:(int)arg1 ;
-(unsigned)fetchCount;
-(void)setFetchCount:(unsigned)arg1 ;
-(void)addTopReasons:(id)arg1 ;
-(void)addTopErrors:(id)arg1 ;
-(unsigned long long)topReasonsCount;
-(void)clearTopReasons;
-(id)topReasonsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)topErrorsCount;
-(void)clearTopErrors;
-(id)topErrorsAtIndex:(unsigned long long)arg1 ;
-(void)setHasPushCount:(BOOL)arg1 ;
-(void)setHasFetchCount:(BOOL)arg1 ;
-(BOOL)hasFetchCount;
-(void)setUploadCount:(unsigned)arg1 ;
-(void)setHasUploadCount:(BOOL)arg1 ;
-(BOOL)hasUploadCount;
-(void)setUploadErrorCount:(unsigned)arg1 ;
-(void)setHasUploadErrorCount:(BOOL)arg1 ;
-(BOOL)hasUploadErrorCount;
-(void)setUploadMaximumDelayReached:(BOOL)arg1 ;
-(void)setHasUploadMaximumDelayReached:(BOOL)arg1 ;
-(BOOL)hasUploadMaximumDelayReached;
-(void)setHasDecryptionFailed:(BOOL)arg1 ;
-(void)setHasHasDecryptionFailed:(BOOL)arg1 ;
-(BOOL)hasHasDecryptionFailed;
-(void)setLastDecryptionFailed:(BOOL)arg1 ;
-(void)setHasLastDecryptionFailed:(BOOL)arg1 ;
-(BOOL)hasLastDecryptionFailed;
-(void)setHasDataSyncState:(BOOL)arg1 ;
-(BOOL)hasDataSyncState;
-(id)dataSyncStateAsString:(int)arg1 ;
-(int)StringAsDataSyncState:(id)arg1 ;
-(void)setHomeManagerFetchCount:(unsigned)arg1 ;
-(void)setHasHomeManagerFetchCount:(BOOL)arg1 ;
-(BOOL)hasHomeManagerFetchCount;
-(void)setHomeZoneFetchCount:(unsigned)arg1 ;
-(void)setHasHomeZoneFetchCount:(BOOL)arg1 ;
-(BOOL)hasHomeZoneFetchCount;
-(void)setHomeManagerUploadCount:(unsigned)arg1 ;
-(void)setHasHomeManagerUploadCount:(BOOL)arg1 ;
-(BOOL)hasHomeManagerUploadCount;
-(void)setHomeZoneUploadCount:(unsigned)arg1 ;
-(void)setHasHomeZoneUploadCount:(BOOL)arg1 ;
-(BOOL)hasHomeZoneUploadCount;
-(unsigned)uploadCount;
-(unsigned)uploadErrorCount;
-(NSMutableArray *)topReasons;
-(void)setTopReasons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topErrors;
-(void)setTopErrors:(NSMutableArray *)arg1 ;
-(BOOL)uploadMaximumDelayReached;
-(BOOL)hasDecryptionFailed;
-(BOOL)lastDecryptionFailed;
-(unsigned)homeManagerFetchCount;
-(unsigned)homeZoneFetchCount;
-(unsigned)homeManagerUploadCount;
-(unsigned)homeZoneUploadCount;
@end

