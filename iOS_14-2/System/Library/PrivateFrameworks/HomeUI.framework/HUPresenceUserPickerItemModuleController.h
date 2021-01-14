/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableModuleController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol HUPresenceUserPickerItemModuleControllerDelegate;
@class NSString;

@interface HUPresenceUserPickerItemModuleController : HUItemTableModuleController <UITextViewDelegate> {

	id<HUPresenceUserPickerItemModuleControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUPresenceUserPickerItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUPresenceUserPickerItemModuleControllerDelegate>)delegate;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)setDelegate:(id<HUPresenceUserPickerItemModuleControllerDelegate>)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)canSelectDisabledItem:(id)arg1 ;
-(void)accessoryButtonTappedForItem:(id)arg1 ;
-(id)_showAlertForConfirmationPrompt:(id)arg1 ;
@end

