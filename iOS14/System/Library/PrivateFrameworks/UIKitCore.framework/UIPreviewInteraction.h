/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPreviewInteractionImpl;
@class UIView;

@interface UIPreviewInteraction : NSObject {

	id<_UIPreviewInteractionImpl> _interactionImpl;

}

@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; 
@property (nonatomic,__weak,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initClickBasedImplementationWithView:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
@end

