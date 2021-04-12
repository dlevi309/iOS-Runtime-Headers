/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <Announce/Announce-Structs.h>
#import <libobjc.A.dylib/ANAnalyticsAssistantProtocol.h>

@interface ANAnalyticsAssistant : NSObject <ANAnalyticsAssistantProtocol>
-(id)_playerForAnnouncement:(id)arg1 ;
-(int)_linearBucketAtInterval:(double)arg1 value:(double)arg2 max:(double)arg3 ;
-(ANAnalyticsAssistantAudioData)audioDataForAnnouncement:(id)arg1 ;
-(ANAnalyticsAssistantSenderData)senderDataForAnnouncement:(id)arg1 ;
-(long long)boundGroupCount:(long long)arg1 ;
-(long long)bucketFromSize:(long long)arg1 ;
-(long long)bucketFromDuration:(double)arg1 ;
-(long long)bucketFromReceiveTime:(double)arg1 ;
@end

