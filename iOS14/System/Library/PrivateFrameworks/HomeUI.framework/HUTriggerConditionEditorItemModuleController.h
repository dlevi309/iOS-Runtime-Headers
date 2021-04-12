/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUTriggerTimeConditionDetailEditorDelegate.h>

@protocol HUTriggerConditionEditorItemModuleControllerDelegate;
@class HUTriggerConditionDetailEditingContext, HUTriggerConditionEditorItemModule, NSString;

@interface HUTriggerConditionEditorItemModuleController : HUItemTableModuleController <HUSwitchCellDelegate, HUTriggerTimeConditionDetailEditorDelegate> {

	id<HUTriggerConditionEditorItemModuleControllerDelegate> _delegate;
	HUTriggerConditionDetailEditingContext* _detailEditingContext;

}

@property (nonatomic,retain) HUTriggerConditionDetailEditingContext * detailEditingContext;                           //@synthesize detailEditingContext=_detailEditingContext - In the implementation block
@property (nonatomic,readonly) HUTriggerConditionEditorItemModule * module; 
@property (nonatomic,__weak,readonly) id<HUTriggerConditionEditorItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUTriggerConditionEditorItemModuleControllerDelegate>)delegate;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithModule:(id)arg1 delegate:(id)arg2 ;
-(void)accessoryButtonTappedForItem:(id)arg1 ;
-(void)timeConditionEditorDidCancel:(id)arg1 ;
-(void)timeConditionEditor:(id)arg1 didFinishWithCondition:(id)arg2 ;
-(BOOL)_canEditConditionOptionItem:(id)arg1 ;
-(void)_presentDetailEditorForConditionOptionItem:(id)arg1 ;
-(HUTriggerConditionDetailEditingContext *)detailEditingContext;
-(void)_dismissDetailEditor:(id)arg1 ;
-(void)setDetailEditingContext:(HUTriggerConditionDetailEditingContext *)arg1 ;
@end

