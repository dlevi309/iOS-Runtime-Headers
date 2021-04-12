/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying> {

	NSMutableArray* _rootRecordDesiredKeys;
	NSString* _routingKey;
	NSData* _shortTokenHash;
	BOOL _forceFetch;
	BOOL _shouldFetchRootRecord;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasRoutingKey; 
@property (nonatomic,retain) NSString * routingKey;                               //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                             //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
@property (assign,nonatomic) BOOL hasForceFetch; 
@property (assign,nonatomic) BOOL forceFetch;                                     //@synthesize forceFetch=_forceFetch - In the implementation block
@property (assign,nonatomic) BOOL hasShouldFetchRootRecord; 
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                          //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,retain) NSMutableArray * rootRecordDesiredKeys;              //@synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys - In the implementation block
+(id)options;
+(Class)rootRecordDesiredKeysType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(NSMutableArray *)rootRecordDesiredKeys;
-(void)setRootRecordDesiredKeys:(NSMutableArray *)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(void)addRootRecordDesiredKeys:(id)arg1 ;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(unsigned long long)rootRecordDesiredKeysCount;
-(void)clearRootRecordDesiredKeys;
-(id)rootRecordDesiredKeysAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRoutingKey;
-(BOOL)hasShortTokenHash;
-(void)setForceFetch:(BOOL)arg1 ;
-(void)setHasForceFetch:(BOOL)arg1 ;
-(BOOL)hasForceFetch;
-(void)setHasShouldFetchRootRecord:(BOOL)arg1 ;
-(BOOL)hasShouldFetchRootRecord;
-(NSData *)shortTokenHash;
-(BOOL)forceFetch;
@end

