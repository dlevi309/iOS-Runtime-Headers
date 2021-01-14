/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface GKSConnectivitySettings : NSObject
+(void)setAddress:(id)arg1 forService:(id)arg2 ;
+(int)getWRMRSSIThresholdValue:(int)arg1 ;
+(id)getStorebagValueStorebagKey:(id)arg1 defaultValue:(id)arg2 ;
+(id)getAddressForService:(id)arg1 ;
+(void)setClientOptions:(id)arg1 ;
+(double)getNoRemoteDuplicationThresholdFast;
+(double)getLongTermValueWeightA;
+(id)getClientOption:(id)arg1 ;
+(BOOL)supportsEVSCodec;
+(int)getShortTermHistoryLength;
+(id)getStorebagValueForStorebagKey:(id)arg1 userDefaultKey:(CFStringRef)arg2 defaultValue:(id)arg3 isDoubleType:(BOOL)arg4 ;
+(double)getAdjustmentFactorC;
+(double)getLongTermValueWeightC;
+(double)getRemoteMediaStallTimeout;
+(int)getLongTermHistoryLength;
+(double)getShortTermValueWeightA;
+(double)getAdjustmentFactorA;
+(double)getAdaptiveLearningB;
+(void)clearAllSettingsWithRefreshIntervalInSeconds:(int)arg1 ;
+(BOOL)supportiRATRecommendation;
+(int)getNATTypeFromCarrierBundle;
+(tagIPPORT*)getCachedIPPort;
+(unsigned)getAbTestMasterLocalSwitches;
+(BOOL)supportsRedAudio;
+(double)getAdaptiveLearningA;
+(int)getNewSessionJoiningInterval;
+(int)getDecryptionTimeoutInterval;
+(int)getKeepAliveTimeoutFromCarrierBundle;
+(unsigned char)getAbTestingState;
+(void)setServerAddresses:(id)arg1 ;
+(int)getRateControllerType;
+(double)getShortTermValueWeightC;
+(int)getAdaptiveLearningState;
+(tagIPPORT*)getIPPortForService:(id)arg1 ;
+(double)getShortTermValueWeightB;
+(id)getTestGroupPermutations:(unsigned char)arg1 ;
+(double)getAdjustmentFactorB;
+(id)getVCRCSeverBagConfigWithKey:(id)arg1 ;
+(double)getThresholdForSwitch:(unsigned)arg1 ;
+(double)getLongTermValueWeightB;
+(id)getAllSettings;
+(BOOL)supportsHEVCEncoding;
-(id)init;
-(void)dealloc;
@end

