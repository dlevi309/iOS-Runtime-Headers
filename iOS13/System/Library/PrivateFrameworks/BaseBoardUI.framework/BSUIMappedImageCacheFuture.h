/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/


#import <BaseBoardUI/BaseBoardUI-Structs.h>
@class BSAtomicSignal, NSThread, UIImage;

@interface BSUIMappedImageCacheFuture : NSObject {

	os_unfair_lock_s _lock;
	BSAtomicSignal* _submitted;
	NSThread* _submissionThread;
	/*^block*/id _lock_workBlock;
	BOOL _lock_workCompletionWasCalled;
	UIImage* _postlock_cachedImage;

}
-(id)init;
-(void)dealloc;
-(id)cacheImage;
-(void)submitWorkBlock:(/*^block*/id)arg1 ;
@end

