/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {

	NSMutableDictionary* _registeredSpecializedQueues;
	NSMutableSet* _registeredQueueTypes;
	NSMutableSet* _registeredCustomQueueIdentifiers;
	BOOL _supportsSharedQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	long long _upNextItemCount;

}

@property (assign,nonatomic) long long upNextItemCount;              //@synthesize upNextItemCount=_upNextItemCount - In the implementation block
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setUpNextItemCount:(long long)arg1 ;
-(void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4 ;
-(void)unregisterSpecializedQueueIdentifier:(id)arg1 ;
-(void)registerSupportedQueueType:(long long)arg1 ;
-(void)unregisterSupportedQueueType:(long long)arg1 ;
-(void)registerSupportedCustomQueueIdentifier:(id)arg1 ;
-(void)unregisterSupportedCustomQueueIdentifier:(id)arg1 ;
-(void)setSupportedSharedQueue:(BOOL)arg1 ;
-(long long)upNextItemCount;
@end

