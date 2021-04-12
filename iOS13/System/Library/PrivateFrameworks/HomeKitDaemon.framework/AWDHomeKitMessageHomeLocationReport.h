/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitMessageLocation, NSMutableArray;

@interface AWDHomeKitMessageHomeLocationReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDHomeKitMessageLocation* _nearestLOI;
	unsigned _numIterationToConverge;
	NSMutableArray* _rawLocations;
	AWDHomeKitMessageLocation* _selectedHomeLocation;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * rawLocations;                                 //@synthesize rawLocations=_rawLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedHomeLocation; 
@property (nonatomic,retain) AWDHomeKitMessageLocation * selectedHomeLocation;              //@synthesize selectedHomeLocation=_selectedHomeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasNumIterationToConverge; 
@property (assign,nonatomic) unsigned numIterationToConverge;                               //@synthesize numIterationToConverge=_numIterationToConverge - In the implementation block
@property (nonatomic,readonly) BOOL hasNearestLOI; 
@property (nonatomic,retain) AWDHomeKitMessageLocation * nearestLOI;                        //@synthesize nearestLOI=_nearestLOI - In the implementation block
+(Class)rawLocationsType;
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
-(AWDHomeKitMessageLocation *)selectedHomeLocation;
-(void)setSelectedHomeLocation:(AWDHomeKitMessageLocation *)arg1 ;
-(void)addRawLocations:(id)arg1 ;
-(AWDHomeKitMessageLocation *)nearestLOI;
-(unsigned long long)rawLocationsCount;
-(void)clearRawLocations;
-(id)rawLocationsAtIndex:(unsigned long long)arg1 ;
-(void)setNearestLOI:(AWDHomeKitMessageLocation *)arg1 ;
-(BOOL)hasSelectedHomeLocation;
-(void)setNumIterationToConverge:(unsigned)arg1 ;
-(void)setHasNumIterationToConverge:(BOOL)arg1 ;
-(BOOL)hasNumIterationToConverge;
-(BOOL)hasNearestLOI;
-(NSMutableArray *)rawLocations;
-(void)setRawLocations:(NSMutableArray *)arg1 ;
-(unsigned)numIterationToConverge;
@end

