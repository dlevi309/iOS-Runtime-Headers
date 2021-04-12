/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)prefersPencilOnlyDrawing;
+(BOOL)hasSeenPencilPairingUI;
+(void)_setPrefersPencilOnlyDrawing:(BOOL)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(id)init;
-(id<UIPencilInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setDelegate:(id<UIPencilInteractionDelegate>)arg1 ;
-(NSString *)description;
-(UIView *)view;
-(void)performDelegateDidTap;
-(BOOL)isEnabled;
-(void)dealloc;
@end

