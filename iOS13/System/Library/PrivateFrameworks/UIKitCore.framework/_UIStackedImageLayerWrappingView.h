/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@protocol CALayerDelegate;
@interface _UIStackedImageLayerWrappingView : UIView {

	id<CALayerDelegate> _actionDelegate;

}

@property (assign,nonatomic,__weak) id<CALayerDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id<CALayerDelegate>)actionDelegate;
-(void)setActionDelegate:(id<CALayerDelegate>)arg1 ;
@end

