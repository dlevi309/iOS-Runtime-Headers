/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKStackView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <libobjc.A.dylib/TLKObservable.h>
#import <libobjc.A.dylib/TLKObserver.h>

@protocol TLKObserver;
@class TLKRichText, TLKLabel, TLKRoundedCornerLabels, TLKStarsView, TLKIconsView, UIFont, NSString;

@interface TLKRichTextField : TLKStackView <NUIContainerViewDelegate, TLKObservable, TLKObserver> {

	id<TLKObserver> observer;
	long long batchUpdateCount;
	TLKRichText* _richText;
	unsigned long long _roundedCornerLabelSizeConfiguration;
	TLKLabel* _textLabel;
	TLKRoundedCornerLabels* _roundedCornerLabels;
	TLKStarsView* _starRatingView;
	TLKIconsView* _iconView;

}

@property (nonatomic,retain) TLKLabel * textLabel;                                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) TLKRoundedCornerLabels * roundedCornerLabels;                        //@synthesize roundedCornerLabels=_roundedCornerLabels - In the implementation block
@property (nonatomic,retain) TLKStarsView * starRatingView;                                       //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,retain) TLKIconsView * iconView;                                             //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) TLKRichText * richText;                                              //@synthesize richText=_richText - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) unsigned long long prominence; 
@property (assign,nonatomic) unsigned long long roundedCornerLabelSizeConfiguration;              //@synthesize roundedCornerLabelSizeConfiguration=_roundedCornerLabelSizeConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<TLKObserver> observer; 
@property (assign,nonatomic) long long batchUpdateCount; 
-(id)viewForLastBaselineLayout;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)setObserver:(id<TLKObserver>)arg1 ;
-(id)init;
-(id<TLKObserver>)observer;
-(void)setFont:(UIFont *)arg1 ;
-(id)attributedString;
-(void)setRoundedCornerLabelSizeConfiguration:(unsigned long long)arg1 ;
-(void)setTextLabel:(TLKLabel *)arg1 ;
-(void)updateIcons:(id)arg1 ;
-(void)updateWithRichText:(id)arg1 ;
-(void)updateStarRating:(id)arg1 ;
-(void)updateRoundedCornerLabels:(id)arg1 ;
-(TLKStarsView *)starRatingView;
-(TLKRoundedCornerLabels *)roundedCornerLabels;
-(TLKRichText *)richText;
-(void)setStarRatingView:(TLKStarsView *)arg1 ;
-(void)setRoundedCornerLabels:(TLKRoundedCornerLabels *)arg1 ;
-(unsigned long long)roundedCornerLabelSizeConfiguration;
-(NSString *)description;
-(unsigned long long)prominence;
-(TLKIconsView *)iconView;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)setIconView:(TLKIconsView *)arg1 ;
-(long long)batchUpdateCount;
-(void)setBatchUpdateCount:(long long)arg1 ;
-(void)propertiesDidChange;
-(TLKLabel *)textLabel;
-(void)setRichText:(TLKRichText *)arg1 ;
-(UIFont *)font;
@end

