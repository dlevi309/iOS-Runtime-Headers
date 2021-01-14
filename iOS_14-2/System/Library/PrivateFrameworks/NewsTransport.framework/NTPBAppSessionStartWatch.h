/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAppSessionStartWatch : PBCodable <NSCopying> {

	int _sessionStartMethodWatch;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasSessionStartMethodWatch; 
@property (assign,nonatomic) int sessionStartMethodWatch;                  //@synthesize sessionStartMethodWatch=_sessionStartMethodWatch - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(int)sessionStartMethodWatch;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSessionStartMethodWatch:(int)arg1 ;
-(void)setHasSessionStartMethodWatch:(BOOL)arg1 ;
-(BOOL)hasSessionStartMethodWatch;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

