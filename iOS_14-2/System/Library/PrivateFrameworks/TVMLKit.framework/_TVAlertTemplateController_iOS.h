/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSMutableArray, UIAlertController, NSArray, TVImageProxy, NSString;

@interface _TVAlertTemplateController_iOS : UIViewController {

	NSMutableArray* _additionalLabels;
	UIAlertController* _alertController;
	NSArray* _buttonElements;
	TVImageProxy* _imageProxy;
	CGSize _imageSize;
	NSString* _message;
	NSString* _title;

}
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)updateWithTemplateElement:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_dismissAlertControllerAnimated:(BOOL)arg1 ;
-(void)_presentAlertController;
@end

