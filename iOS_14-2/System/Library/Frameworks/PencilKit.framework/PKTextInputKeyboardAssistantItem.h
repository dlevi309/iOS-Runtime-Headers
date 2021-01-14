/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIBarButtonItem.h>
#import <libobjc.A.dylib/PKPaletteFloatingKeyboardControllerDelegate.h>

@protocol PKTextInputKeyboardAssistantItemDelegate;
@class PKPaletteFloatingKeyboardController, NSString;

@interface PKTextInputKeyboardAssistantItem : UIBarButtonItem <PKPaletteFloatingKeyboardControllerDelegate> {

	id<PKTextInputKeyboardAssistantItemDelegate> _delegate;
	PKPaletteFloatingKeyboardController* _floatingKeyboardController;

}

@property (nonatomic,retain) PKPaletteFloatingKeyboardController * floatingKeyboardController;              //@synthesize floatingKeyboardController=_floatingKeyboardController - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputKeyboardAssistantItemDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PKTextInputKeyboardAssistantItemDelegate>)delegate;
-(void)setDelegate:(id<PKTextInputKeyboardAssistantItemDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)floatingKeyboardController:(id)arg1 didChangeKeyboardType:(long long)arg2 ;
-(void)floatingKeyboardControllerWillHide:(id)arg1 ;
-(id)responderForFloatingKeyboardController:(id)arg1 ;
-(void)floatingKeyboardControllerWillShow:(id)arg1 ;
-(PKPaletteFloatingKeyboardController *)floatingKeyboardController;
-(void)setFloatingKeyboardController:(PKPaletteFloatingKeyboardController *)arg1 ;
-(void)didAction:(id)arg1 ;
-(id)_currentInteraction;
@end

