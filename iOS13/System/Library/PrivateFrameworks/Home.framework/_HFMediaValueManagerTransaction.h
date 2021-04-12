/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NAFuture, NSNumber;

@interface _HFMediaValueManagerTransaction : NSObject {

	NAFuture* _writeFuture;
	long long _playbackState;
	NSNumber* _transactionNumber;

}

@property (nonatomic,retain) NAFuture * writeFuture;                    //@synthesize writeFuture=_writeFuture - In the implementation block
@property (assign,nonatomic) long long playbackState;                   //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,retain) NSNumber * transactionNumber;              //@synthesize transactionNumber=_transactionNumber - In the implementation block
-(id)init;
-(id)description;
-(NSNumber *)transactionNumber;
-(void)setTransactionNumber:(NSNumber *)arg1 ;
-(long long)playbackState;
-(void)setPlaybackState:(long long)arg1 ;
-(NAFuture *)writeFuture;
-(void)setWriteFuture:(NAFuture *)arg1 ;
@end

