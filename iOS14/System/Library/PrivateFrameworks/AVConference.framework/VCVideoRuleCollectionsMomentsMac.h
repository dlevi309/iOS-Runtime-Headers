/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCVideoRuleCollectionsMoments.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments {

	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(int)getMomentsCapabilities;
-(id)initWithHardwareSettings:(id)arg1 ;
-(id)getMomentsVideoCodecs;
-(id)getMomentsImageTypes;
@end

