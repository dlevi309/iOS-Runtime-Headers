/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)customData;
-(id)description;
-(NSString *)identifier;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3 ;
@end

