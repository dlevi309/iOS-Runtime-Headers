/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAWDNWActivity, NWAWDNWDeviceReport, NWAWDNWL2Report;

@interface NWAWDNWActivityEpilogue : PBCodable <NSCopying> {

	unsigned long long _durationMsecs;
	unsigned long long _fragmentsQuenched;
	unsigned long long _timestamp;
	NWAWDNWActivity* _activity;
	int _completionReason;
	NWAWDNWDeviceReport* _deviceReport;
	NWAWDNWL2Report* _l2Report;
	SCD_Struct_NW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasActivity; 
@property (nonatomic,retain) NWAWDNWActivity * activity;                        //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMsecs; 
@property (assign,nonatomic) unsigned long long durationMsecs;                  //@synthesize durationMsecs=_durationMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasFragmentsQuenched; 
@property (assign,nonatomic) unsigned long long fragmentsQuenched;              //@synthesize fragmentsQuenched=_fragmentsQuenched - In the implementation block
@property (assign,nonatomic) BOOL hasCompletionReason; 
@property (assign,nonatomic) int completionReason;                              //@synthesize completionReason=_completionReason - In the implementation block
@property (nonatomic,readonly) BOOL hasL2Report; 
@property (nonatomic,retain) NWAWDNWL2Report * l2Report;                        //@synthesize l2Report=_l2Report - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceReport; 
@property (nonatomic,retain) NWAWDNWDeviceReport * deviceReport;                //@synthesize deviceReport=_deviceReport - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NWAWDNWActivity *)activity;
-(void)setActivity:(NWAWDNWActivity *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasL2Report;
-(BOOL)hasDeviceReport;
-(NWAWDNWL2Report *)l2Report;
-(void)setL2Report:(NWAWDNWL2Report *)arg1 ;
-(NWAWDNWDeviceReport *)deviceReport;
-(void)setDeviceReport:(NWAWDNWDeviceReport *)arg1 ;
-(BOOL)hasActivity;
-(void)setDurationMsecs:(unsigned long long)arg1 ;
-(void)setHasDurationMsecs:(BOOL)arg1 ;
-(BOOL)hasDurationMsecs;
-(void)setFragmentsQuenched:(unsigned long long)arg1 ;
-(void)setHasFragmentsQuenched:(BOOL)arg1 ;
-(BOOL)hasFragmentsQuenched;
-(int)completionReason;
-(void)setCompletionReason:(int)arg1 ;
-(void)setHasCompletionReason:(BOOL)arg1 ;
-(BOOL)hasCompletionReason;
-(id)completionReasonAsString:(int)arg1 ;
-(int)StringAsCompletionReason:(id)arg1 ;
-(unsigned long long)durationMsecs;
-(unsigned long long)fragmentsQuenched;
@end

