/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

