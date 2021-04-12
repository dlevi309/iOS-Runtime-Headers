/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WDDashboardCellPrimaryValueSourceDelegate.h>
#import <libobjc.A.dylib/HKDateCacheObserver.h>
#import <libobjc.A.dylib/WDDashboardCellForceTouchDelegate.h>

@protocol WDCurrentValueTableViewCellDelegate, WDDashboardCellPrimaryValueSource;
@class HKGradientView, UIImageView, UILabel, HKDateCache, HKDisplayCategory, NSString;

@interface WDCurrentValueTableViewCell : UITableViewCell <WDDashboardCellPrimaryValueSourceDelegate, HKDateCacheObserver, WDDashboardCellForceTouchDelegate> {

	HKGradientView* _backgroundGradientView;
	UIImageView* _categoryIcon;
	UILabel* _titleLabel;
	UILabel* _currentValueLabel;
	UILabel* _contextLabel;
	HKDateCache* _dateCache;
	HKDisplayCategory* _displayCategory;
	id<WDCurrentValueTableViewCellDelegate> _delegate;
	unsigned long long _marginMode;
	id<WDDashboardCellPrimaryValueSource> _primaryValueSource;

}

@property (nonatomic,retain) id<WDDashboardCellPrimaryValueSource> primaryValueSource;              //@synthesize primaryValueSource=_primaryValueSource - In the implementation block
@property (assign,nonatomic) unsigned long long marginMode;                                         //@synthesize marginMode=_marginMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_layoutSubviews;
-(void)_updateUI;
-(void)_setupSubviews;
-(void)primaryValueSourceDidUpdate:(id)arg1 ;
-(void)setMarginMode:(unsigned long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 dateCache:(id)arg2 delegate:(id)arg3 ;
-(void)setPrimaryValueSource:(id<WDDashboardCellPrimaryValueSource>)arg1 ;
-(void)setDisplayCategory:(id)arg1 ;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
-(void)_updateTimeBasedUI;
-(CGRect)forceTouchFrame;
-(unsigned long long)marginMode;
-(id<WDDashboardCellPrimaryValueSource>)primaryValueSource;
-(void)_layoutSubviewsForLargeText;
-(id)_currentValueTextWithFontScaledBy:(double)arg1 ;
-(id)_titleLabelTextWithFontScaledBy:(double)arg1 ;
-(void)_adjustValueLabelSizeForLargeTextForWidth:(double)arg1 ;
-(double)calculatedContentHeightForLargeTextWithSize:(CGSize)arg1 ;
-(id)_contextLabelText;
-(void)_updateBackgroundGradient;
@end

