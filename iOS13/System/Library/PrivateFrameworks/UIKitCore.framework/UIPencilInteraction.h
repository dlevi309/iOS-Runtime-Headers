/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIInteraction_Internal.h>
#import <UIKit/UIInteraction.h>

@protocol UIPencilInteractionDelegate;
@class UIView, NSString;

@interface UIPencilInteraction : NSObject <UIInteraction_Internal, UIInteraction> {

	BOOL _enabled;
	id<UIPencilInteractionDelegate> _delegate;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                         //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<UIPencilInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)preferredTapAction;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(id<UIPencilInteractionDelegate>)delegate;
-(void)setDelegate:(id<UIPencilInteractionDelegate>)arg1 ;
-(BOOL)isEnabled;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)performDelegateDidTap;
@end

