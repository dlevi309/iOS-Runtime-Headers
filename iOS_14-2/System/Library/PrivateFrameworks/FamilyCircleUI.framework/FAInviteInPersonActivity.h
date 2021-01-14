/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <ShareSheet/UIActivity.h>

@class UIViewController;

@interface FAInviteInPersonActivity : UIActivity {

	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(id)activityType;
-(id)init;
-(void)performActivity;
-(UIViewController *)presentingViewController;
-(long long)activityCategory;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(void)dealloc;
-(void)_handleRUIDismiss:(id)arg1 ;
-(void)_notifyCompletionWithSuccess:(BOOL)arg1 ;
@end

