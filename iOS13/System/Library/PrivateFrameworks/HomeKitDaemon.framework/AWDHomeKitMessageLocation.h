/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitMessageLocation : PBCodable <NSCopying> {

	double _accuracy;
	double _latitude;
	double _longitude;
	unsigned long long _timestamp;
	unsigned _numOfReachableBTLEAcc;
	unsigned _numOfReachableIPAcc;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                            //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                             //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasAccuracy; 
@property (assign,nonatomic) double accuracy;                             //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) BOOL hasNumOfReachableIPAcc; 
@property (assign,nonatomic) unsigned numOfReachableIPAcc;                //@synthesize numOfReachableIPAcc=_numOfReachableIPAcc - In the implementation block
@property (assign,nonatomic) BOOL hasNumOfReachableBTLEAcc; 
@property (assign,nonatomic) unsigned numOfReachableBTLEAcc;              //@synthesize numOfReachableBTLEAcc=_numOfReachableBTLEAcc - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(double)accuracy;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setAccuracy:(double)arg1 ;
-(void)setHasAccuracy:(BOOL)arg1 ;
-(BOOL)hasAccuracy;
-(void)setNumOfReachableIPAcc:(unsigned)arg1 ;
-(void)setHasNumOfReachableIPAcc:(BOOL)arg1 ;
-(BOOL)hasNumOfReachableIPAcc;
-(void)setNumOfReachableBTLEAcc:(unsigned)arg1 ;
-(void)setHasNumOfReachableBTLEAcc:(BOOL)arg1 ;
-(BOOL)hasNumOfReachableBTLEAcc;
-(unsigned)numOfReachableIPAcc;
-(unsigned)numOfReachableBTLEAcc;
@end

