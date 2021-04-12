/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
*/

#import <ActivitySharingUI/ActivitySharingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ASCompetitionScoreViewConfiguration, UILabel, NSNumber, NSString, UIColor;

@interface ASCompetitionParticipantScoreView : UIView {

	ASCompetitionScoreViewConfiguration* _configuration;
	UILabel* _nameLabel;
	UILabel* _primaryScoreLabel;
	UILabel* _secondaryScoreLabel;
	NSNumber* _previousLayoutWidth;
	BOOL _secondaryScoreEnabled;
	NSString* _name;
	double _nameFontSizeReduction;
	unsigned long long _primaryScore;
	double _primaryScoreFontSizeReduction;
	unsigned long long _secondaryScore;
	UIColor* _scoreColor;
	double _scoreLeftMargin;
	double _scoreRightMargin;

}

@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double nameFontSizeReduction;                      //@synthesize nameFontSizeReduction=_nameFontSizeReduction - In the implementation block
@property (assign,nonatomic) unsigned long long primaryScore;                   //@synthesize primaryScore=_primaryScore - In the implementation block
@property (assign,nonatomic) double primaryScoreFontSizeReduction;              //@synthesize primaryScoreFontSizeReduction=_primaryScoreFontSizeReduction - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryScore;                 //@synthesize secondaryScore=_secondaryScore - In the implementation block
@property (nonatomic,retain) UIColor * scoreColor;                              //@synthesize scoreColor=_scoreColor - In the implementation block
@property (assign,nonatomic) BOOL secondaryScoreEnabled;                        //@synthesize secondaryScoreEnabled=_secondaryScoreEnabled - In the implementation block
@property (assign,nonatomic) double scoreLeftMargin;                            //@synthesize scoreLeftMargin=_scoreLeftMargin - In the implementation block
@property (assign,nonatomic) double scoreRightMargin;                           //@synthesize scoreRightMargin=_scoreRightMargin - In the implementation block
@property (nonatomic,readonly) double nameBaselineY; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)layoutForWidth:(double)arg1 ;
-(void)_updateNameLabelWithFontSizeReduction:(double)arg1 ;
-(void)_updatePrimaryScoreLabelWithFontSizeReduction:(double)arg1 ;
-(void)_updateSecondaryScoreLabel;
-(double)_availableScoreWidthForWidth:(double)arg1 ;
-(double)_computeFontSizeReductionForLabel:(id)arg1 width:(double)arg2 maxReduction:(double)arg3 updateBlock:(/*^block*/id)arg4 ;
-(double)nameBaselineY;
-(void)setNameFontSizeReduction:(double)arg1 ;
-(void)setPrimaryScore:(unsigned long long)arg1 ;
-(void)setPrimaryScoreFontSizeReduction:(double)arg1 ;
-(void)setSecondaryScore:(unsigned long long)arg1 ;
-(void)setScoreColor:(UIColor *)arg1 ;
-(void)setSecondaryScoreEnabled:(BOOL)arg1 ;
-(double)computePrimaryScoreFontSizeReductionForWidth:(double)arg1 ;
-(double)computeNameFontSizeReductionForWidth:(double)arg1 ;
-(double)nameFontSizeReduction;
-(unsigned long long)primaryScore;
-(double)primaryScoreFontSizeReduction;
-(unsigned long long)secondaryScore;
-(UIColor *)scoreColor;
-(BOOL)secondaryScoreEnabled;
-(double)scoreLeftMargin;
-(void)setScoreLeftMargin:(double)arg1 ;
-(double)scoreRightMargin;
-(void)setScoreRightMargin:(double)arg1 ;
@end

