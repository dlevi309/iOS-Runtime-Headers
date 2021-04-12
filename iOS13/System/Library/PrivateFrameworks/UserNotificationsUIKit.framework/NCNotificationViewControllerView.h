/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeManaging.h>

@class UIView, PLPlatterView, NSString;

@interface NCNotificationViewControllerView : UIView <PLContentSizeManaging> {

	UIView* _stackDimmingView;
	PLPlatterView* _contentView;

}

@property (assign,nonatomic,__weak) PLPlatterView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PLPlatterView *)contentView;
-(void)setContentView:(PLPlatterView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(void)configureStackDimmingForTransform:(CGAffineTransform)arg1 ;
-(void)_updateStackDimmingVisualStyling;
-(void)invalidateStackedPlattersRecipe;
@end

