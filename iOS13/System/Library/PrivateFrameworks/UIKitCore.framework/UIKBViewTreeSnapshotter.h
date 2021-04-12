/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, UIView;

@interface UIKBViewTreeSnapshotter : NSObject {

	NSMutableArray* _inputViews;
	UIView* _snapshotView;

}

@property (nonatomic,readonly) UIView * snapshotView;              //@synthesize snapshotView=_snapshotView - In the implementation block
+(id)snapshotterForKeyboardView:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(void)dealloc;
-(UIView *)snapshotView;
@end

