/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@class NSOperationQueue;

@interface MCDMediaRemoteSerialQueueManager : NSObject {

	NSOperationQueue* _mediaRemoteSerialQueue;

}

@property (nonatomic,retain) NSOperationQueue * mediaRemoteSerialQueue;              //@synthesize mediaRemoteSerialQueue=_mediaRemoteSerialQueue - In the implementation block
+(id)sharedInstance;
-(void)cancelAllOperations;
-(id)init;
-(void)addOperation:(/*^block*/id)arg1 cancelAllOperations:(BOOL)arg2 ;
-(NSOperationQueue *)mediaRemoteSerialQueue;
-(void)setMediaRemoteSerialQueue:(NSOperationQueue *)arg1 ;
@end

