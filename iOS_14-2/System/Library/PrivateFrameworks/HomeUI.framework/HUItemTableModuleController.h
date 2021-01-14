/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUItemTableTextEditingController.h>

@protocol HUItemTableModuleControllerHosting;
@class HFItemModule, NSString;

@interface HUItemTableModuleController : NSObject <HUItemTableTextEditingController> {

	id<HUItemTableModuleControllerHosting> _host;
	HFItemModule* _module;

}

@property (assign,nonatomic,__weak) id<HUItemTableModuleControllerHosting> host;              //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) HFItemModule * module;                                         //@synthesize module=_module - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHost:(id<HUItemTableModuleControllerHosting>)arg1 ;
-(id<HUItemTableModuleControllerHosting>)host;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(HFItemModule *)module;
-(id)initWithModule:(id)arg1 ;
-(id)textFieldForVisibleItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2 ;
-(BOOL)canSelectDisabledItem:(id)arg1 ;
-(void)accessoryButtonTappedForItem:(id)arg1 ;
-(long long)rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3 ;
-(id)leadingSwipeActionsForItem:(id)arg1 ;
-(id)trailingSwipeActionsForItem:(id)arg1 ;
@end

