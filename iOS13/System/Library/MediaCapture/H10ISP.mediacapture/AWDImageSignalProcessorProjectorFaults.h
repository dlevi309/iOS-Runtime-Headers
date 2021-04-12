/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorProjectorFaults : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numMbFaults;
	unsigned _numRglFaults;
	unsigned _numRglUVLOFaults;
	unsigned _numYgFaults;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumRglFaults; 
@property (assign,nonatomic) unsigned numRglFaults;                     //@synthesize numRglFaults=_numRglFaults - In the implementation block
@property (assign,nonatomic) BOOL hasNumRglUVLOFaults; 
@property (assign,nonatomic) unsigned numRglUVLOFaults;                 //@synthesize numRglUVLOFaults=_numRglUVLOFaults - In the implementation block
@property (assign,nonatomic) BOOL hasNumMbFaults; 
@property (assign,nonatomic) unsigned numMbFaults;                      //@synthesize numMbFaults=_numMbFaults - In the implementation block
@property (assign,nonatomic) BOOL hasNumYgFaults; 
@property (assign,nonatomic) unsigned numYgFaults;                      //@synthesize numYgFaults=_numYgFaults - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setNumRglFaults:(unsigned)arg1 ;
-(void)setHasNumRglFaults:(BOOL)arg1 ;
-(BOOL)hasNumRglFaults;
-(void)setNumRglUVLOFaults:(unsigned)arg1 ;
-(void)setHasNumRglUVLOFaults:(BOOL)arg1 ;
-(BOOL)hasNumRglUVLOFaults;
-(void)setNumMbFaults:(unsigned)arg1 ;
-(void)setHasNumMbFaults:(BOOL)arg1 ;
-(BOOL)hasNumMbFaults;
-(void)setNumYgFaults:(unsigned)arg1 ;
-(void)setHasNumYgFaults:(BOOL)arg1 ;
-(BOOL)hasNumYgFaults;
-(unsigned)numRglFaults;
-(unsigned)numRglUVLOFaults;
-(unsigned)numMbFaults;
-(unsigned)numYgFaults;
@end

