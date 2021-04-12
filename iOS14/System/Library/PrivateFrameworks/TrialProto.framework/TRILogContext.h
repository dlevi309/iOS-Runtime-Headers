/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRILogTime, NSString;

@interface TRILogContext : PBCodable <NSCopying> {

	unsigned long long _processEventIndex;
	TRILogTime* _deviceLogTime;
	TRILogTime* _deviceTrackingTime;
	unsigned _projectId;
	NSString* _trackingId;
	SCD_Struct_TR1 _has;

}

@property (assign,nonatomic) BOOL hasProjectId; 
@property (assign,nonatomic) unsigned projectId;                                //@synthesize projectId=_projectId - In the implementation block
@property (nonatomic,readonly) BOOL hasTrackingId; 
@property (nonatomic,retain) NSString * trackingId;                             //@synthesize trackingId=_trackingId - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLogTime; 
@property (nonatomic,retain) TRILogTime * deviceLogTime;                        //@synthesize deviceLogTime=_deviceLogTime - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceTrackingTime; 
@property (nonatomic,retain) TRILogTime * deviceTrackingTime;                   //@synthesize deviceTrackingTime=_deviceTrackingTime - In the implementation block
@property (assign,nonatomic) BOOL hasProcessEventIndex; 
@property (assign,nonatomic) unsigned long long processEventIndex;              //@synthesize processEventIndex=_processEventIndex - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)trackingId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setProcessEventIndex:(unsigned long long)arg1 ;
-(BOOL)hasTrackingId;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceLogTime:(TRILogTime *)arg1 ;
-(void)setDeviceTrackingTime:(TRILogTime *)arg1 ;
-(void)setTrackingId:(NSString *)arg1 ;
-(void)setProjectId:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasProjectId:(BOOL)arg1 ;
-(BOOL)hasProjectId;
-(BOOL)hasDeviceLogTime;
-(BOOL)hasDeviceTrackingTime;
-(void)setHasProcessEventIndex:(BOOL)arg1 ;
-(BOOL)hasProcessEventIndex;
-(unsigned)projectId;
-(TRILogTime *)deviceLogTime;
-(TRILogTime *)deviceTrackingTime;
-(unsigned long long)processEventIndex;
@end

