/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(/*^block*/id)arg1 ;
-(id)debugDescription;
-(UIViewController *)commonAncestorViewController;
-(id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2 ;
-(UIViewController *)modalAncestorContainingSourceViewController;
@end

