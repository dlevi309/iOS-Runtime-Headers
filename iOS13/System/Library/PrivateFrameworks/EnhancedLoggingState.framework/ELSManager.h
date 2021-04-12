/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
*/


@class ELSSnapshot, NSUserDefaults;

@interface ELSManager : NSObject {

	ELSSnapshot* _snapshot;
	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) ELSSnapshot * snapshot;                 //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(void)finish;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)flush;
-(ELSSnapshot *)snapshot;
-(void)setSnapshot:(ELSSnapshot *)arg1 ;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(id)initSingleton;
-(void)beginUpdates;
-(void)refreshWithCompletion:(/*^block*/id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(void)transactionWithBlock:(/*^block*/id)arg1 ;
-(void)transactionWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)commitBatchTransaction:(id)arg1 ;
-(BOOL)commitStatusTransaction:(id)arg1 ;
-(BOOL)commitConsentTransaction:(id)arg1 ;
-(BOOL)commitDatesTransaction:(id)arg1 ;
-(BOOL)commitQueueTransaction:(id)arg1 ;
-(BOOL)commitRetriesRemainingTransaction:(id)arg1 ;
-(BOOL)commitIdentifiersToRetryTransaction:(id)arg1 ;
-(BOOL)commitMetadataTransaction:(id)arg1 ;
-(BOOL)commitUploadCompletedPercentage:(id)arg1 ;
-(BOOL)commitFollowUpOptions:(id)arg1 ;
-(BOOL)object:(id)arg1 isEqualToObject:(id)arg2 ;
-(void)getBugSessionActivityWithCompletion:(/*^block*/id)arg1 ;
@end

