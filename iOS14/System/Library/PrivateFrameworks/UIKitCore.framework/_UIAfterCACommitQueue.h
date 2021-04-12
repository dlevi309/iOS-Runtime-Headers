/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIAfterCACommitBlock;

@interface _UIAfterCACommitQueue : NSObject {

	_UIAfterCACommitBlock* _first;
	_UIAfterCACommitBlock* _last;

}
-(BOOL)flush;
-(id)init;
-(void)enqueuePostCommitBlock:(/*^block*/id)arg1 ;
-(void)enqueuePostSynchronizeBlock:(/*^block*/id)arg1 ;
@end

