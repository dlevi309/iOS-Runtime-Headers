/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class NSError;

@interface TLAlertPlaybackCompletionContext : NSObject {

	/*^block*/id _completionHandler;
	long long _playbackCompletionType;
	NSError* _error;

}

@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long playbackCompletionType;              //@synthesize playbackCompletionType=_playbackCompletionType - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPlaybackCompletionType:(long long)arg1 ;
-(long long)playbackCompletionType;
@end

