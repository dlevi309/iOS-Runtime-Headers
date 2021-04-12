/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setPlaybackCompletionType:(long long)arg1 ;
-(long long)playbackCompletionType;
@end

