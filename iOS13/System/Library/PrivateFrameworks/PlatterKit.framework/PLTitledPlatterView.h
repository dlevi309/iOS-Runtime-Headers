/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLPlatterView.h>
#import <libobjc.A.dylib/PLPlatterInternal.h>
#import <libobjc.A.dylib/PLTitled.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class PLPlatterHeaderContentView, NSString, UIView, NSArray, NSDate, NSTimeZone, UIButton;

@interface PLTitledPlatterView : PLPlatterView <PLPlatterInternal, PLTitled, PLContentSizeCategoryAdjusting> {

	PLPlatterHeaderContentView* _headerContentView;
	BOOL _largerHeaderMarginEnabled;

}

@property (assign,getter=isSashHidden,nonatomic) BOOL sashHidden; 
@property (assign,getter=isLargerHeaderMarginEnabled,nonatomic) BOOL largerHeaderMarginEnabled;              //@synthesize largerHeaderMarginEnabled=_largerHeaderMarginEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * customContentView; 
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(NSArray *)icons;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setIcons:(NSArray *)arg1 ;
-(long long)dateFormatStyle;
-(void)setDateFormatStyle:(long long)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)iconButtons;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(UIButton *)utilityButton;
-(void)_layoutHeaderViews;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setUtilityView:(id)arg1 ;
-(id)_headerContentView;
-(id)utilityView;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1 ;
-(void)_configureHeaderContentViewIfNecessary;
-(void)_configureHeaderContentView;
-(CGRect)_mainContentFrame;
-(void)setLargerHeaderMarginEnabled:(BOOL)arg1 ;
-(BOOL)headerHeedsHorizontalLayoutMargins;
-(void)setHeaderHeedsHorizontalLayoutMargins:(BOOL)arg1 ;
-(BOOL)isLargerHeaderMarginEnabled;
-(BOOL)isSashHidden;
-(void)setSashHidden:(BOOL)arg1 ;
@end

