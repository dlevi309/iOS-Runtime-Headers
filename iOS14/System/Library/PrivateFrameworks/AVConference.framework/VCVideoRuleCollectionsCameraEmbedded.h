/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(double)preferredAspectRatio;
-(id)description;
-(void)dealloc;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(id)initWithHardwareSettings:(id)arg1 ;
-(VCBitrateConfiguration*)bitrateConfiguration;
-(BOOL)isPreferredVideoRule:(id)arg1 preferredFormat:(id)arg2 ;
-(VCHardwareConfiguration*)hardwareConfigurationForPayload:(int)arg1 transportType:(unsigned char)arg2 ;
-(BOOL)setupVideoRulesForPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 formatList:(VCVideoFormat*)arg4 formatListCount:(unsigned)arg5 preferredFormat:(id)arg6 supportsHighDef:(BOOL*)arg7 ;
-(BOOL)supportsHEVCWifiDecoding;
-(BOOL)supportsHEVCWifiEncoding;
@end

