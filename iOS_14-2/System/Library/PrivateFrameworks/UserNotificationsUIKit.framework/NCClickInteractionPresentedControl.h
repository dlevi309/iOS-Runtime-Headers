/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class NSString, NCClickInteractionPresentedView, MTMaterialView, UITraitCollection;

@interface NCClickInteractionPresentedControl : UIControl <PLContentSizeCategoryAdjusting, UIPointerInteractionDelegate> {

	BOOL _adjustsFontForContentSizeCategory;
	NSString* _title;
	NCClickInteractionPresentedView* _presentedView;
	long long _materialRecipe;
	MTMaterialView* _backgroundMaterialView;
	UITraitCollection* _overrideTraitCollection;

}

@property (getter=_title,nonatomic,copy,readonly) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (getter=_presentedView,nonatomic,readonly) NCClickInteractionPresentedView * presentedView;               //@synthesize presentedView=_presentedView - In the implementation block
@property (getter=_materialRecipe,nonatomic,readonly) long long materialRecipe;                                     //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (getter=_backgroundMaterialView,nonatomic,readonly) MTMaterialView * backgroundMaterialView;              //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (nonatomic,retain) UITraitCollection * overrideTraitCollection;                                           //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_title;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)_presentedView;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UITraitCollection *)overrideTraitCollection;
-(void)setOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_backgroundMaterialView;
-(id)initWithTitle:(id)arg1 materialRecipe:(long long)arg2 ;
-(long long)_materialRecipe;
-(void)_configureContentViewIfNecessaryWithTitle:(id)arg1 ;
-(void)_configureMaterialViewsIfNecessary;
-(id)_newMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 ;
@end

