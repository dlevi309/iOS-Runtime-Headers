/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface PXSettingsGraphExportViewController : UIViewController <MFMailComposeViewControllerDelegate> {

	BOOL _exportGraphOnViewDidAppear;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_exportGraph;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
@end

