/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface _AWDWiFiUIScanSession : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _counts;
	unsigned _duration;
	NSString* _process;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * counts;                   //@synthesize counts=_counts - In the implementation block
@property (nonatomic,readonly) BOOL hasProcess; 
@property (nonatomic,retain) NSString * process;                        //@synthesize process=_process - In the implementation block
+(Class)countsType;
-(NSString *)process;
-(void)setProcess:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)countsCount;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(NSMutableArray *)counts;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setCounts:(NSMutableArray *)arg1 ;
-(void)clearCounts;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProcess;
-(unsigned)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCounts:(id)arg1 ;
-(id)countsAtIndex:(unsigned long long)arg1 ;
@end

