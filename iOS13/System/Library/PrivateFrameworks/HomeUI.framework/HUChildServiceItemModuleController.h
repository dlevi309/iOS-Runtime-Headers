/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUEditableCheckmarkDelegate.h>

@protocol HUChildServiceModuleControllerDelegate, HFServiceLikeBuilder;
@class HUChildServiceEditorItemModule, HFItemBuilder, NSMapTable, NSString;

@interface HUChildServiceItemModuleController : HUItemTableModuleController <HUEditableCheckmarkDelegate> {

	id<HUChildServiceModuleControllerDelegate> _delegate;
	HUChildServiceEditorItemModule* _childServiceItemModule;
	HFItemBuilder*<HFServiceLikeBuilder> _activelyEditingNameServiceBuilder;
	NSMapTable* _identifyButtonMap;

}

@property (nonatomic,retain) HUChildServiceEditorItemModule * childServiceItemModule;                             //@synthesize childServiceItemModule=_childServiceItemModule - In the implementation block
@property (nonatomic,retain) HFItemBuilder*<HFServiceLikeBuilder> activelyEditingNameServiceBuilder;              //@synthesize activelyEditingNameServiceBuilder=_activelyEditingNameServiceBuilder - In the implementation block
@property (nonatomic,retain) NSMapTable * identifyButtonMap;                                                      //@synthesize identifyButtonMap=_identifyButtonMap - In the implementation block
@property (assign,nonatomic,__weak) id<HUChildServiceModuleControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUChildServiceModuleControllerDelegate>)delegate;
-(void)setDelegate:(id<HUChildServiceModuleControllerDelegate>)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2 ;
-(id)initWithModule:(id)arg1 delegate:(id)arg2 ;
-(BOOL)canSelectDisabledItem:(id)arg1 ;
-(void)checkmarkTappedInCell:(id)arg1 forItem:(id)arg2 ;
-(HUChildServiceEditorItemModule *)childServiceItemModule;
-(void)_identifyButtonPressed:(id)arg1 forEvent:(id)arg2 ;
-(NSMapTable *)identifyButtonMap;
-(void)setActivelyEditingNameServiceBuilder:(HFItemBuilder*<HFServiceLikeBuilder>)arg1 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)activelyEditingNameServiceBuilder;
-(void)setChildServiceItemModule:(HUChildServiceEditorItemModule *)arg1 ;
-(void)setIdentifyButtonMap:(NSMapTable *)arg1 ;
@end

