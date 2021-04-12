/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

