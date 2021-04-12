/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSString, NSData;

@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue {

	NSString* _identifier;
	NSData* _customData;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * customData;                //@synthesize customData=_customData - In the implementation block
+(id)customDataQueueWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3 ;
-(id)description;
-(NSString *)identifier;
-(NSData *)customData;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3 ;
@end

