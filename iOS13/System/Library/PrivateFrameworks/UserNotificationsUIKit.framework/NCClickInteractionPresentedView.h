/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                      //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                       //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
-(void)dealloc;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithTitle:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)_reduceTransparencyStatusDidChange:(id)arg1 ;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)_darkerSystemColorsStatusDidChange:(id)arg1 ;
-(void)_configureTitleLabelIfNecessaryWithTitle:(id)arg1 ;
-(void)_updateTitleLabelTextAttributes;
-(void)_updateTitleLabelVisualStyling;
-(void)_updateTitleLabelAnchorPointAndPosition;
@end

