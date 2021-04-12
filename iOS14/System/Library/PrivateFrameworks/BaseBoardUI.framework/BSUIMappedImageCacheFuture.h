/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@end

