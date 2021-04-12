/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(double)latitude;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(double)longitude;
-(void)setAccuracy:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(double)accuracy;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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

