/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSString;

@interface NLCRunner : NSObject {

	SCD_Struct_NL30 theCommand;
	SCD_Struct_NL31 session_cookie;
	BOOL simulationRunning;
	NSString* _interfaceName;

}

@property (nonatomic,retain) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)engage;
-(void)disableDNS;
-(void)enableDNS;
-(void)setUplinkPacketLossRate:(float)arg1 ;
-(void)setDownlinkPacketLossRate:(float)arg1 ;
-(void)disengage;
-(void)modifySimulation;
@end

