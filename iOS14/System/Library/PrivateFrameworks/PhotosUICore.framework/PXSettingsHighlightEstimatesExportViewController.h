/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class UITextView, NSDictionary, NSString;

@interface PXSettingsHighlightEstimatesExportViewController : UIViewController <MFMailComposeViewControllerDelegate> {

	BOOL _exportHighlightEstimatesOnViewDidAppear;
	UITextView* _textView;
	NSDictionary* _highlightEstimatesDictionary;

}

@property (assign) BOOL exportHighlightEstimatesOnViewDidAppear;              //@synthesize exportHighlightEstimatesOnViewDidAppear=_exportHighlightEstimatesOnViewDidAppear - In the implementation block
@property (retain) UITextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (retain) NSDictionary * highlightEstimatesDictionary;               //@synthesize highlightEstimatesDictionary=_highlightEstimatesDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)_sendEmail:(id)arg1 ;
-(void)_fetchHighlightEstimatesDictionary;
-(BOOL)exportHighlightEstimatesOnViewDidAppear;
-(void)setExportHighlightEstimatesOnViewDidAppear:(BOOL)arg1 ;
-(NSDictionary *)highlightEstimatesDictionary;
-(void)setHighlightEstimatesDictionary:(NSDictionary *)arg1 ;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

