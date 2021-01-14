/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIDragInteraction;


@protocol UITextDraggable <UITextInput>
@property (assign,nonatomic,__weak) id<UITextDragDelegate> textDragDelegate; 
@property (nonatomic,readonly) UIDragInteraction * textDragInteraction; 
@property (getter=isTextDragActive,nonatomic,readonly) BOOL textDragActive; 
@property (assign,nonatomic) long long textDragOptions; 
@required
-(long long)textDragOptions;
-(id<UITextDragDelegate>)textDragDelegate;
-(void)setTextDragDelegate:(id)arg1;
-(UIDragInteraction *)textDragInteraction;
-(BOOL)isTextDragActive;
-(void)setTextDragOptions:(long long)arg1;

@end

