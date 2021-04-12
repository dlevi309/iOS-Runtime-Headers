/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)description;
-(double)preferredAspectRatio;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(VCBitrateConfiguration*)bitrateConfiguration;
-(VCHardwareConfiguration*)hardwareConfigurationForPayload:(int)arg1 transportType:(unsigned char)arg2 ;
-(BOOL)setupVideoRulesForPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 formatList:(VCVideoFormat*)arg4 formatListCount:(unsigned)arg5 preferredFormat:(id)arg6 supportsHighDef:(BOOL*)arg7 ;
-(BOOL)supportsHEVCWifiDecoding;
-(BOOL)supportsHEVCWifiEncoding;
@end

