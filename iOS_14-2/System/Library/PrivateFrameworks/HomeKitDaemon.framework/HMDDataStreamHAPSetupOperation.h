/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDDataStreamSetupOperation.h>
#import <libobjc.A.dylib/HMDDataStreamSetupOperationMTU.h>

@interface HMDDataStreamHAPSetupOperation : HMDDataStreamSetupOperation <HMDDataStreamSetupOperationMTU> {

	unsigned long long _maxControllerTransportMTU;
	long long _sessionIdentifier;

}

@property (nonatomic,readonly) unsigned long long maxControllerTransportMTU;              //@synthesize maxControllerTransportMTU=_maxControllerTransportMTU - In the implementation block
@property (assign,nonatomic) long long sessionIdentifier;                                 //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
+(id)logCategory;
-(void)startSetup;
-(void)setSessionIdentifier:(long long)arg1 ;
-(long long)sessionIdentifier;
-(id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(BOOL)arg6 ;
-(void)processTransportSetupResponse:(id)arg1 ;
-(void)_readRequiredTransportCharacteristics;
-(unsigned long long)maxControllerTransportMTU;
-(void)setMaxControllerTransportMTU:(unsigned long long)arg1 ;
@end

