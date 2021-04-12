/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, UIViewController;

@interface UIStoryboardUnwindSegueSource : NSObject {

	NSMutableArray* _searchChain;
	UIViewController* _sourceViewController;
	SEL _unwindAction;
	id _sender;

}

@property (readonly) UIViewController * sourceViewController;              //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (readonly) SEL unwindAction;                                     //@synthesize unwindAction=_unwindAction - In the implementation block
@property (readonly) id sender;                                            //@synthesize sender=_sender - In the implementation block
-(id)init;
-(id)sender;
-(SEL)unwindAction;
-(UIViewController *)sourceViewController;
-(id)_childContainingUnwindSourceForViewController:(id)arg1 ;
-(id)_initWithSourceViewController:(id)arg1 action:(SEL)arg2 sender:(id)arg3 ;
-(id)_findDestination;
@end

