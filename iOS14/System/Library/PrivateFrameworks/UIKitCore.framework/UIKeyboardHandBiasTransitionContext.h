/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIView;

@interface UIKeyboardHandBiasTransitionContext : NSObject {

	UIView* _fromSnapshotView;
	UIView* _toSnapshotView;

}

@property (nonatomic,retain) UIView * fromSnapshotView;              //@synthesize fromSnapshotView=_fromSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * toSnapshotView;                //@synthesize toSnapshotView=_toSnapshotView - In the implementation block
-(UIView *)toSnapshotView;
-(UIView *)fromSnapshotView;
-(void)setFromSnapshotView:(UIView *)arg1 ;
-(void)setToSnapshotView:(UIView *)arg1 ;
@end

