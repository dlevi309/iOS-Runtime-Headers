/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, UIView;

@interface UIKBViewTreeSnapshotter : NSObject {

	NSMutableArray* _inputViews;
	UIView* _snapshotView;

}

@property (nonatomic,readonly) UIView * snapshotView;              //@synthesize snapshotView=_snapshotView - In the implementation block
+(id)snapshotterForKeyboardView:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(UIView *)snapshotView;
-(void)dealloc;
@end

