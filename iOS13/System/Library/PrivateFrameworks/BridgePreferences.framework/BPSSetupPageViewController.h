/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BPSBuddyController.h>

@protocol BPSBuddyControllerDelegate;
@class UIView, UILabel, NSString;

@interface BPSSetupPageViewController : UIViewController <BPSBuddyController> {

	UIView* _contentView;
	UILabel* _titleLabel;
	id<BPSBuddyControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) CGRect computedTitleFrame; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic,__weak) id<BPSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BPSBuddyControllerDelegate>)delegate;
-(void)setDelegate:(id<BPSBuddyControllerDelegate>)arg1 ;
-(id)localizedTitle;
-(UIView *)contentView;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)titleString;
-(id)_baseIdentifier;
-(BOOL)contentViewIsInAdjustedScrollView;
-(id)localizedInformativeText;
-(id)followUpIdentifier;
-(id)followUpActions;
-(id)titleAttributedString;
-(id)localizedNotificationTitle;
-(id)localizedInformativeNotificationText;
-(BOOL)wantsFollowUpNotification;
-(void)addFollowUpForPageAndDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addFollowUpForPageWithCompletion:(/*^block*/id)arg1 ;
-(void)removeFollowupForPageWithCompletion:(/*^block*/id)arg1 ;
-(void)updateTitleLabel;
-(double)verticalTitleInset;
-(CGRect)computedTitleFrame;
@end

