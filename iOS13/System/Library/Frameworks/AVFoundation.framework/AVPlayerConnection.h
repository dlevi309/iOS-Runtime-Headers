/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVWeakReference, NSError;

@interface AVPlayerConnection : NSObject {

	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	long long _status;
	NSError* _error;

}

@property (nonatomic,readonly) long long status; 
-(void)dealloc;
-(id)description;
-(id)error;
-(long long)status;
-(id)player;
-(id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 ;
-(BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1 ;
-(void)removeItemFromPlayQueue;
-(id)playerItem;
@end

