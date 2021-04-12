/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class C2MPCloudKitInfo, C2MPDeviceInfo, C2MPGenericEvent, C2MPNetworkEvent, NSString, C2MPServerInfo;

@interface C2MPMetric : PBCodable <NSCopying> {

	unsigned long long _reportFrequency;
	unsigned long long _reportFrequencyBase;
	unsigned long long _triggers;
	C2MPCloudKitInfo* _cloudkitInfo;
	C2MPDeviceInfo* _deviceInfo;
	C2MPGenericEvent* _genericEvent;
	int _metricType;
	C2MPNetworkEvent* _networkEvent;
	NSString* _reportTransportSourceApplicationBundleIdentifier;
	NSString* _reportTransportSourceApplicationSecondaryIdentifier;
	C2MPServerInfo* _serverInfo;
	BOOL _reportTransportAllowExpensiveAccess;
	BOOL _reportTransportAllowPowerNapScheduling;
	SCD_Struct_C26 _has;

}

@property (assign,nonatomic) BOOL hasMetricType; 
@property (assign,nonatomic) int metricType;                                                              //@synthesize metricType=_metricType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfo; 
@property (nonatomic,retain) C2MPDeviceInfo * deviceInfo;                                                 //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudkitInfo; 
@property (nonatomic,retain) C2MPCloudKitInfo * cloudkitInfo;                                             //@synthesize cloudkitInfo=_cloudkitInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasServerInfo; 
@property (nonatomic,retain) C2MPServerInfo * serverInfo;                                                 //@synthesize serverInfo=_serverInfo - In the implementation block
@property (assign,nonatomic) BOOL hasTriggers; 
@property (assign,nonatomic) unsigned long long triggers;                                                 //@synthesize triggers=_triggers - In the implementation block
@property (assign,nonatomic) BOOL hasReportFrequency; 
@property (assign,nonatomic) unsigned long long reportFrequency;                                          //@synthesize reportFrequency=_reportFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasReportFrequencyBase; 
@property (assign,nonatomic) unsigned long long reportFrequencyBase;                                      //@synthesize reportFrequencyBase=_reportFrequencyBase - In the implementation block
@property (assign,nonatomic) BOOL hasReportTransportAllowExpensiveAccess; 
@property (assign,nonatomic) BOOL reportTransportAllowExpensiveAccess;                                    //@synthesize reportTransportAllowExpensiveAccess=_reportTransportAllowExpensiveAccess - In the implementation block
@property (assign,nonatomic) BOOL hasReportTransportAllowPowerNapScheduling; 
@property (assign,nonatomic) BOOL reportTransportAllowPowerNapScheduling;                                 //@synthesize reportTransportAllowPowerNapScheduling=_reportTransportAllowPowerNapScheduling - In the implementation block
@property (nonatomic,readonly) BOOL hasReportTransportSourceApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * reportTransportSourceApplicationBundleIdentifier;                 //@synthesize reportTransportSourceApplicationBundleIdentifier=_reportTransportSourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasReportTransportSourceApplicationSecondaryIdentifier; 
@property (nonatomic,retain) NSString * reportTransportSourceApplicationSecondaryIdentifier;              //@synthesize reportTransportSourceApplicationSecondaryIdentifier=_reportTransportSourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkEvent; 
@property (nonatomic,retain) C2MPNetworkEvent * networkEvent;                                             //@synthesize networkEvent=_networkEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasGenericEvent; 
@property (nonatomic,retain) C2MPGenericEvent * genericEvent;                                             //@synthesize genericEvent=_genericEvent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)metricType;
-(void)setMetricType:(int)arg1 ;
-(void)setHasMetricType:(BOOL)arg1 ;
-(BOOL)hasMetricType;
-(id)metricTypeAsString:(int)arg1 ;
-(int)StringAsMetricType:(id)arg1 ;
-(C2MPNetworkEvent *)networkEvent;
-(void)setNetworkEvent:(C2MPNetworkEvent *)arg1 ;
-(BOOL)hasNetworkEvent;
-(C2MPDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(C2MPDeviceInfo *)arg1 ;
-(unsigned long long)triggers;
-(C2MPServerInfo *)serverInfo;
-(void)setServerInfo:(C2MPServerInfo *)arg1 ;
-(BOOL)hasTriggers;
-(void)setTriggers:(unsigned long long)arg1 ;
-(BOOL)hasDeviceInfo;
-(void)setReportFrequency:(unsigned long long)arg1 ;
-(void)setReportFrequencyBase:(unsigned long long)arg1 ;
-(BOOL)hasServerInfo;
-(unsigned long long)reportFrequency;
-(unsigned long long)reportFrequencyBase;
-(void)setHasTriggers:(BOOL)arg1 ;
-(void)setHasReportFrequency:(BOOL)arg1 ;
-(BOOL)hasReportFrequency;
-(void)setHasReportFrequencyBase:(BOOL)arg1 ;
-(BOOL)hasReportFrequencyBase;
-(void)setCloudkitInfo:(C2MPCloudKitInfo *)arg1 ;
-(void)setReportTransportAllowExpensiveAccess:(BOOL)arg1 ;
-(void)setReportTransportAllowPowerNapScheduling:(BOOL)arg1 ;
-(void)setReportTransportSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setReportTransportSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setGenericEvent:(C2MPGenericEvent *)arg1 ;
-(BOOL)hasCloudkitInfo;
-(void)setHasReportTransportAllowExpensiveAccess:(BOOL)arg1 ;
-(BOOL)hasReportTransportAllowExpensiveAccess;
-(void)setHasReportTransportAllowPowerNapScheduling:(BOOL)arg1 ;
-(BOOL)hasReportTransportAllowPowerNapScheduling;
-(BOOL)hasReportTransportSourceApplicationBundleIdentifier;
-(BOOL)hasReportTransportSourceApplicationSecondaryIdentifier;
-(BOOL)hasGenericEvent;
-(C2MPCloudKitInfo *)cloudkitInfo;
-(BOOL)reportTransportAllowExpensiveAccess;
-(BOOL)reportTransportAllowPowerNapScheduling;
-(NSString *)reportTransportSourceApplicationBundleIdentifier;
-(NSString *)reportTransportSourceApplicationSecondaryIdentifier;
-(C2MPGenericEvent *)genericEvent;
@end

