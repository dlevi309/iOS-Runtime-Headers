/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<JTPassThroughContainerViewDelegate>)arg1 ;
@end

