/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, UIColor, NSArray, NSDictionary, NSString;

@interface _TVOrganizerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	UIView* _lastFocusedView;
	UIView* _rightColumnDivider;
	UIView* _leftColumnDivider;
	double _showcaseFactor;
	BOOL _columnDividersEnabled;
	BOOL _remembersLastFocusedItem;
	UIView* _backgroundImageView;
	double _columnDividerPadding;
	UIColor* _columnDividerColor;
	NSArray* _components;
	NSDictionary* _divsByPosition;
	NSDictionary* _divSizesByPosition;

}

@property (nonatomic,copy) NSDictionary * divsByPosition;                            //@synthesize divsByPosition=_divsByPosition - In the implementation block
@property (nonatomic,copy) NSDictionary * divSizesByPosition;                        //@synthesize divSizesByPosition=_divSizesByPosition - In the implementation block
@property (nonatomic,retain) UIView * backgroundImageView;                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double columnDividerPadding;                            //@synthesize columnDividerPadding=_columnDividerPadding - In the implementation block
@property (assign,nonatomic) BOOL columnDividersEnabled;                             //@synthesize columnDividersEnabled=_columnDividersEnabled - In the implementation block
@property (nonatomic,retain) UIColor * columnDividerColor;                           //@synthesize columnDividerColor=_columnDividerColor - In the implementation block
@property (assign,nonatomic) BOOL remembersLastFocusedItem;                          //@synthesize remembersLastFocusedItem=_remembersLastFocusedItem - In the implementation block
@property (nonatomic,copy) NSArray * components;                                     //@synthesize components=_components - In the implementation block
@property (assign,nonatomic,__weak) UIView * preferredFocusedComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canBecomeFocused;
-(UIView *)backgroundImageView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)setComponents:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)cornerRadius;
-(NSArray *)components;
-(void)setBackgroundImageView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1 ;
-(void)setComponentsNeedUpdate;
-(void)setPreferredFocusedComponent:(UIView *)arg1 ;
-(NSDictionary *)divsByPosition;
-(void)setDivSizesByPosition:(NSDictionary *)arg1 ;
-(long long)_positionFromView:(id)arg1 ;
-(void)setDivsByPosition:(NSDictionary *)arg1 ;
-(NSDictionary *)divSizesByPosition;
-(CGSize)_contentSizeThatFits:(CGSize)arg1 ;
-(UIView *)preferredFocusedComponent;
-(void)setRemembersLastFocusedItem:(BOOL)arg1 ;
-(void)setColumnDividerPadding:(double)arg1 ;
-(void)setColumnDividersEnabled:(BOOL)arg1 ;
-(double)columnDividerPadding;
-(BOOL)columnDividersEnabled;
-(UIColor *)columnDividerColor;
-(void)setColumnDividerColor:(UIColor *)arg1 ;
-(BOOL)remembersLastFocusedItem;
@end

