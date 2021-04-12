/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRILogTime, NSString;

@interface TRILogContext : PBCodable <NSCopying> {

	TRILogTime* _deviceLogTime;
	TRILogTime* _deviceTrackingTime;
	unsigned _projectId;
	NSString* _trackingId;
	SCD_Struct_TR1 _has;

}

@property (assign,nonatomic) BOOL hasProjectId; 
@property (assign,nonatomic) unsigned projectId;                           //@synthesize projectId=_projectId - In the implementation block
@property (nonatomic,readonly) BOOL hasTrackingId; 
@property (nonatomic,retain) NSString * trackingId;                        //@synthesize trackingId=_trackingId - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLogTime; 
@property (nonatomic,retain) TRILogTime * deviceLogTime;                   //@synthesize deviceLogTime=_deviceLogTime - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceTrackingTime; 
@property (nonatomic,retain) TRILogTime * deviceTrackingTime;              //@synthesize deviceTrackingTime=_deviceTrackingTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)trackingId;
-(unsigned)projectId;
-(BOOL)hasTrackingId;
-(void)setDeviceLogTime:(TRILogTime *)arg1 ;
-(void)setDeviceTrackingTime:(TRILogTime *)arg1 ;
-(void)setTrackingId:(NSString *)arg1 ;
-(void)setProjectId:(unsigned)arg1 ;
-(void)setHasProjectId:(BOOL)arg1 ;
-(BOOL)hasProjectId;
-(BOOL)hasDeviceLogTime;
-(BOOL)hasDeviceTrackingTime;
-(TRILogTime *)deviceLogTime;
-(TRILogTime *)deviceTrackingTime;
@end

