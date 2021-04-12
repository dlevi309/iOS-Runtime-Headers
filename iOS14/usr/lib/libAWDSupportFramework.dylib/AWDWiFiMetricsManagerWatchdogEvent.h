/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDWiFiMetricJoinTimeout, NSData, AWDWiFiMetricExtendedTrapInfo;

@interface AWDWiFiMetricsManagerWatchdogEvent : PBCodable <NSCopying> {

	SCD_Struct_AW24* _backTraces;
	unsigned long long _linkRegister;
	unsigned long long _programCounter;
	unsigned long long _timestamp;
	int _available;
	unsigned _deviceIdentifierMap;
	unsigned _eventId;
	NSString* _fileName;
	unsigned _flags;
	NSString* _function;
	AWDWiFiMetricJoinTimeout* _joinTimeoutInfo;
	unsigned _lineNumber;
	unsigned _minorReason;
	NSData* _oui;
	int _reason;
	NSString* _reasonString;
	unsigned _recoveryLatency;
	unsigned _subreason;
	AWDWiFiMetricExtendedTrapInfo* _trapInfo;
	unsigned _version;
	NSString* _wpsConfigMethods;
	NSString* _wpsDeviceNameData;
	NSString* _wpsDeviceNameElement;
	NSString* _wpsManufacturerElement;
	NSString* _wpsModelName;
	NSString* _wpsModelNumber;
	NSString* _wpsPrimaryDeviceTypeCategory;
	NSString* _wpsPrimaryDeviceTypeSubCategory;
	NSString* _wpsResponseType;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                        //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasAvailable; 
@property (assign,nonatomic) int available;                                           //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasSubreason; 
@property (assign,nonatomic) unsigned subreason;                                      //@synthesize subreason=_subreason - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceIdentifierMap; 
@property (assign,nonatomic) unsigned deviceIdentifierMap;                            //@synthesize deviceIdentifierMap=_deviceIdentifierMap - In the implementation block
@property (assign,nonatomic) BOOL hasEventId; 
@property (assign,nonatomic) unsigned eventId;                                        //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) BOOL hasMinorReason; 
@property (assign,nonatomic) unsigned minorReason;                                    //@synthesize minorReason=_minorReason - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonString; 
@property (nonatomic,retain) NSString * reasonString;                                 //@synthesize reasonString=_reasonString - In the implementation block
@property (assign,nonatomic) BOOL hasProgramCounter; 
@property (assign,nonatomic) unsigned long long programCounter;                       //@synthesize programCounter=_programCounter - In the implementation block
@property (assign,nonatomic) BOOL hasLinkRegister; 
@property (assign,nonatomic) unsigned long long linkRegister;                         //@synthesize linkRegister=_linkRegister - In the implementation block
@property (nonatomic,readonly) unsigned long long backTracesCount; 
@property (nonatomic,readonly) unsigned long long* backTraces; 
@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;                                     //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) BOOL hasFunction; 
@property (nonatomic,retain) NSString * function;                                     //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) BOOL hasLineNumber; 
@property (assign,nonatomic) unsigned lineNumber;                                     //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasTrapInfo; 
@property (nonatomic,retain) AWDWiFiMetricExtendedTrapInfo * trapInfo;                //@synthesize trapInfo=_trapInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasJoinTimeoutInfo; 
@property (nonatomic,retain) AWDWiFiMetricJoinTimeout * joinTimeoutInfo;              //@synthesize joinTimeoutInfo=_joinTimeoutInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsResponseType; 
@property (nonatomic,retain) NSString * wpsResponseType;                              //@synthesize wpsResponseType=_wpsResponseType - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsManufacturerElement; 
@property (nonatomic,retain) NSString * wpsManufacturerElement;                       //@synthesize wpsManufacturerElement=_wpsManufacturerElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelName; 
@property (nonatomic,retain) NSString * wpsModelName;                                 //@synthesize wpsModelName=_wpsModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelNumber; 
@property (nonatomic,retain) NSString * wpsModelNumber;                               //@synthesize wpsModelNumber=_wpsModelNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeCategory;                 //@synthesize wpsPrimaryDeviceTypeCategory=_wpsPrimaryDeviceTypeCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeSubCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeSubCategory;              //@synthesize wpsPrimaryDeviceTypeSubCategory=_wpsPrimaryDeviceTypeSubCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameElement; 
@property (nonatomic,retain) NSString * wpsDeviceNameElement;                         //@synthesize wpsDeviceNameElement=_wpsDeviceNameElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameData; 
@property (nonatomic,retain) NSString * wpsDeviceNameData;                            //@synthesize wpsDeviceNameData=_wpsDeviceNameData - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsConfigMethods; 
@property (nonatomic,retain) NSString * wpsConfigMethods;                             //@synthesize wpsConfigMethods=_wpsConfigMethods - In the implementation block
@property (assign,nonatomic) BOOL hasRecoveryLatency; 
@property (assign,nonatomic) unsigned recoveryLatency;                                //@synthesize recoveryLatency=_recoveryLatency - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                                            //@synthesize oui=_oui - In the implementation block
-(void)setAvailable:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSData *)oui;
-(BOOL)hasVersion;
-(BOOL)hasReason;
-(BOOL)hasWpsDeviceNameData;
-(NSString *)wpsResponseType;
-(int)available;
-(void)setSubreason:(unsigned)arg1 ;
-(void)setWpsDeviceNameData:(NSString *)arg1 ;
-(NSString *)wpsPrimaryDeviceTypeSubCategory;
-(BOOL)hasWpsManufacturerElement;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)hasFileName;
-(BOOL)hasWpsModelNumber;
-(NSString *)function;
-(unsigned long long)timestamp;
-(unsigned)lineNumber;
-(void)setOui:(NSData *)arg1 ;
-(unsigned)flags;
-(BOOL)hasWpsDeviceNameElement;
-(void)setHasSubreason:(BOOL)arg1 ;
-(unsigned)eventId;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)wpsConfigMethods;
-(void)setHasReason:(BOOL)arg1 ;
-(NSString *)wpsModelName;
-(void)setWpsDeviceNameElement:(NSString *)arg1 ;
-(NSString *)fileName;
-(void)setLineNumber:(unsigned)arg1 ;
-(void)setEventId:(unsigned)arg1 ;
-(id)description;
-(void)setWpsConfigMethods:(NSString *)arg1 ;
-(void)setWpsResponseType:(NSString *)arg1 ;
-(BOOL)hasOui;
-(void)setFunction:(NSString *)arg1 ;
-(int)reason;
-(BOOL)hasEventId;
-(NSString *)wpsDeviceNameData;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setWpsModelName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasWpsPrimaryDeviceTypeCategory;
-(void)setWpsPrimaryDeviceTypeSubCategory:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasFlags;
-(NSString *)wpsDeviceNameElement;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasWpsResponseType;
-(BOOL)hasSubreason;
-(void)setVersion:(unsigned)arg1 ;
-(NSString *)wpsModelNumber;
-(void)copyTo:(id)arg1 ;
-(NSString *)wpsManufacturerElement;
-(void)writeTo:(id)arg1 ;
-(unsigned)subreason;
-(void)setReason:(int)arg1 ;
-(BOOL)hasWpsConfigMethods;
-(BOOL)hasWpsModelName;
-(void)setWpsManufacturerElement:(NSString *)arg1 ;
-(unsigned)version;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasWpsPrimaryDeviceTypeSubCategory;
-(NSString *)wpsPrimaryDeviceTypeCategory;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setWpsPrimaryDeviceTypeCategory:(NSString *)arg1 ;
-(void)setHasFlags:(BOOL)arg1 ;
-(NSString *)reasonString;
-(void)setReasonString:(NSString *)arg1 ;
-(void)setDeviceIdentifierMap:(unsigned)arg1 ;
-(void)setHasDeviceIdentifierMap:(BOOL)arg1 ;
-(BOOL)hasDeviceIdentifierMap;
-(unsigned)deviceIdentifierMap;
-(void)setTrapInfo:(AWDWiFiMetricExtendedTrapInfo *)arg1 ;
-(void)setJoinTimeoutInfo:(AWDWiFiMetricJoinTimeout *)arg1 ;
-(unsigned long long)backTracesCount;
-(void)clearBackTraces;
-(unsigned long long)backTraceAtIndex:(unsigned long long)arg1 ;
-(void)addBackTrace:(unsigned long long)arg1 ;
-(void)setHasAvailable:(BOOL)arg1 ;
-(BOOL)hasAvailable;
-(void)setHasEventId:(BOOL)arg1 ;
-(void)setMinorReason:(unsigned)arg1 ;
-(void)setHasMinorReason:(BOOL)arg1 ;
-(BOOL)hasMinorReason;
-(BOOL)hasReasonString;
-(void)setProgramCounter:(unsigned long long)arg1 ;
-(void)setHasProgramCounter:(BOOL)arg1 ;
-(BOOL)hasProgramCounter;
-(void)setLinkRegister:(unsigned long long)arg1 ;
-(void)setHasLinkRegister:(BOOL)arg1 ;
-(BOOL)hasLinkRegister;
-(unsigned long long*)backTraces;
-(void)setBackTraces:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasFunction;
-(void)setHasLineNumber:(BOOL)arg1 ;
-(BOOL)hasLineNumber;
-(BOOL)hasTrapInfo;
-(BOOL)hasJoinTimeoutInfo;
-(void)setRecoveryLatency:(unsigned)arg1 ;
-(void)setHasRecoveryLatency:(BOOL)arg1 ;
-(BOOL)hasRecoveryLatency;
-(unsigned)minorReason;
-(unsigned long long)programCounter;
-(unsigned long long)linkRegister;
-(AWDWiFiMetricExtendedTrapInfo *)trapInfo;
-(AWDWiFiMetricJoinTimeout *)joinTimeoutInfo;
-(unsigned)recoveryLatency;
@end

