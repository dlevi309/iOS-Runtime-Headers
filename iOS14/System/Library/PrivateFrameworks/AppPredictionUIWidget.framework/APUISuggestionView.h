/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

#import <UIKitCore/UIView.h>

@protocol APUISuggestionsWidgetViewDelegate;
@class UIStackView, UILabel, UIImageView, NSArray, ATXProactiveSuggestion;

@interface APUISuggestionView : UIView {

	BOOL _canEngageSuggestion;
	unsigned long long _platterSize;
	UIStackView* _stackView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _appImageView;
	UILabel* _reasonLabel;
	NSArray* _labels;
	ATXProactiveSuggestion* _suggestion;
	id<APUISuggestionsWidgetViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long platterSize;                                     //@synthesize platterSize=_platterSize - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * appImageView;                                         //@synthesize appImageView=_appImageView - In the implementation block
@property (nonatomic,retain) UILabel * reasonLabel;                                              //@synthesize reasonLabel=_reasonLabel - In the implementation block
@property (nonatomic,retain) NSArray * labels;                                                   //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) ATXProactiveSuggestion * suggestion;                                //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic) BOOL canEngageSuggestion;                                           //@synthesize canEngageSuggestion=_canEngageSuggestion - In the implementation block
@property (assign,nonatomic,__weak) id<APUISuggestionsWidgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setLabels:(NSArray *)arg1 ;
-(id<APUISuggestionsWidgetViewDelegate>)delegate;
-(NSArray *)labels;
-(UIStackView *)stackView;
-(ATXProactiveSuggestion *)suggestion;
-(void)setDelegate:(id<APUISuggestionsWidgetViewDelegate>)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSuggestion:(ATXProactiveSuggestion *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setAppImageView:(UIImageView *)arg1 ;
-(UIImageView *)appImageView;
-(unsigned long long)platterSize;
-(void)setPlatterSize:(unsigned long long)arg1 ;
-(void)createViewsIfNeeded;
-(void)installReasonLabelIfNecessary;
-(BOOL)canEngageSuggestion;
-(void)setCanEngageSuggestion:(BOOL)arg1 ;
-(void)layoutSuggestion:(id)arg1 ;
-(UILabel *)reasonLabel;
-(void)setReasonLabel:(UILabel *)arg1 ;
-(void)_updateMaximumNumberOfLines;
-(int)_titleNumberOfLines;
-(int)_subtitleNumberOfLines;
@end

