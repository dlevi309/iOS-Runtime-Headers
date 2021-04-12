/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <UIKitCore/UIView.h>

@protocol UIViewWindowListener;
@interface UIViewWindowNotifier : UIView {

	id<UIViewWindowListener> _windowListener;

}

@property (assign,nonatomic,__weak) id<UIViewWindowListener> windowListener;              //@synthesize windowListener=_windowListener - In the implementation block
-(void)willMoveToWindow:(id)arg1 ;
-(id<UIViewWindowListener>)windowListener;
-(void)setWindowListener:(id<UIViewWindowListener>)arg1 ;
@end

