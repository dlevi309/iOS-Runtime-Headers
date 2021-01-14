/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNTCC.h>
#import <libobjc.A.dylib/CNTCCSettings.h>
#import <libobjc.A.dylib/CNTCCSimulation.h>

@protocol OS_tcc_message_options, OS_tcc_server, OS_tcc_service;
@class NSObject, NSNumber;

@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation> {

	NSObject*<OS_tcc_message_options> _syncOptions;
	NSObject*<OS_tcc_server> _server;
	NSObject*<OS_tcc_service> _service;
	NSNumber* _simulateStatus;
	NSNumber* _isUnitTestingOnSimulatorCachedValue;

}

@property (nonatomic,readonly) NSObject*<OS_tcc_message_options> syncOptions;              //@synthesize syncOptions=_syncOptions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_tcc_server> server;                            //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_tcc_service> service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNumber * simulateStatus;                                    //@synthesize simulateStatus=_simulateStatus - In the implementation block
@property (nonatomic,retain) NSNumber * isUnitTestingOnSimulatorCachedValue;               //@synthesize isUnitTestingOnSimulatorCachedValue=_isUnitTestingOnSimulatorCachedValue - In the implementation block
-(id)init;
-(long long)checkAuthorizationStatusOfAuditToken:(SCD_Struct_CN1)arg1 ;
-(NSNumber *)simulateStatus;
-(id)authorizationRecords;
-(void)setIsUnitTestingOnSimulatorCachedValue:(NSNumber *)arg1 ;
-(void)saveAuthorizationRecord:(id)arg1 ;
-(id)checkIfUnitTesting;
-(NSNumber *)isUnitTestingOnSimulatorCachedValue;
-(long long)checkAuthorizationStatusOfCurrentProcess;
-(NSObject*<OS_tcc_server>)server;
-(void)simulateStatus:(long long)arg1 ;
-(void)stopSimulation;
-(NSObject*<OS_tcc_message_options>)syncOptions;
-(void)setSimulateStatus:(NSNumber *)arg1 ;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isAuthorizationRestricted;
-(BOOL)isUnitTesting;
-(NSObject*<OS_tcc_service>)service;
-(id)authorizationRecordForBundleIdentifier:(id)arg1 ;
@end

