/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	int _underlyingErrorCode;
	int _underlyingErrorDomain;
	SCD_Struct_NW2 _has;

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
@property (assign,nonatomic) BOOL hasUnderlyingErrorDomain; 
@property (assign,nonatomic) int underlyingErrorDomain;                         //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorCode; 
@property (assign,nonatomic) int underlyingErrorCode;                           //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
-(NWAWDNWL2Report *)l2Report;
-(BOOL)hasDeviceReport;
-(id)dictionaryRepresentation;
-(NWAWDNWActivity *)activity;
-(void)setUnderlyingErrorDomain:(int)arg1 ;
-(void)setL2Report:(NWAWDNWL2Report *)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setActivity:(NWAWDNWActivity *)arg1 ;
-(id)description;
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
-(void)setHasUnderlyingErrorDomain:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorDomain;
-(void)setUnderlyingErrorCode:(int)arg1 ;
-(unsigned long long)durationMsecs;
-(void)setHasUnderlyingErrorCode:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorCode;
-(unsigned long long)fragmentsQuenched;
-(int)underlyingErrorDomain;
-(int)underlyingErrorCode;
-(NWAWDNWDeviceReport *)deviceReport;
-(void)setDeviceReport:(NWAWDNWDeviceReport *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasL2Report;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

