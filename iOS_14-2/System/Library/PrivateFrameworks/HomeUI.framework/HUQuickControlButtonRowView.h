/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlAuxiliaryView.h>

@class NSMutableArray, NSArray, UIScrollView, NSString;

@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView> {

	long long _preferredContentAlignment;
	NSMutableArray* _mutableButtonViews;
	NSArray* _buttonConstraints;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) NSMutableArray * mutableButtonViews;              //@synthesize mutableButtonViews=_mutableButtonViews - In the implementation block
@property (nonatomic,retain) NSArray * buttonConstraints;                      //@synthesize buttonConstraints=_buttonConstraints - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                        //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long preferredContentAlignment;              //@synthesize preferredContentAlignment=_preferredContentAlignment - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttonViews; 
@property (nonatomic,readonly) BOOL hasCenteredContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(long long)preferredContentAlignment;
-(void)contentDidChange;
-(void)setPreferredContentAlignment:(long long)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(NSArray *)buttonViews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSArray *)buttonConstraints;
-(void)setButtonConstraints:(NSArray *)arg1 ;
-(void)updateConstraints;
-(void)setFrame:(CGRect)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(BOOL)hasCenteredContent;
-(void)_clearButtonConstraints;
-(void)setMutableButtonViews:(NSMutableArray *)arg1 ;
-(void)addButtonView:(id)arg1 ;
-(NSMutableArray *)mutableButtonViews;
-(void)insertButtonView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_updateLayoutIfNecessary;
-(id)initWithButtonViews:(id)arg1 ;
-(void)removeButtonView:(id)arg1 ;
@end

