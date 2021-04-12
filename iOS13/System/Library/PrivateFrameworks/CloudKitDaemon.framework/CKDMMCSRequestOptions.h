/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSArray, NSData, NSDictionary, C2MetricOptions, CKOperationMMCSRequestOptions;

@interface CKDMMCSRequestOptions : NSObject {

	BOOL _allowsCellularAccess;
	BOOL _allowsPowerNapScheduling;
	BOOL _resolvedAutomaticallyRetryNetworkFailures;
	long long _databaseScope;
	long long _containerEnvironment;
	NSString* _topmostParentOperationID;
	NSString* _topmostParentOperationGroupID;
	NSString* _applicationBundleID;
	NSString* _applicationSecondaryID;
	NSString* _containerID;
	NSArray* _zoneNames;
	NSString* _deviceHardwareID;
	NSData* _authPutResponse;
	NSDictionary* _authPutResponseHeaders;
	long long _qualityOfService;
	long long _queuePriority;
	unsigned long long _resolvedDiscretionaryNetworkBehavior;
	unsigned long long _duetPreClearedMode;
	C2MetricOptions* _metricOptions;
	unsigned long long _networkServiceType;
	CKOperationMMCSRequestOptions* _MMCSRequestOptions;

}

@property (assign,nonatomic) long long databaseScope;                                              //@synthesize databaseScope=_databaseScope - In the implementation block
@property (assign,nonatomic) long long containerEnvironment;                                       //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (nonatomic,retain) NSString * topmostParentOperationID;                                  //@synthesize topmostParentOperationID=_topmostParentOperationID - In the implementation block
@property (nonatomic,retain) NSString * topmostParentOperationGroupID;                             //@synthesize topmostParentOperationGroupID=_topmostParentOperationGroupID - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                                       //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * applicationSecondaryID;                                    //@synthesize applicationSecondaryID=_applicationSecondaryID - In the implementation block
@property (nonatomic,retain) NSString * containerID;                                               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSArray * zoneNames;                                                  //@synthesize zoneNames=_zoneNames - In the implementation block
@property (nonatomic,retain) NSString * deviceHardwareID;                                          //@synthesize deviceHardwareID=_deviceHardwareID - In the implementation block
@property (nonatomic,retain) NSData * authPutResponse;                                             //@synthesize authPutResponse=_authPutResponse - In the implementation block
@property (nonatomic,retain) NSDictionary * authPutResponseHeaders;                                //@synthesize authPutResponseHeaders=_authPutResponseHeaders - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                            //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL allowsPowerNapScheduling;                                        //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                           //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) long long queuePriority;                                              //@synthesize queuePriority=_queuePriority - In the implementation block
@property (assign,nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures;                       //@synthesize resolvedAutomaticallyRetryNetworkFailures=_resolvedAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior;              //@synthesize resolvedDiscretionaryNetworkBehavior=_resolvedDiscretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long duetPreClearedMode;                                //@synthesize duetPreClearedMode=_duetPreClearedMode - In the implementation block
@property (nonatomic,retain) C2MetricOptions * metricOptions;                                      //@synthesize metricOptions=_metricOptions - In the implementation block
@property (assign,nonatomic) unsigned long long networkServiceType;                                //@synthesize networkServiceType=_networkServiceType - In the implementation block
@property (nonatomic,retain) CKOperationMMCSRequestOptions * MMCSRequestOptions;                   //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
-(id)description;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)queuePriority;
-(void)setQueuePriority:(long long)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSString *)applicationBundleID;
-(BOOL)allowsCellularAccess;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(unsigned long long)networkServiceType;
-(NSString *)containerID;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setDuetPreClearedMode:(unsigned long long)arg1 ;
-(unsigned long long)duetPreClearedMode;
-(BOOL)usesBackgroundSession;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(CKOperationMMCSRequestOptions *)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(void)setDeviceHardwareID:(NSString *)arg1 ;
-(NSString *)deviceHardwareID;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(long long)containerEnvironment;
-(void)setContainerEnvironment:(long long)arg1 ;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(BOOL)allowsPowerNapScheduling;
-(BOOL)resolvedAutomaticallyRetryNetworkFailures;
-(unsigned long long)resolvedDiscretionaryNetworkBehavior;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(NSData *)authPutResponse;
-(void)setAuthPutResponse:(NSData *)arg1 ;
-(void)setAuthPutResponseHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)authPutResponseHeaders;
-(void)setZoneNames:(NSArray *)arg1 ;
-(id)MMCSOptions;
-(NSString *)applicationSecondaryID;
-(NSString *)topmostParentOperationID;
-(NSString *)topmostParentOperationGroupID;
-(NSArray *)zoneNames;
-(void)setTopmostParentOperationID:(NSString *)arg1 ;
-(void)setTopmostParentOperationGroupID:(NSString *)arg1 ;
-(void)setApplicationSecondaryID:(NSString *)arg1 ;
-(void)setResolvedAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)setResolvedDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(C2MetricOptions *)metricOptions;
@end

