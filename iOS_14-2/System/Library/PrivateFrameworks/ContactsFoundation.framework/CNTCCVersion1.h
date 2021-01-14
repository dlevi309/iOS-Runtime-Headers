/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNTCC.h>
#import <libobjc.A.dylib/CNTCCSettings.h>
#import <libobjc.A.dylib/CNTCCSimulation.h>

@class NSNumber;

@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation> {

	NSNumber* _simulateStatus;
	NSNumber* _isUnitTestingOnSimulatorCachedValue;

}

@property (nonatomic,retain) NSNumber * simulateStatus;                                   //@synthesize simulateStatus=_simulateStatus - In the implementation block
@property (nonatomic,retain) NSNumber * isUnitTestingOnSimulatorCachedValue;              //@synthesize isUnitTestingOnSimulatorCachedValue=_isUnitTestingOnSimulatorCachedValue - In the implementation block
+(id)createAppAuthorizationRecordFromTCCAppInfo:(id)arg1 bundleIdentifier:(id)arg2 ;
-(long long)checkAuthorizationStatusOfAuditToken:(SCD_Struct_CN1)arg1 ;
-(NSNumber *)simulateStatus;
-(id)authorizationRecords;
-(void)setIsUnitTestingOnSimulatorCachedValue:(NSNumber *)arg1 ;
-(void)saveAuthorizationRecord:(id)arg1 ;
-(id)checkIfUnitTesting;
-(NSNumber *)isUnitTestingOnSimulatorCachedValue;
-(long long)checkAuthorizationStatusOfCurrentProcess;
-(void)simulateStatus:(long long)arg1 ;
-(void)stopSimulation;
-(void)setSimulateStatus:(NSNumber *)arg1 ;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isAuthorizationRestricted;
-(BOOL)isUnitTesting;
-(id)authorizationRecordForBundleIdentifier:(id)arg1 ;
@end

