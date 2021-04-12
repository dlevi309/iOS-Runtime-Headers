/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString, RBSAssertion;

@interface SBBackgroundFetchTask : NSObject {

	os_unfair_lock_s _lock;
	NSString* _bundleID;
	int _sequenceNumber;
	RBSAssertion* _lock_assertion;
	/*^block*/id _lock_completionHandler;
	BOOL _lock_finished;

}
+(int)_nextSequenceNumber;
-(void)dealloc;
-(id)description;
-(void)execute;
-(void)finishWithResult:(unsigned long long)arg1 ;
-(id)initForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

