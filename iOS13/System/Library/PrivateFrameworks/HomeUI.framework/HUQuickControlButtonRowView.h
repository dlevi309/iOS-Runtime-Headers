/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasCenteredContent; 
+(BOOL)requiresConstraintBasedLayout;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)contentDidChange;
-(void)setPreferredContentAlignment:(long long)arg1 ;
-(long long)preferredContentAlignment;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(NSArray *)buttonConstraints;
-(void)setButtonConstraints:(NSArray *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(NSArray *)buttonViews;
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

