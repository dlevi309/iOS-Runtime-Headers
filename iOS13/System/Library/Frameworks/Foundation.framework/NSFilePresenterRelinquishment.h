/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSCountedSet, NSMutableArray;

@interface NSFilePresenterRelinquishment : NSObject {

	os_unfair_lock_s _lock;
	NSCountedSet* _blockingAccessClaimIDs;
	NSMutableArray* _relinquishReplies;
	/*^block*/id _reacquirer;
	NSMutableArray* _blockingPrerelinquishReplies;
	BOOL _prerelinquishInProgress;

}
-(void)dealloc;
-(void)removeAllBlockingAccessClaimIDs;
-(void)removeBlockingAccessClaimID:(id)arg1 ;
-(void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setReacquirer:(/*^block*/id)arg1 ;
-(void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(/*^block*/id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)_locked_addPrerelinquishReply:(/*^block*/id)arg1 ;
-(BOOL)_locked_addRelinquishReply:(/*^block*/id)arg1 ;
-(void)didRelinquish;
@end

