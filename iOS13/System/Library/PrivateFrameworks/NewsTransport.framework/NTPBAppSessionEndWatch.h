/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {

	long long _watchAppSessionDuration;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasWatchAppSessionDuration; 
@property (assign,nonatomic) long long watchAppSessionDuration;              //@synthesize watchAppSessionDuration=_watchAppSessionDuration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWatchAppSessionDuration:(long long)arg1 ;
-(void)setHasWatchAppSessionDuration:(BOOL)arg1 ;
-(BOOL)hasWatchAppSessionDuration;
-(long long)watchAppSessionDuration;
@end

