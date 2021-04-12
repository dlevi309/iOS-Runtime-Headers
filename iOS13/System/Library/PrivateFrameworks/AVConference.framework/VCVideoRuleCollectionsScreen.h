/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollections.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupH264Rules;
-(BOOL)setupMacDecodingOnlyRules;
-(void)selectPreferredRule:(id)arg1 screenSize:(CGSize)arg2 ;
-(id)initForMacDecodingOnly;
@end

