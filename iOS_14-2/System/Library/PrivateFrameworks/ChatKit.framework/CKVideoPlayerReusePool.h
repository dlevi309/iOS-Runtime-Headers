/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableArray;

@interface CKVideoPlayerReusePool : NSObject {

	NSMutableArray* _pool;

}

@property (nonatomic,retain) NSMutableArray * pool;              //@synthesize pool=_pool - In the implementation block
+(id)sharedPool;
-(NSMutableArray *)pool;
-(id)init;
-(void)lowMemoryWarningReceived:(id)arg1 ;
-(id)_dequeuePlayerAtIndex:(long long)arg1 ;
-(void)returnPlayerToPool:(id)arg1 ;
-(id)existingVideoPlayerForTransferGUID:(id)arg1 ;
-(long long)indexOfAvailablePlayer;
-(long long)indexOfPlayerWithGUID:(id)arg1 ;
-(void)removeUneededVideoPlayers;
-(id)dequeueAvailableVideoPlayer;
-(void)setPool:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

