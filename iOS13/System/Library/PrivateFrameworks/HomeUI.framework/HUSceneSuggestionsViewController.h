/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUSceneEditorDelegate;
@class HUSceneSuggestionsItemManager, NSString;

@interface HUSceneSuggestionsViewController : HUItemTableViewController <HUPresentationDelegateHost> {

	id<HUPresentationDelegate> _presentationDelegate;
	id<HUSceneEditorDelegate> _sceneEditorDelegate;
	HUSceneSuggestionsItemManager* _suggestionsItemManager;

}

@property (assign,nonatomic,__weak) HUSceneSuggestionsItemManager * suggestionsItemManager;              //@synthesize suggestionsItemManager=_suggestionsItemManager - In the implementation block
@property (assign,nonatomic,__weak) id<HUSceneEditorDelegate> sceneEditorDelegate;                       //@synthesize sceneEditorDelegate=_sceneEditorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                     //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(id)init;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)_cancel:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(void)setSuggestionsItemManager:(HUSceneSuggestionsItemManager *)arg1 ;
-(id<HUSceneEditorDelegate>)sceneEditorDelegate;
-(void)setSceneEditorDelegate:(id<HUSceneEditorDelegate>)arg1 ;
-(HUSceneSuggestionsItemManager *)suggestionsItemManager;
-(void)_showActionEditorForActionSetSuggestionItem:(id)arg1 ;
-(void)_showActionEditorForNewCustomScene;
@end

