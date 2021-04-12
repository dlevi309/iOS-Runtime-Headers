/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSArray, NSOperationQueue;

@interface VSErrorRecoveryAttempter : NSObject {

	NSArray* _options;
	NSOperationQueue* _recoveryAttemptingQueue;

}

@property (nonatomic,retain) NSOperationQueue * recoveryAttemptingQueue;              //@synthesize recoveryAttemptingQueue=_recoveryAttemptingQueue - In the implementation block
@property (nonatomic,copy) NSArray * options;                                         //@synthesize options=_options - In the implementation block
-(id)init;
-(NSArray *)options;
-(void)setOptions:(NSArray *)arg1 ;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(NSOperationQueue *)recoveryAttemptingQueue;
-(void)setRecoveryAttemptingQueue:(NSOperationQueue *)arg1 ;
@end

