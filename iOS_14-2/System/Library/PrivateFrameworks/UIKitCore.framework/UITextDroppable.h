/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

