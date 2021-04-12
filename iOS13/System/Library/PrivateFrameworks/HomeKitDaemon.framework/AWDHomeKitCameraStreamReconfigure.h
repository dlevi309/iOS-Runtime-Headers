/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying> {

	unsigned _reconfigurationTimestamp;
	int _resolution;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasReconfigurationTimestamp; 
@property (assign,nonatomic) unsigned reconfigurationTimestamp;              //@synthesize reconfigurationTimestamp=_reconfigurationTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResolution; 
@property (assign,nonatomic) int resolution;                                 //@synthesize resolution=_resolution - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)resolution;
-(void)setResolution:(int)arg1 ;
-(void)setHasResolution:(BOOL)arg1 ;
-(BOOL)hasResolution;
-(id)resolutionAsString:(int)arg1 ;
-(int)StringAsResolution:(id)arg1 ;
-(void)setReconfigurationTimestamp:(unsigned)arg1 ;
-(void)setHasReconfigurationTimestamp:(BOOL)arg1 ;
-(BOOL)hasReconfigurationTimestamp;
-(unsigned)reconfigurationTimestamp;
@end

