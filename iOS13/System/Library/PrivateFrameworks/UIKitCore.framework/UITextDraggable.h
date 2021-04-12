/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIDragInteraction;


@protocol UITextDraggable <UITextInput>
@property (assign,nonatomic,__weak) id<UITextDragDelegate> textDragDelegate; 
@property (nonatomic,readonly) UIDragInteraction * textDragInteraction; 
@property (getter=isTextDragActive,nonatomic,readonly) BOOL textDragActive; 
@property (assign,nonatomic) long long textDragOptions; 
@required
-(id<UITextDragDelegate>)textDragDelegate;
-(void)setTextDragDelegate:(id)arg1;
-(UIDragInteraction *)textDragInteraction;
-(BOOL)isTextDragActive;
-(long long)textDragOptions;
-(void)setTextDragOptions:(long long)arg1;

@end

