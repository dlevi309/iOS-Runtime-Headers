/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLPlatterView.h>
#import <libobjc.A.dylib/PLPlatterInternal.h>
#import <libobjc.A.dylib/PLTitled.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class PLPlatterHeaderContentView, UIView, NSString, NSArray, NSDate, NSTimeZone, UIButton;

@interface PLTitledPlatterView : PLPlatterView <PLPlatterInternal, PLTitled, PLContentSizeCategoryAdjusting> {

	PLPlatterHeaderContentView* _headerContentView;
	BOOL _largerHeaderMarginEnabled;

}

@property (assign,getter=isSashHidden,nonatomic) BOOL sashHidden; 
@property (assign,getter=isLargerHeaderMarginEnabled,nonatomic) BOOL largerHeaderMarginEnabled;              //@synthesize largerHeaderMarginEnabled=_largerHeaderMarginEnabled - In the implementation block
@property (nonatomic,readonly) UIView * customContentView; 
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSArray *)icons;
-(void)setIcons:(NSArray *)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(long long)dateFormatStyle;
-(void)_layoutHeaderViews;
-(NSDate *)date;
-(void)setDateFormatStyle:(long long)arg1 ;
-(void)setNeedsLayout;
-(NSString *)title;
-(id)_headerContentView;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1 ;
-(NSArray *)iconButtons;
-(UIButton *)utilityButton;
-(void)_configureHeaderContentView;
-(id)utilityView;
-(void)_configureHeaderContentViewIfNecessary;
-(void)setUtilityView:(id)arg1 ;
-(CGRect)_mainContentFrame;
-(void)setLargerHeaderMarginEnabled:(BOOL)arg1 ;
-(BOOL)headerHeedsHorizontalLayoutMargins;
-(void)setHeaderHeedsHorizontalLayoutMargins:(BOOL)arg1 ;
-(BOOL)isLargerHeaderMarginEnabled;
-(BOOL)isSashHidden;
-(void)setSashHidden:(BOOL)arg1 ;
@end

