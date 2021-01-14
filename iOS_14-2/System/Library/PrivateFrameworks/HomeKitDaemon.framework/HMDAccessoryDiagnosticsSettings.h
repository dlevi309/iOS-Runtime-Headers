/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class HMDService, HAPSupportedDiagnosticsSnapshot, NSString;

@interface HMDAccessoryDiagnosticsSettings : NSObject {

	HMDService* _diagnosticsService;
	HAPSupportedDiagnosticsSnapshot* _currentSnapshot;
	NSString* _transport;

}

@property (readonly) HMDService * diagnosticsService;                              //@synthesize diagnosticsService=_diagnosticsService - In the implementation block
@property (retain) HAPSupportedDiagnosticsSnapshot * currentSnapshot;              //@synthesize currentSnapshot=_currentSnapshot - In the implementation block
@property (readonly) NSString * transport;                                         //@synthesize transport=_transport - In the implementation block
-(HAPSupportedDiagnosticsSnapshot *)currentSnapshot;
-(NSString *)transport;
-(void)setCurrentSnapshot:(HAPSupportedDiagnosticsSnapshot *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(id)attributeDescriptions;
-(HMDService *)diagnosticsService;
@end

