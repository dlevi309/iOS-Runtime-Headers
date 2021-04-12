/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@protocol HUMediaAccessControlEditorModuleControllerDelegate;
@class HFMediaAccessControlEditorItemModule, NSString;

@interface HUMediaAccessControlEditorModuleController : HUItemTableModuleController <UITextFieldDelegate, HUSwitchCellDelegate> {

	id<HUMediaAccessControlEditorModuleControllerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) HFMediaAccessControlEditorItemModule * module; 
@property (assign,nonatomic,__weak) id<HUMediaAccessControlEditorModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUMediaAccessControlEditorModuleControllerDelegate>)delegate;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setDelegate:(id<HUMediaAccessControlEditorModuleControllerDelegate>)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(id)updateAccessControlDescriptor:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
@end

