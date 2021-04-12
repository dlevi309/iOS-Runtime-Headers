/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol JTPassThroughContainerViewDelegate;
@interface JTPassThroughContainerView : UIView {

	id<JTPassThroughContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<JTPassThroughContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<JTPassThroughContainerViewDelegate>)delegate;
-(void)setDelegate:(id<JTPassThroughContainerViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

