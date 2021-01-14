/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(PLPlatterView *)arg1 ;
-(PLPlatterView *)contentView;
-(void)configureStackDimmingForTransform:(CGAffineTransform)arg1 ;
-(void)_updateStackDimmingVisualStyling;
-(void)invalidateStackedPlattersRecipe;
@end

