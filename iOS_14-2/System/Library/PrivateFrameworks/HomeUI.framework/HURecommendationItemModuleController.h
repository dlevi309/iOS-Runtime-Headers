/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUIconSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>

@class HURecommendationItemModule, NSString;

@interface HURecommendationItemModuleController : HUItemTableModuleController <HUIconSwitchCellDelegate, HUTriggerEditorDelegate, HUPresentationDelegate> {

	unsigned long long _selectionType;

}

@property (nonatomic,readonly) HURecommendationItemModule * module; 
@property (assign) unsigned long long selectionType;                             //@synthesize selectionType=_selectionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dismissViewController:(id)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(id)initWithModule:(id)arg1 selectionType:(unsigned long long)arg2 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)commitSelectedItems;
-(void)_item:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)_presentSummaryForBuilder:(id)arg1 forRecommendation:(id)arg2 ;
-(void)_presentActionSetSummaryWithBuilder:(id)arg1 forRecommendation:(id)arg2 ;
-(void)_presentTriggerSummaryWithBuilder:(id)arg1 forRecommendation:(id)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSelectionType:(unsigned long long)arg1 ;
-(unsigned long long)selectionType;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
@end

