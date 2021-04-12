/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIDropInteraction;


@protocol UITextDroppable <UITextInput,UITextPasteConfigurationSupporting>
@property (assign,nonatomic,__weak) id<UITextDropDelegate> textDropDelegate; 
@property (nonatomic,readonly) UIDropInteraction * textDropInteraction; 
@property (getter=isTextDropActive,nonatomic,readonly) BOOL textDropActive; 
@required
-(id<UITextDropDelegate>)textDropDelegate;
-(void)setTextDropDelegate:(id)arg1;
-(UIDropInteraction *)textDropInteraction;
-(BOOL)isTextDropActive;

@end

