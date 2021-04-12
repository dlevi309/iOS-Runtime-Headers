/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIInputViewSetPlacement;

@interface UIInputViewAnimationControllerSlideContext : NSObject {

	UIView* _snapshot;
	UIInputViewSetPlacement* _endPlacement;
	CGRect _snapshotEndFrame;

}

@property (nonatomic,retain) UIView * snapshot;                                   //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) CGRect snapshotEndFrame;                             //@synthesize snapshotEndFrame=_snapshotEndFrame - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * endPlacement;              //@synthesize endPlacement=_endPlacement - In the implementation block
-(void)dealloc;
-(UIView *)snapshot;
-(void)setSnapshot:(UIView *)arg1 ;
-(void)setSnapshotEndFrame:(CGRect)arg1 ;
-(void)setEndPlacement:(UIInputViewSetPlacement *)arg1 ;
-(CGRect)snapshotEndFrame;
-(UIInputViewSetPlacement *)endPlacement;
@end

