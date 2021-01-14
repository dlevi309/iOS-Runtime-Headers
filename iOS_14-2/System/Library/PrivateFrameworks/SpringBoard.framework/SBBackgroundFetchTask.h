/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(id)description;
-(void)dealloc;
@end

