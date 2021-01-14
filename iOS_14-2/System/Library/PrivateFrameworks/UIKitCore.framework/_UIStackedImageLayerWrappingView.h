/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@protocol CALayerDelegate;
@interface _UIStackedImageLayerWrappingView : UIView {

	id<CALayerDelegate> _actionDelegate;

}

@property (assign,nonatomic,__weak) id<CALayerDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(id<CALayerDelegate>)actionDelegate;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setActionDelegate:(id<CALayerDelegate>)arg1 ;
-(void)dealloc;
@end

