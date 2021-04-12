/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <DocumentManager/UIDocumentBrowserViewController.h>
#import <libobjc.A.dylib/DOCTargetSelectionBrowserViewControllerDelegate.h>

@class NSURL, DOCTargetSelectionBrowserViewController;

@interface DOCExportModeViewController : UIDocumentBrowserViewController <DOCTargetSelectionBrowserViewControllerDelegate> {

	NSURL* _directoryURLToReveal;
	DOCTargetSelectionBrowserViewController* _moveVC;

}

@property (nonatomic,retain) DOCTargetSelectionBrowserViewController * moveVC;              //@synthesize moveVC=_moveVC - In the implementation block
@property (nonatomic,copy) NSURL * directoryURLToReveal;                                    //@synthesize directoryURLToReveal=_directoryURLToReveal - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(DOCTargetSelectionBrowserViewController *)moveVC;
-(void)setDirectoryURLToReveal:(NSURL *)arg1 ;
-(void)setMoveVC:(DOCTargetSelectionBrowserViewController *)arg1 ;
-(NSURL *)directoryURLToReveal;
-(void)targetSelectionControllerWasCancelled:(id)arg1 ;
-(void)targetSelectionController:(id)arg1 didExportToURLs:(id)arg2 ;
@end

