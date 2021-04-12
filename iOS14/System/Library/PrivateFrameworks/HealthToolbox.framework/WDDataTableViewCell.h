/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>

@class HKSource, NSString, UIFont;

@interface WDDataTableViewCell : UITableViewCell {

	BOOL _displayValueAdjustsFontSizeToFitWidth;
	HKSource* _source;
	NSString* _displayValue;
	NSString* _dateString;
	UIFont* _bodyFont;

}

@property (nonatomic,retain) UIFont * bodyFont;                                       //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,retain) HKSource * source;                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * displayValue;                                 //@synthesize displayValue=_displayValue - In the implementation block
@property (nonatomic,retain) NSString * dateString;                                   //@synthesize dateString=_dateString - In the implementation block
@property (assign,nonatomic) BOOL displayValueAdjustsFontSizeToFitWidth;              //@synthesize displayValueAdjustsFontSizeToFitWidth=_displayValueAdjustsFontSizeToFitWidth - In the implementation block
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)setSource:(HKSource *)arg1 ;
-(void)setDisplayValue:(NSString *)arg1 ;
-(UIFont *)bodyFont;
-(NSString *)dateString;
-(void)setDateString:(NSString *)arg1 ;
-(void)_setupUI;
-(NSString *)displayValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(HKSource *)source;
-(void)setDisplayValueAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)displayValueAdjustsFontSizeToFitWidth;
@end

