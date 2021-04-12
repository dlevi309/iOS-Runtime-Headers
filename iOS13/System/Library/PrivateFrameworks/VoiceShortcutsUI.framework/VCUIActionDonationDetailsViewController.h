/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VCUIShortcutViewControllerDelegate.h>

@protocol VCActionDonation;
@class UITextView, NSString;

@interface VCUIActionDonationDetailsViewController : UIViewController <VCUIShortcutViewControllerDelegate> {

	id<VCActionDonation> _donation;

}

@property (nonatomic,retain) UITextView * view; 
@property (nonatomic,readonly) id<VCActionDonation> donation;              //@synthesize donation=_donation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)loadView;
-(void)shortcutViewController:(id)arg1 didCreateShortcut:(id)arg2 ;
-(void)shortcutViewControllerDidCancel:(id)arg1 ;
-(id<VCActionDonation>)donation;
-(id)initWithDonation:(id)arg1 ;
-(void)createVoiceShortcut;
@end

