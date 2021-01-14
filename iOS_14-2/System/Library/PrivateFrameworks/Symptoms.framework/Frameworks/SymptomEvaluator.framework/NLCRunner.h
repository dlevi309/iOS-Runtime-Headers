/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSString;

@interface NLCRunner : NSObject {

	SCD_Struct_NL35 theCommand;
	SCD_Struct_NL36 session_cookie;
	BOOL simulationRunning;
	NSString* _interfaceName;

}

@property (nonatomic,retain) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)engage;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)disableDNS;
-(void)enableDNS;
-(void)setUplinkPacketLossRate:(float)arg1 ;
-(void)setDownlinkPacketLossRate:(float)arg1 ;
-(void)disengage;
-(void)modifySimulation;
@end

