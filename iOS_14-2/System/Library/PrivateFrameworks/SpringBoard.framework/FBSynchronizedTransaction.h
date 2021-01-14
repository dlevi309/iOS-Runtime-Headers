/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol FBSynchronizedTransaction <NSObject>
@property (assign,nonatomic,__weak) id<FBSynchronizedTransactionDelegate> synchronizationDelegate; 
@required
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)performSynchronizedCommit;
-(BOOL)isReadyForSynchronizedCommit;
-(void)setSynchronizationDelegate:(id)arg1;

@end

