/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class UILabel, NSMapTable, NSLayoutConstraint, _UIDatePickerLinkedLabelStorage, UILayoutGuide, NSArray, UIFont, UIColor, NSString;

@interface _UIDatePickerLinkedLabel : UIView <UIContentSizeCategoryAdjusting> {

	SCD_Struct_UI34 _flags;
	UILabel* _renderingLabel;
	CGSize _lastSize;
	NSMapTable* _longestPossibleTitle;
	NSMapTable* _longestPossibleWidth;
	NSLayoutConstraint* _renderLabelXConstraint;
	_UIDatePickerLinkedLabelStorage* _storage;
	UILayoutGuide* _contentLayoutGuide;
	NSArray* _titles;
	NSArray* _possibleTitles;

}

@property (nonatomic,retain) _UIDatePickerLinkedLabelStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;                   //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * titles;                                       //@synthesize titles=_titles - In the implementation block
@property (nonatomic,retain) NSArray * possibleTitles;                               //@synthesize possibleTitles=_possibleTitles - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) BOOL textColorFollowsTintColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setStorage:(_UIDatePickerLinkedLabelStorage *)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2 ;
-(_UIDatePickerLinkedLabelStorage *)storage;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setPossibleTitles:(NSArray *)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(UILayoutGuide *)contentLayoutGuide;
-(void)layoutSubviews;
-(NSArray *)possibleTitles;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(NSArray *)titles;
-(void)_storageSync;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)_setNeedsStorageSync;
-(void)_storageSyncIfNecessary;
-(id)_longestPossibleTitleForPriority:(unsigned long long)arg1 width:(double*)arg2 ;
-(void)_invalidatePossibleTitleCaches;
-(void)_updateAlignmentConstraint;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)textColorFollowsTintColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIFont *)font;
-(double)minimumScaleFactor;
@end

