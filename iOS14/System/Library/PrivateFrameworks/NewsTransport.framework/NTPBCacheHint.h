/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessDate; 
@property (nonatomic,retain) NTPBDate * accessDate;              //@synthesize accessDate=_accessDate - In the implementation block
@property (assign,nonatomic) BOOL hasLifetime; 
@property (assign,nonatomic) int lifetime;                       //@synthesize lifetime=_lifetime - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setLifetime:(int)arg1 ;
-(int)lifetime;
-(BOOL)hasAccessDate;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLifetime;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NTPBDate *)accessDate;
-(void)writeTo:(id)arg1 ;
-(void)setHasLifetime:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setAccessDate:(NTPBDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

