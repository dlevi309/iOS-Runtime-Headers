/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(id)localizedTitle;
-(id)init;
-(id)titleAttributedString;
-(id<BPSBuddyControllerDelegate>)delegate;
-(id)_baseIdentifier;
-(void)setDelegate:(id<BPSBuddyControllerDelegate>)arg1 ;
-(void)updateTitleLabel;
-(void)viewDidLoad;
-(id)titleString;
-(UIView *)contentView;
-(void)viewDidLayoutSubviews;
-(id)localizedNotificationTitle;
-(BOOL)contentViewIsInAdjustedScrollView;
-(id)localizedInformativeText;
-(id)followUpIdentifier;
-(id)followUpActions;
-(id)localizedInformativeNotificationText;
-(BOOL)wantsFollowUpNotification;
-(void)addFollowUpForPageAndDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addFollowUpForPageWithCompletion:(/*^block*/id)arg1 ;
-(void)removeFollowupForPageWithCompletion:(/*^block*/id)arg1 ;
-(double)verticalTitleInset;
-(CGRect)computedTitleFrame;
@end

