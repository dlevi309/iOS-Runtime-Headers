/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@protocol OS_dispatch_queue;
@class CARSessionStatus, CRCarPlayAppBlacklist, NSObject;

@interface CRCarPlayAppPolicyEvaluator : NSObject {

	CARSessionStatus* _sessionStatus;
	BOOL _geoSupported;
	BOOL _geo_queue_geoSupported;
	BOOL _evaluatorWantsGeoManagement;
	CRCarPlayAppBlacklist* _blacklist;
	NSObject*<OS_dispatch_queue> _geoQueue;

}

@property (nonatomic,retain) CRCarPlayAppBlacklist * blacklist;                    //@synthesize blacklist=_blacklist - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> geoQueue;                //@synthesize geoQueue=_geoQueue - In the implementation block
@property (assign,nonatomic) BOOL geo_queue_geoSupported;                          //@synthesize geo_queue_geoSupported=_geo_queue_geoSupported - In the implementation block
@property (assign,nonatomic) BOOL evaluatorWantsGeoManagement;                     //@synthesize evaluatorWantsGeoManagement=_evaluatorWantsGeoManagement - In the implementation block
@property (assign,getter=isGeoSupported,nonatomic) BOOL geoSupported;              //@synthesize geoSupported=_geoSupported - In the implementation block
+(id)_carIntentIdentifiers;
+(id)allIntentIdentifiers;
-(id)_vehicleProtocolsForCertificateSerial:(id)arg1 ;
-(BOOL)_appWithDeclaration:(id)arg1 supportsAllIntents:(id)arg2 ;
-(BOOL)_checkIfDeclaration:(id)arg1 supportsIntents:(id)arg2 requireAllIntents:(BOOL)arg3 ;
-(id)init;
-(BOOL)_appWithDeclaration:(id)arg1 supportsAnyIntents:(id)arg2 ;
-(unsigned long long)_applicationCategoryForAppDeclaration:(id)arg1 policy:(id)arg2 ;
-(BOOL)evaluatorWantsGeoManagement;
-(NSObject*<OS_dispatch_queue>)geoQueue;
-(void)setGeoSupported:(BOOL)arg1 ;
-(void)setGeo_queue_geoSupported:(BOOL)arg1 ;
-(void)setWantsGeoSupported;
-(void)setBlacklist:(CRCarPlayAppBlacklist *)arg1 ;
-(BOOL)_vehicleProtocolsIntersectAppProtocols:(id)arg1 certificateSerial:(id)arg2 ;
-(void)setGeoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isGeoSupported;
-(BOOL)geo_queue_geoSupported;
-(id)effectivePolicyForAppDeclaration:(id)arg1 ;
-(void)updateGeoSupported;
-(id)currentSession;
-(id)effectivePolicyForAppDeclaration:(id)arg1 inVehicleWithCertificateSerial:(id)arg2 ;
-(CRCarPlayAppBlacklist *)blacklist;
-(void)setEvaluatorWantsGeoManagement:(BOOL)arg1 ;
-(void)fetchApplicationBundleIdentifiersForCarIntents:(/*^block*/id)arg1 ;
@end

