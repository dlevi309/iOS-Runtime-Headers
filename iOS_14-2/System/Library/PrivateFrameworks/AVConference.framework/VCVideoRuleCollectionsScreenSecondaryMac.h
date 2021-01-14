/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary {

	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(id)initWithHardwareSettings:(id)arg1 ;
-(unsigned)tilesPerFrame:(int)arg1 ;
@end

