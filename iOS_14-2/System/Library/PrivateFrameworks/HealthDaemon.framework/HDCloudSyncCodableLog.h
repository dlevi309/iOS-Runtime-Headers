/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCloudSyncCodableLog : PBCodable <NSCopying> {

	double _timeStamp;
	NSString* _event;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasTimeStamp; 
@property (assign,nonatomic) double timeStamp;               //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) NSString * event;               //@synthesize event=_event - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(double)timeStamp;
-(id)description;
-(BOOL)hasEvent;
-(NSString *)event;
-(void)setTimeStamp:(double)arg1 ;
-(void)setEvent:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTimeStamp:(BOOL)arg1 ;
-(BOOL)hasTimeStamp;
@end

