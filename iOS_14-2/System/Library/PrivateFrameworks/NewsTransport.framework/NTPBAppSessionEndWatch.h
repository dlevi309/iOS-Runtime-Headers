/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {

	long long _watchAppSessionDuration;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasWatchAppSessionDuration; 
@property (assign,nonatomic) long long watchAppSessionDuration;              //@synthesize watchAppSessionDuration=_watchAppSessionDuration - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setWatchAppSessionDuration:(long long)arg1 ;
-(void)setHasWatchAppSessionDuration:(BOOL)arg1 ;
-(BOOL)hasWatchAppSessionDuration;
-(long long)watchAppSessionDuration;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

