/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitVideoResolutionCount : PBCodable <NSCopying> {

	unsigned _count;
	int _resolution;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasResolution; 
@property (assign,nonatomic) int resolution;                  //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                  //@synthesize count=_count - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(int)resolution;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResolution:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasResolution:(BOOL)arg1 ;
-(BOOL)hasResolution;
-(id)resolutionAsString:(int)arg1 ;
-(int)StringAsResolution:(id)arg1 ;
@end

