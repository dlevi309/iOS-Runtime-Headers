/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


#import <Network/Network-Structs.h>
@class NSUUID, NWL2Report, NWDeviceReport, PBCodable;

@interface NWActivityStatistics : NSObject {

	unsigned _awdMetricID;
	NSUUID* _externallyVisibleActivityUUID;
	NSUUID* _externallyVisibleParentUUID;
	NWL2Report* _layer2Report;
	NWDeviceReport* _deviceReport;
	PBCodable* _awdReport;
	NSUUID* _activityUUID;
	NSUUID* _parentUUID;
	nw_activity_report_s _report;

}

@property (assign,nonatomic) nw_activity_report_s report;                                //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                                      //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                                       //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,retain) NSUUID * activityUUID;                                      //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,retain) NSUUID * parentUUID;                                        //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,readonly) unsigned domain; 
@property (nonatomic,readonly) unsigned label; 
@property (nonatomic,readonly) BOOL retry; 
@property (nonatomic,readonly) unsigned long long investigation_identifier; 
@property (nonatomic,retain) NSUUID * externallyVisibleActivityUUID;                     //@synthesize externallyVisibleActivityUUID=_externallyVisibleActivityUUID - In the implementation block
@property (nonatomic,retain) NSUUID * externallyVisibleParentUUID;                       //@synthesize externallyVisibleParentUUID=_externallyVisibleParentUUID - In the implementation block
@property (nonatomic,retain) NWL2Report * layer2Report;                                  //@synthesize layer2Report=_layer2Report - In the implementation block
@property (nonatomic,retain) NWDeviceReport * deviceReport;                              //@synthesize deviceReport=_deviceReport - In the implementation block
-(unsigned)domain;
-(unsigned)label;
-(unsigned long long)investigation_identifier;
-(nw_activity_report_s)report;
-(id)initWithPBCodableData:(id)arg1 ;
-(unsigned)awdMetricID;
-(PBCodable *)awdReport;
-(void)setActivityUUID:(NSUUID *)arg1 ;
-(NSUUID *)activityUUID;
-(NWDeviceReport *)deviceReport;
-(void)setDeviceReport:(NWDeviceReport *)arg1 ;
-(BOOL)retry;
-(NSUUID *)parentUUID;
-(id)initWithNWActivityReport:(nw_activity_report_s*)arg1 length:(unsigned long long)arg2 ;
-(NSUUID *)externallyVisibleActivityUUID;
-(void)setExternallyVisibleActivityUUID:(NSUUID *)arg1 ;
-(NSUUID *)externallyVisibleParentUUID;
-(void)setExternallyVisibleParentUUID:(NSUUID *)arg1 ;
-(NWL2Report *)layer2Report;
-(void)setLayer2Report:(NWL2Report *)arg1 ;
-(void)setReport:(nw_activity_report_s)arg1 ;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(void)setParentUUID:(NSUUID *)arg1 ;
@end

