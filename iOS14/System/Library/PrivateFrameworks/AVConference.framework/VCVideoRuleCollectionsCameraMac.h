/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)preferredAspectRatio;
-(void)dealloc;
-(BOOL)useSoftFramerateSwitching;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)computeEncodingScore;
-(void)computeDecodingScore;
-(BOOL)setupH264WifiRules;
-(BOOL)setUp1080pRules:(int)arg1 ;
-(void)_removeRulesGreaterThanVGA;
-(void)_addWVGAEncodingRules;
-(void)_removeRulesGreaterThan720p;
-(void)_resetJ92EncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 is1080:(BOOL)arg3 ;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 is1080:(BOOL)arg3 ;
@end

