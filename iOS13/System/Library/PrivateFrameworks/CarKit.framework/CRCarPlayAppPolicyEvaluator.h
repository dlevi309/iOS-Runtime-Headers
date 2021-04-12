/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class CARSessionStatus, CRCarPlayAppBlacklist;

@interface CRCarPlayAppPolicyEvaluator : NSObject {

	CARSessionStatus* _sessionStatus;
	BOOL _geoSupported;
	CRCarPlayAppBlacklist* _blacklist;

}

@property (nonatomic,retain) CRCarPlayAppBlacklist * blacklist;                    //@synthesize blacklist=_blacklist - In the implementation block
@property (assign,getter=isGeoSupported,nonatomic) BOOL geoSupported;              //@synthesize geoSupported=_geoSupported - In the implementation block
+(id)_carIntentIdentifiers;
-(id)init;
-(id)_sessionStatus;
-(BOOL)isGeoSupported;
-(void)setGeoSupported:(BOOL)arg1 ;
-(void)setBlacklist:(CRCarPlayAppBlacklist *)arg1 ;
-(id)_vehicleProtocolsForCertificateSerial:(id)arg1 ;
-(id)effectivePolicyForAppDeclaration:(id)arg1 inVehicleWithCertificateSerial:(id)arg2 ;
-(CRCarPlayAppBlacklist *)blacklist;
-(BOOL)_appWithDeclaration:(id)arg1 supportsAllIntents:(id)arg2 ;
-(BOOL)_vehicleProtocolsIntersectAppProtocols:(id)arg1 certificateSerial:(id)arg2 ;
-(BOOL)_appWithDeclaration:(id)arg1 supportsAnyIntents:(id)arg2 ;
-(unsigned long long)_applicationCategoryForAppDeclaration:(id)arg1 policy:(id)arg2 ;
-(id)effectivePolicyForAppDeclaration:(id)arg1 ;
-(void)fetchApplicationBundleIdentifiersForCarIntents:(/*^block*/id)arg1 ;
@end

