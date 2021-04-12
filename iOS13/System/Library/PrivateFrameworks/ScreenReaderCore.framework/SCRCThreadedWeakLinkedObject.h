/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject {

	NSLock* _releaseLock;
	int _referenceCount;
	BOOL _calledDealloc;

}
-(id)init;
@end

