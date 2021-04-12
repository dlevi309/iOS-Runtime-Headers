/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, UIViewController;

@interface _UIStoryboardUnwindChain : NSObject {

	NSMutableArray* _viewControllers;
	unsigned long long _commonAncestorIdx;
	unsigned long long _modalAncestorContainingSourceIdx;

}

@property (nonatomic,readonly) UIViewController * commonAncestorViewController; 
@property (nonatomic,readonly) UIViewController * modalAncestorContainingSourceViewController; 
-(id)debugDescription;
-(id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2 ;
-(UIViewController *)commonAncestorViewController;
-(UIViewController *)modalAncestorContainingSourceViewController;
-(void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(/*^block*/id)arg1 ;
@end

