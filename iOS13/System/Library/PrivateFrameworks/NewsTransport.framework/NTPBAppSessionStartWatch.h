/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAppSessionStartWatch : PBCodable <NSCopying> {

	int _sessionStartMethodWatch;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasSessionStartMethodWatch; 
@property (assign,nonatomic) int sessionStartMethodWatch;                  //@synthesize sessionStartMethodWatch=_sessionStartMethodWatch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)sessionStartMethodWatch;
-(void)setSessionStartMethodWatch:(int)arg1 ;
-(void)setHasSessionStartMethodWatch:(BOOL)arg1 ;
-(BOOL)hasSessionStartMethodWatch;
@end

