/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4 ;
-(void)unregisterSupportedQueueType:(long long)arg1 ;
-(void)setUpNextItemCount:(long long)arg1 ;
-(void)registerSupportedCustomQueueIdentifier:(id)arg1 ;
-(long long)upNextItemCount;
-(id)_mediaRemoteCommandInfoOptions;
-(void)registerSupportedQueueType:(long long)arg1 ;
-(void)setSupportedSharedQueue:(BOOL)arg1 ;
-(void)unregisterSpecializedQueueIdentifier:(id)arg1 ;
-(void)unregisterSupportedCustomQueueIdentifier:(id)arg1 ;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
@end

