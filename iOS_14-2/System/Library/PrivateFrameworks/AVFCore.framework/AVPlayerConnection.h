/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVWeakReference, NSError;

@interface AVPlayerConnection : NSObject {

	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	long long _status;
	NSError* _error;

}

@property (nonatomic,readonly) long long status; 
-(id)player;
-(void)removeItemFromPlayQueue;
-(id)error;
-(BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1 ;
-(id)description;
-(id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 ;
-(id)playerItem;
-(long long)status;
-(void)dealloc;
@end

