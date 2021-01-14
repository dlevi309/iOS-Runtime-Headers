/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSString;

@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue {

	NSString* _stationStringID;

}

@property (nonatomic,readonly) NSString * stationStringID;              //@synthesize stationStringID=_stationStringID - In the implementation block
+(id)radioQueueWithContextID:(id)arg1 stationStringID:(id)arg2 ;
-(id)description;
-(NSString *)stationStringID;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(BOOL)supportedOnCurrentPlatform;
-(id)initWithContextID:(id)arg1 stationStringID:(id)arg2 ;
@end

