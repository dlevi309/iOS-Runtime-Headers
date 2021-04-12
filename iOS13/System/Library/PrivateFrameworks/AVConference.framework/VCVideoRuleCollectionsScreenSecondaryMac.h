/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary {

	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(unsigned)tilesPerFrame:(int)arg1 ;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
@end

