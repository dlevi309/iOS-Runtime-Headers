/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITableViewCell, NSIndexPath, NSTimer, UIShadowView;

@interface _UITableViewReorderingSupport : NSObject {

	UITableViewCell* _reorderedCell;
	NSIndexPath* _initialIndexPath;
	NSIndexPath* _targetIndexPath;
	unsigned _oldShowHorizontalScrollIndicator : 1;
	unsigned _oldShowVerticalScrollIndicator : 1;
	unsigned _reloadDataCalled : 1;
	unsigned _reorderingCancelled : 1;
	unsigned _reserved : 28;
	NSTimer* _autoscrollTimer;
	UIShadowView* _topShadowView;
	UIShadowView* _bottomShadowView;
	BOOL _wasScrollingEnabled;

}
@end

