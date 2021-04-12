/*
* Generated on Thursday, January 14, 2021 at 2:23:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface NTPBKeyValueStore : PBCodable <NSCopying> {

	long long _clientVersion;
	long long _version;
	NSMutableArray* _keyValuePairs;
	NSData* _plistSidecar;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                           //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasClientVersion; 
@property (assign,nonatomic) long long clientVersion;                     //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (nonatomic,readonly) BOOL hasPlistSidecar; 
@property (nonatomic,retain) NSData * plistSidecar;                       //@synthesize plistSidecar=_plistSidecar - In the implementation block
+(Class)keyValuePairsType;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(long long)clientVersion;
-(void)mergeFrom:(id)arg1 ;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(void)setHasClientVersion:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasClientVersion;
-(void)clearKeyValuePairs;
-(NSMutableArray *)keyValuePairs;
-(BOOL)hasPlistSidecar;
-(unsigned long long)hash;
-(NSData *)plistSidecar;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientVersion:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setPlistSidecar:(NSData *)arg1 ;
@end

