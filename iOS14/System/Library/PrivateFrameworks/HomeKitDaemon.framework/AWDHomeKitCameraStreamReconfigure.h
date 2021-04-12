/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying> {

	unsigned _reconfigurationTimestamp;
	int _resolution;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasReconfigurationTimestamp; 
@property (assign,nonatomic) unsigned reconfigurationTimestamp;              //@synthesize reconfigurationTimestamp=_reconfigurationTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResolution; 
@property (assign,nonatomic) int resolution;                                 //@synthesize resolution=_resolution - In the implementation block
-(id)dictionaryRepresentation;
-(int)resolution;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
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
-(void)setReconfigurationTimestamp:(unsigned)arg1 ;
-(void)setHasReconfigurationTimestamp:(BOOL)arg1 ;
-(BOOL)hasReconfigurationTimestamp;
-(unsigned)reconfigurationTimestamp;
@end

