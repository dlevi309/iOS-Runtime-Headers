/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID, NSData, NSString;

@interface HDFitnessMachineSimulatorSupport : NSObject {

	unsigned long long _fitnessMachineType;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) unsigned long long fitnessMachineType;              //@synthesize fitnessMachineType=_fitnessMachineType - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSData * btIdentifierData; 
@property (nonatomic,readonly) NSString * btIdentifier; 
-(NSUUID *)uuid;
-(id)initWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)updateAdvertisementDataForSimulation:(id)arg1 ;
-(NSData *)btIdentifierData;
-(NSString *)btIdentifier;
-(unsigned long long)fitnessMachineType;
@end

