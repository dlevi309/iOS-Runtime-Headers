/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate, NSString;

@interface NTPBCacheHint : PBCodable <NSCopying> {

	NTPBDate* _accessDate;
	NSString* _key;
	int _lifetime;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessDate; 
@property (nonatomic,retain) NTPBDate * accessDate;              //@synthesize accessDate=_accessDate - In the implementation block
@property (assign,nonatomic) BOOL hasLifetime; 
@property (assign,nonatomic) int lifetime;                       //@synthesize lifetime=_lifetime - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasKey;
-(int)lifetime;
-(void)setLifetime:(int)arg1 ;
-(NTPBDate *)accessDate;
-(void)setAccessDate:(NTPBDate *)arg1 ;
-(BOOL)hasAccessDate;
-(void)setHasLifetime:(BOOL)arg1 ;
-(BOOL)hasLifetime;
@end

