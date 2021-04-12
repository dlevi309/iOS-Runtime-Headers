/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITextInputDelegate.h>

@class UITextInteraction, NSString;

@interface UITextInteractionInputDelegate : NSObject <UITextInputDelegate> {

	UITextInteraction* _rootInteraction;

}

@property (assign,nonatomic,__weak) UITextInteraction * rootInteraction;              //@synthesize rootInteraction=_rootInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textWillChange:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)selectionWillChange:(id)arg1 ;
-(void)selectionDidChange:(id)arg1 ;
-(void)setRootInteraction:(UITextInteraction *)arg1 ;
-(UITextInteraction *)rootInteraction;
@end

