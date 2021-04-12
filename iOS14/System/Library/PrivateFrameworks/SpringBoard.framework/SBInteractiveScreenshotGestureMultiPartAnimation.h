/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

