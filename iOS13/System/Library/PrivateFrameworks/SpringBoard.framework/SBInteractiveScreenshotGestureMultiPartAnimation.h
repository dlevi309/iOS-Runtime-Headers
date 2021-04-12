/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableArray;

@interface SBInteractiveScreenshotGestureMultiPartAnimation : NSObject {

	/*^block*/id _completionHandler;
	NSMutableArray* _pendingAnimationIdentifiers;

}
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginAnimationWithIdentifier:(id)arg1 ;
-(void)completeAnimationWithIdentifier:(id)arg1 finished:(BOOL)arg2 retargeted:(BOOL)arg3 ;
@end

