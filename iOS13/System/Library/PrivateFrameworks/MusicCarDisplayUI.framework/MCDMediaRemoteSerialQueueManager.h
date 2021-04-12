/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@class NSOperationQueue;

@interface MCDMediaRemoteSerialQueueManager : NSObject {

	NSOperationQueue* _mediaRemoteSerialQueue;

}

@property (nonatomic,retain) NSOperationQueue * mediaRemoteSerialQueue;              //@synthesize mediaRemoteSerialQueue=_mediaRemoteSerialQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)cancelAllOperations;
-(void)addOperation:(/*^block*/id)arg1 cancelAllOperations:(BOOL)arg2 ;
-(NSOperationQueue *)mediaRemoteSerialQueue;
-(void)setMediaRemoteSerialQueue:(NSOperationQueue *)arg1 ;
@end

