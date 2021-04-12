/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUFaceRecognitionAddPersonViewControllerDelegate.h>

@protocol HUFaceRecognitionPersonEditorViewControllerDelegate;
@class HUFaceRecognitionPersonEditorItemManager, NSString;

@interface HUFaceRecognitionPersonEditorViewController : HUItemTableViewController <HUSwitchCellDelegate, HUFaceRecognitionAddPersonViewControllerDelegate> {

	BOOL _shouldUpdateDelegate;
	id<HUFaceRecognitionPersonEditorViewControllerDelegate> _delegate;
	HUFaceRecognitionPersonEditorItemManager* _personItemManager;

}

@property (nonatomic,retain) HUFaceRecognitionPersonEditorItemManager * personItemManager;                         //@synthesize personItemManager=_personItemManager - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateDelegate;                                                            //@synthesize shouldUpdateDelegate=_shouldUpdateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<HUFaceRecognitionPersonEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<HUFaceRecognitionPersonEditorViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setDelegate:(id<HUFaceRecognitionPersonEditorViewControllerDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithPerson:(id)arg1 personManager:(id)arg2 home:(id)arg3 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(void)addPersonViewControllerDidFinish:(id)arg1 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithPersonLikeItem:(id)arg1 ;
-(BOOL)shouldUpdateDelegate;
-(HUFaceRecognitionPersonEditorItemManager *)personItemManager;
-(void)_deletePerson;
-(void)_presentAddPersonViewController;
-(void)setShouldUpdateDelegate:(BOOL)arg1 ;
-(void)setPersonItemManager:(HUFaceRecognitionPersonEditorItemManager *)arg1 ;
@end

