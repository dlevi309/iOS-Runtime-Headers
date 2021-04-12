/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class NSArray, UIView, NSString;

@interface _TVRowView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	NSArray* _components;
	UIView* _preferredFocusedComponent;
	long long _contentVerticalAlignment;
	NSArray* _leftComponents;
	NSArray* _centerComponents;
	NSArray* _rightComponents;
	NSArray* _allComponents;
	UIView* _lastFocusedView;

}

@property (nonatomic,copy,readonly) NSArray * leftComponents;                        //@synthesize leftComponents=_leftComponents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * centerComponents;                      //@synthesize centerComponents=_centerComponents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rightComponents;                       //@synthesize rightComponents=_rightComponents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allComponents;                         //@synthesize allComponents=_allComponents - In the implementation block
@property (nonatomic,__weak,readonly) UIView * lastFocusedView;                      //@synthesize lastFocusedView=_lastFocusedView - In the implementation block
@property (nonatomic,copy) NSArray * components;                                     //@synthesize components=_components - In the implementation block
@property (assign,nonatomic,__weak) UIView * preferredFocusedComponent;              //@synthesize preferredFocusedComponent=_preferredFocusedComponent - In the implementation block
@property (assign,nonatomic) long long contentVerticalAlignment;                     //@synthesize contentVerticalAlignment=_contentVerticalAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)_leftAlignedFrameForComponent:(id)arg1 previousComponent:(id)arg2 interitemSpacing:(double)arg3 ;
+(void)_alignComponents:(id)arg1 withLineSize:(CGSize)arg2 boundingRect:(CGRect)arg3 originYBump:(double)arg4 verticalAlignment:(long long)arg5 horizontalAlignment:(long long)arg6 ;
+(CGRect)_boundingRectForComponents:(id)arg1 interitemSpacing:(double)arg2 boundingSize:(CGSize)arg3 horizontalAlignment:(long long)arg4 allowsOverflow:(BOOL)arg5 ;
-(NSArray *)components;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(long long)contentVerticalAlignment;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setComponents:(NSArray *)arg1 ;
-(NSArray *)allComponents;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)_resetSubviews;
-(void)setPreferredFocusedComponent:(UIView *)arg1 ;
-(UIView *)preferredFocusedComponent;
-(CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(CGSize)arg2 ;
-(long long)_alignmentFromView:(id)arg1 ;
-(NSArray *)leftComponents;
-(NSArray *)centerComponents;
-(NSArray *)rightComponents;
-(void)_addSubview:(id)arg1 maxViewWidth:(double)arg2 ;
-(void)_lineUpComponents:(id)arg1 alignment:(long long)arg2 attribute:(long long)arg3 ;
-(UIView *)lastFocusedView;
@end

