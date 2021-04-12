/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class STUsageReport, UILabel, UIImageView, NSArray, NSLayoutConstraint;

@interface STUsageSummaryTitleView : UIView {

	BOOL _hasMultilineLayout;
	BOOL _useVibrancy;
	BOOL _truncateAverageLabel;
	unsigned long long _usageItemType;
	STUsageReport* _usageReport;
	double _previousWidth;
	UILabel* _titleLabel;
	UILabel* _usageLabel;
	UIImageView* _notificationDot;
	UIImageView* _deltaAverageImageView;
	UILabel* _deltaAverageLabel;
	NSArray* _variableConstraints;
	NSLayoutConstraint* _deltaAverageImageViewVerticalPosition;
	NSLayoutConstraint* _deltaAverageImageViewWidthConstraint;
	NSLayoutConstraint* _deltaAverageImageViewHeightConstraint;

}

@property (readonly) BOOL useVibrancy;                                                        //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (readonly) BOOL truncateAverageLabel;                                               //@synthesize truncateAverageLabel=_truncateAverageLabel - In the implementation block
@property (assign) BOOL hasMultilineLayout;                                                   //@synthesize hasMultilineLayout=_hasMultilineLayout - In the implementation block
@property (assign) double previousWidth;                                                      //@synthesize previousWidth=_previousWidth - In the implementation block
@property (readonly) UILabel * titleLabel;                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (readonly) UILabel * usageLabel;                                                    //@synthesize usageLabel=_usageLabel - In the implementation block
@property (retain) UIImageView * notificationDot;                                             //@synthesize notificationDot=_notificationDot - In the implementation block
@property (readonly) UIImageView * deltaAverageImageView;                                     //@synthesize deltaAverageImageView=_deltaAverageImageView - In the implementation block
@property (readonly) UILabel * deltaAverageLabel;                                             //@synthesize deltaAverageLabel=_deltaAverageLabel - In the implementation block
@property (retain) NSArray * variableConstraints;                                             //@synthesize variableConstraints=_variableConstraints - In the implementation block
@property (readonly) NSLayoutConstraint * deltaAverageImageViewVerticalPosition;              //@synthesize deltaAverageImageViewVerticalPosition=_deltaAverageImageViewVerticalPosition - In the implementation block
@property (readonly) NSLayoutConstraint * deltaAverageImageViewWidthConstraint;               //@synthesize deltaAverageImageViewWidthConstraint=_deltaAverageImageViewWidthConstraint - In the implementation block
@property (readonly) NSLayoutConstraint * deltaAverageImageViewHeightConstraint;              //@synthesize deltaAverageImageViewHeightConstraint=_deltaAverageImageViewHeightConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long usageItemType;                                //@synthesize usageItemType=_usageItemType - In the implementation block
@property (nonatomic,retain) STUsageReport * usageReport;                                     //@synthesize usageReport=_usageReport - In the implementation block
-(UILabel *)titleLabel;
-(unsigned long long)usageItemType;
-(void)setUsageItemType:(unsigned long long)arg1 ;
-(UIImageView *)deltaAverageImageView;
-(void)_setUpConstraints;
-(void)setNotificationDot:(UIImageView *)arg1 ;
-(NSLayoutConstraint *)deltaAverageImageViewVerticalPosition;
-(UIImageView *)notificationDot;
-(BOOL)_shouldHaveMultilineLayoutForLineWidth:(double)arg1 ;
-(BOOL)useVibrancy;
-(void)_setupSubviews;
-(void)setHasMultilineLayout:(BOOL)arg1 ;
-(void)_updateDeltaAverageViews;
-(UILabel *)usageLabel;
-(BOOL)hasMultilineLayout;
-(double)previousWidth;
-(void)setVariableConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)deltaAverageImageViewHeightConstraint;
-(UILabel *)deltaAverageLabel;
-(STUsageReport *)usageReport;
-(BOOL)truncateAverageLabel;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)variableConstraints;
-(void)_updateTitleLabel;
-(void)awakeFromNib;
-(void)setPreviousWidth:(double)arg1 ;
-(void)_updateUsageLabel;
-(NSLayoutConstraint *)deltaAverageImageViewWidthConstraint;
-(void)setUsageReport:(STUsageReport *)arg1 ;
-(id)initWithVibrancy:(BOOL)arg1 usageItemType:(unsigned long long)arg2 truncateAverageLabel:(BOOL)arg3 ;
@end

