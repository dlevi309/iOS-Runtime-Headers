/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSArray;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand {

	NSMutableSet* _registeredQueueTypes;
	NSMutableSet* _registeredCustomQueueIdentifiers;
	BOOL _supportsSharedQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSArray* _supportedInsertionPositions;

}

@property (nonatomic,copy) NSArray * supportedInsertionPositions;              //@synthesize supportedInsertionPositions=_supportedInsertionPositions - In the implementation block
-(NSArray *)supportedInsertionPositions;
-(void)setSupportedInsertionPositions:(NSArray *)arg1 ;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)registerSupportedQueueType:(long long)arg1 ;
-(void)unregisterSupportedQueueType:(long long)arg1 ;
-(void)registerSupportedCustomQueueIdentifier:(id)arg1 ;
-(void)unregisterSupportedCustomQueueIdentifier:(id)arg1 ;
-(void)setSupportedSharedQueue:(BOOL)arg1 ;
@end

