/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class NSArray, UIView, NSString;

@interface _TVProductInfoView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	NSArray* _viewsAboveInfoSection;
	NSArray* _infoSectionViews;
	NSArray* _viewsBelowInfoSection;
	UIView* _defaultFocusView;

}

@property (nonatomic,retain) NSArray * viewsAboveInfoSection;              //@synthesize viewsAboveInfoSection=_viewsAboveInfoSection - In the implementation block
@property (nonatomic,retain) NSArray * infoSectionViews;                   //@synthesize infoSectionViews=_infoSectionViews - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelowInfoSection;              //@synthesize viewsBelowInfoSection=_viewsBelowInfoSection - In the implementation block
@property (nonatomic,retain) UIView * defaultFocusView;                    //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(void)setViewsAboveInfoSection:(NSArray *)arg1 ;
-(void)setInfoSectionViews:(NSArray *)arg1 ;
-(void)setViewsBelowInfoSection:(NSArray *)arg1 ;
-(NSArray *)viewsAboveInfoSection;
-(NSArray *)infoSectionViews;
-(NSArray *)viewsBelowInfoSection;
@end

