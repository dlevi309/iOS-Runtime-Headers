/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class UILabel, MTVisualStylingProvider, NSString, NSArray;

@interface NCClickInteractionPresentedView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {

	UILabel* _titleLabel;
	CGSize _cachedSizeThatFits;
	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _adjustsFontForContentSizeCategory;
	NSString* _preferredContentSizeCategory;

}

@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                       //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                      //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)_reduceTransparencyStatusDidChange:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)dealloc;
-(void)_configureTitleLabelIfNecessaryWithTitle:(id)arg1 ;
-(void)_updateTitleLabelTextAttributes;
-(void)_updateTitleLabelVisualStyling;
-(void)_darkerSystemColorsStatusDidChange:(id)arg1 ;
-(void)_updateTitleLabelAnchorPointAndPosition;
@end

