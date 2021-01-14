/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class PHMemory, NSArray, UILabel, UIActivityIndicatorView, NSString;

@interface PXMemoriesInlineProblemReportViewController : UIViewController <MFMailComposeViewControllerDelegate> {

	BOOL _didDismissMailWindow;
	PHMemory* _memory;
	NSArray* _features;
	UILabel* _reportCaptureInProgressLabel;
	UIActivityIndicatorView* _reportCaptureInProgressActivityIndicator;

}

@property (nonatomic,retain) PHMemory * memory;                                                               //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSArray * features;                                                              //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) UILabel * reportCaptureInProgressLabel;                                          //@synthesize reportCaptureInProgressLabel=_reportCaptureInProgressLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * reportCaptureInProgressActivityIndicator;              //@synthesize reportCaptureInProgressActivityIndicator=_reportCaptureInProgressActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL didDismissMailWindow;                                                       //@synthesize didDismissMailWindow=_didDismissMailWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHMemory *)memory;
-(NSArray *)features;
-(id)initWithMemory:(id)arg1 features:(id)arg2 ;
-(void)_showMailComposeWindow;
-(UILabel *)reportCaptureInProgressLabel;
-(void)setReportCaptureInProgressLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)reportCaptureInProgressActivityIndicator;
-(void)setReportCaptureInProgressActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(BOOL)didDismissMailWindow;
-(void)setDidDismissMailWindow:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setFeatures:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)setMemory:(PHMemory *)arg1 ;
@end

