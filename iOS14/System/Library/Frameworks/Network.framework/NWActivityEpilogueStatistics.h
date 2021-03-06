/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


#import <Network/Network-Structs.h>
@class NSUUID, NWL2Report, NWDeviceReport, PBCodable, NSString;

@interface NWActivityEpilogueStatistics : NSObject {

	unsigned _awdMetricID;
	NSUUID* _externallyVisibleActivityUUID;
	NSUUID* _externallyVisibleParentUUID;
	NWL2Report* _layer2Report;
	NWDeviceReport* _deviceReport;
	PBCodable* _awdReport;
	NSUUID* _activityUUID;
	NSUUID* _parentUUID;
	nw_activity_epilogue_report_s _report;

}

@property (assign,nonatomic) nw_activity_epilogue_report_s report;                       //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                                      //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                                       //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,retain) NSUUID * activityUUID;                                      //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,retain) NSUUID * parentUUID;                                        //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,readonly) unsigned domain; 
@property (nonatomic,readonly) unsigned label; 
@property (nonatomic,readonly) BOOL retry; 
@property (nonatomic,readonly) unsigned long long investigation_identifier; 
@property (nonatomic,readonly) unsigned long long durationMsecs; 
@property (nonatomic,readonly) unsigned fragmentsQuenched; 
@property (nonatomic,readonly) int completionReason; 
@property (nonatomic,readonly) int underlyingErrorDomain; 
@property (nonatomic,readonly) int underlyingErrorCode; 
@property (nonatomic,retain) NSUUID * externallyVisibleActivityUUID;                     //@synthesize externallyVisibleActivityUUID=_externallyVisibleActivityUUID - In the implementation block
@property (nonatomic,retain) NSUUID * externallyVisibleParentUUID;                       //@synthesize externallyVisibleParentUUID=_externallyVisibleParentUUID - In the implementation block
@property (nonatomic,retain) NWL2Report * layer2Report;                                  //@synthesize layer2Report=_layer2Report - In the implementation block
@property (nonatomic,retain) NWDeviceReport * deviceReport;                              //@synthesize deviceReport=_deviceReport - In the implementation block
@property (nonatomic,retain) NSString * bundleID; 
+(id)createActivityEpilogue:(nw_activity_epilogue_report_s)arg1 ;
-(NSUUID *)activityUUID;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)retry;
-(void)setActivityUUID:(NSUUID *)arg1 ;
-(unsigned long long)investigation_identifier;
-(nw_activity_epilogue_report_s)report;
-(NSUUID *)parentUUID;
-(unsigned)domain;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(id)initWithPBCodableData:(id)arg1 ;
-(int)completionReason;
-(unsigned long long)durationMsecs;
-(unsigned)fragmentsQuenched;
-(int)underlyingErrorDomain;
-(int)underlyingErrorCode;
-(NWDeviceReport *)deviceReport;
-(NWL2Report *)layer2Report;
-(NSUUID *)externallyVisibleActivityUUID;
-(void)setExternallyVisibleActivityUUID:(NSUUID *)arg1 ;
-(id)initWithNWActivityEpilogueReport:(nw_activity_epilogue_report_s*)arg1 length:(unsigned long long)arg2 ;
-(void)setDeviceReport:(NWDeviceReport *)arg1 ;
-(NSString *)bundleID;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setReport:(nw_activity_epilogue_report_s)arg1 ;
-(void)setLayer2Report:(NWL2Report *)arg1 ;
-(NSUUID *)externallyVisibleParentUUID;
-(void)setExternallyVisibleParentUUID:(NSUUID *)arg1 ;
-(void)setParentUUID:(NSUUID *)arg1 ;
-(unsigned)label;
-(unsigned)awdMetricID;
@end

