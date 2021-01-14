/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitWatchCompanionConnectivityReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numWatchAddEvents;
	unsigned _numWatchRemoveEvents;
	BOOL _reportComplete;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumWatchAddEvents; 
@property (assign,nonatomic) unsigned numWatchAddEvents;                 //@synthesize numWatchAddEvents=_numWatchAddEvents - In the implementation block
@property (assign,nonatomic) BOOL hasNumWatchRemoveEvents; 
@property (assign,nonatomic) unsigned numWatchRemoveEvents;              //@synthesize numWatchRemoveEvents=_numWatchRemoveEvents - In the implementation block
@property (assign,nonatomic) BOOL hasReportComplete; 
@property (assign,nonatomic) BOOL reportComplete;                        //@synthesize reportComplete=_reportComplete - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setReportComplete:(BOOL)arg1 ;
-(void)setNumWatchAddEvents:(unsigned)arg1 ;
-(void)setNumWatchRemoveEvents:(unsigned)arg1 ;
-(BOOL)reportComplete;
-(void)setHasNumWatchAddEvents:(BOOL)arg1 ;
-(BOOL)hasNumWatchAddEvents;
-(void)setHasNumWatchRemoveEvents:(BOOL)arg1 ;
-(BOOL)hasNumWatchRemoveEvents;
-(void)setHasReportComplete:(BOOL)arg1 ;
-(BOOL)hasReportComplete;
-(unsigned)numWatchAddEvents;
-(unsigned)numWatchRemoveEvents;
@end

