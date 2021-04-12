/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HUAboutResidentDeviceViewControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUSoftwareUpdateUIPresentationDelegate.h>

@class HUStatusDetailsTitleDescriptionCell, NSMutableDictionary, HUHomeStatusDetailsItemManager, NSString;

@interface HUHomeStatusDetailsViewController : HUServiceGridViewController <HUAboutResidentDeviceViewControllerDelegate, UITextViewDelegate, HUSoftwareUpdateUIPresentationDelegate> {

	HUStatusDetailsTitleDescriptionCell* _sizingTitleDescriptionCell;
	NSMutableDictionary* _sizingCellForClassString;

}

@property (nonatomic,readonly) HUHomeStatusDetailsItemManager * itemManager; 
@property (nonatomic,readonly) HUStatusDetailsTitleDescriptionCell * sizingTitleDescriptionCell;              //@synthesize sizingTitleDescriptionCell=_sizingTitleDescriptionCell - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sizingCellForClassString;                                  //@synthesize sizingCellForClassString=_sizingCellForClassString - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomeStatusDetailsViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)doneButtonPressed:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2 ;
-(id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2 ;
-(void)viewDidLoad;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithItemManager:(id)arg1 ;
-(void)layoutOptionsDidChange;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2 ;
-(void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2 ;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg1 ;
-(HUStatusDetailsTitleDescriptionCell *)sizingTitleDescriptionCell;
-(NSMutableDictionary *)sizingCellForClassString;
-(id)initWithDelegate:(id)arg1 statusItem:(id)arg2 ;
-(void)setSizingCellForClassString:(NSMutableDictionary *)arg1 ;
@end

