/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIView, UIVisualEffectView, UILabel, HUIHeadphoneLevelGroup, NSNumberFormatter, NSArray, NSString;

@interface HUIHeadphoneLevelView : UIControl <HACCContentModule> {

	BOOL _isRTL;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UIView* _centerContainer;
	UIVisualEffectView* _titleContainer;
	UIView* _subtitleContainer;
	UILabel* _titleLabel;
	UILabel* _subtitleLeftLabel;
	UILabel* _subtitleRightLabel;
	HUIHeadphoneLevelGroup* _levelGroup;
	NSNumberFormatter* _dbFormatter;
	NSArray* _viewContraints;

}

@property (nonatomic,retain) UIView * centerContainer;                                   //@synthesize centerContainer=_centerContainer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * titleContainer;                        //@synthesize titleContainer=_titleContainer - In the implementation block
@property (nonatomic,retain) UIView * subtitleContainer;                                 //@synthesize subtitleContainer=_subtitleContainer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLeftLabel;                                //@synthesize subtitleLeftLabel=_subtitleLeftLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleRightLabel;                               //@synthesize subtitleRightLabel=_subtitleRightLabel - In the implementation block
@property (nonatomic,retain) HUIHeadphoneLevelGroup * levelGroup;                        //@synthesize levelGroup=_levelGroup - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * dbFormatter;                            //@synthesize dbFormatter=_dbFormatter - In the implementation block
@property (nonatomic,retain) NSArray * viewContraints;                                   //@synthesize viewContraints=_viewContraints - In the implementation block
@property (nonatomic,readonly) BOOL isRTL;                                               //@synthesize isRTL=_isRTL - In the implementation block
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(BOOL)enabled;
-(id)accessibilityLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)init;
-(BOOL)isAccessibilityElement;
-(id<HACCContentModuleDelegate>)delegate;
-(BOOL)isRTL;
-(void)setModule:(unsigned long long)arg1 ;
-(unsigned long long)accessibilityTraits;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(void)updateConstraints;
-(id)accessibilityValue;
-(void)updateValue;
-(unsigned long long)module;
-(UIVisualEffectView *)titleContainer;
-(void)setTitleContainer:(UIVisualEffectView *)arg1 ;
-(void)dealloc;
-(id)contentValue;
-(HUIHeadphoneLevelGroup *)levelGroup;
-(void)setLevelGroup:(HUIHeadphoneLevelGroup *)arg1 ;
-(void)updateViewsWithSlowLeq:(double)arg1 fastLeq:(double)arg2 andThreshold:(unsigned long long)arg3 ;
-(NSArray *)viewContraints;
-(void)setViewContraints:(NSArray *)arg1 ;
-(NSNumberFormatter *)dbFormatter;
-(UILabel *)subtitleLeftLabel;
-(id)formatLevelRating:(id)arg1 threshold:(unsigned long long)arg2 ;
-(UILabel *)subtitleRightLabel;
-(id)formatLevel:(id)arg1 baseFont:(id)arg2 ;
-(UIView *)centerContainer;
-(void)setCenterContainer:(UIView *)arg1 ;
-(UIView *)subtitleContainer;
-(void)setSubtitleContainer:(UIView *)arg1 ;
-(void)setSubtitleLeftLabel:(UILabel *)arg1 ;
-(void)setSubtitleRightLabel:(UILabel *)arg1 ;
-(void)setDbFormatter:(NSNumberFormatter *)arg1 ;
@end

