/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDWiFiMetricJoinTimeout, AWDWiFiMetricExtendedTrapInfo;

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
	int _reason;
	NSString* _reasonString;
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
	SCD_Struct_AW8 _has;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(unsigned)flags;
-(NSString *)function;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)lineNumber;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAvailable:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(int)available;
-(NSString *)fileName;
-(void)setLineNumber:(unsigned)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasEventId;
-(unsigned)eventId;
-(void)setEventId:(unsigned)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(BOOL)hasReason;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasFileName;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(unsigned)subreason;
-(void)setSubreason:(unsigned)arg1 ;
-(void)setHasSubreason:(BOOL)arg1 ;
-(BOOL)hasSubreason;
-(void)setWpsResponseType:(NSString *)arg1 ;
-(void)setWpsManufacturerElement:(NSString *)arg1 ;
-(void)setWpsModelName:(NSString *)arg1 ;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(void)setWpsPrimaryDeviceTypeCategory:(NSString *)arg1 ;
-(void)setWpsPrimaryDeviceTypeSubCategory:(NSString *)arg1 ;
-(void)setWpsDeviceNameElement:(NSString *)arg1 ;
-(void)setWpsDeviceNameData:(NSString *)arg1 ;
-(void)setWpsConfigMethods:(NSString *)arg1 ;
-(BOOL)hasWpsResponseType;
-(BOOL)hasWpsManufacturerElement;
-(BOOL)hasWpsModelName;
-(BOOL)hasWpsModelNumber;
-(BOOL)hasWpsPrimaryDeviceTypeCategory;
-(BOOL)hasWpsPrimaryDeviceTypeSubCategory;
-(BOOL)hasWpsDeviceNameElement;
-(BOOL)hasWpsDeviceNameData;
-(BOOL)hasWpsConfigMethods;
-(NSString *)wpsResponseType;
-(NSString *)wpsManufacturerElement;
-(NSString *)wpsModelName;
-(NSString *)wpsModelNumber;
-(NSString *)wpsPrimaryDeviceTypeCategory;
-(NSString *)wpsPrimaryDeviceTypeSubCategory;
-(NSString *)wpsDeviceNameElement;
-(NSString *)wpsDeviceNameData;
-(NSString *)wpsConfigMethods;
-(void)setDeviceIdentifierMap:(unsigned)arg1 ;
-(void)setHasDeviceIdentifierMap:(BOOL)arg1 ;
-(BOOL)hasDeviceIdentifierMap;
-(unsigned)deviceIdentifierMap;
-(void)setReasonString:(NSString *)arg1 ;
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
-(unsigned)minorReason;
-(NSString *)reasonString;
-(unsigned long long)programCounter;
-(unsigned long long)linkRegister;
-(AWDWiFiMetricExtendedTrapInfo *)trapInfo;
-(AWDWiFiMetricJoinTimeout *)joinTimeoutInfo;
@end

