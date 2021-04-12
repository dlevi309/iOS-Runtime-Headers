/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIBackdropContentView : UIView {

	BOOL _isForcingLayout;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)backdropView:(id)arg1 recursivelyUpdateMaskViewsForView:(id)arg2 ;
-(void)recursivelyRemoveBackdropMaskViewsForView:(id)arg1 ;
-(void)didMoveToWindow;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
@end

