/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <UIKitCore/UIViewController.h>

@class UITextView;

@interface CKSettingsGenericAboutViewController : UIViewController {

	UITextView* _aboutView;

}

@property (nonatomic,retain) UITextView * aboutView;              //@synthesize aboutView=_aboutView - In the implementation block
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)done:(id)arg1 ;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(UITextView *)aboutView;
-(void)setAboutView:(UITextView *)arg1 ;
@end

