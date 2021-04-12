/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class HKSource, NSString, UIFont;

@interface WDDataTableViewCell : UITableViewCell {

	BOOL _displayValueAdjustsFontSizeToFitWidth;
	HKSource* _source;
	NSString* _displayValue;
	NSString* _dateString;
	UIFont* _bodyFont;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) UIFont * bodyFont;                                       //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,retain) HKSource * source;                                       //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                               //@synthesize marginInsets=_marginInsets - In the implementation block
@property (nonatomic,retain) NSString * displayValue;                                 //@synthesize displayValue=_displayValue - In the implementation block
@property (nonatomic,retain) NSString * dateString;                                   //@synthesize dateString=_dateString - In the implementation block
@property (assign,nonatomic) BOOL displayValueAdjustsFontSizeToFitWidth;              //@synthesize displayValueAdjustsFontSizeToFitWidth=_displayValueAdjustsFontSizeToFitWidth - In the implementation block
-(void)dealloc;
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(NSString *)displayValue;
-(void)setDisplayValue:(NSString *)arg1 ;
-(UIFont *)bodyFont;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
-(void)_setupUI;
-(void)_updateMarginInsets;
-(void)setDisplayValueAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)displayValueAdjustsFontSizeToFitWidth;
-(void)setBodyFont:(UIFont *)arg1 ;
@end

