/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class UIView, NSLayoutConstraint, NSString, PLPillContentItem;

@interface PLPillContentWrapperView : UIView <PLContentSizeCategoryAdjusting> {

	UIView* _contentView;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _topConstraintBreakable;
	NSString* _preferredContentSizeCategory;
	PLPillContentItem* _contentItem;
	long long _appearState;

}

@property (assign,getter=isTopConstraintBreakable,nonatomic) BOOL topConstraintBreakable;              //@synthesize topConstraintBreakable=_topConstraintBreakable - In the implementation block
@property (nonatomic,retain) PLPillContentItem * contentItem;                                          //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,readonly) long long appearState;                                                  //@synthesize appearState=_appearState - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                    //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                   //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(CGSize)intrinsicContentSize;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setContentItem:(PLPillContentItem *)arg1 ;
-(PLPillContentItem *)contentItem;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_contentLabel;
-(long long)appearState;
-(void)_updateConstraintsPriority;
-(void)setContentItem:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)_setContentView:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)_makeTopConstraintBreakable;
-(void)_makeBottomConstraintBreakable;
-(void)setTopConstraintBreakable:(BOOL)arg1 ;
-(void)beginAppearanceTransition:(BOOL)arg1 ;
-(void)endAppearanceTransition:(BOOL)arg1 ;
-(BOOL)isTopConstraintBreakable;
@end

