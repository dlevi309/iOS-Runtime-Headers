/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {

	unsigned _encodeScore;
	unsigned _decodeScore;
	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(BOOL)useSoftFramerateSwitching;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(void)computeEncodingScore;
-(void)computeDecodingScore;
-(BOOL)setupH264WifiRules;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 ;
@end

