/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollections.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(void)initSupportedPayloads;
-(BOOL)setupH264Rules;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)selectPreferredRule:(id)arg1 screenSize:(CGSize)arg2 ;
-(BOOL)setupMacDecodingOnlyRules;
-(id)initForMacDecodingOnly;
@end

