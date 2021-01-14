/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollections.h>

@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {

	BOOL _encodeHighDef;
	BOOL _decodeHighDef;

}
+(id)sharedInstance;
-(double)preferredAspectRatio;
-(BOOL)useSoftFramerateSwitching;
-(BOOL)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 ;
-(BOOL)setupH264CellularRules;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 is1080:(BOOL)arg3 ;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 payload:(int)arg3 ;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 ;
-(BOOL)isHiDefCapable;
-(VCBitrateConfiguration*)bitrateConfiguration;
@end

