/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

	BOOL inBatchUpdate;
	id<TLKObserver> observer;
	TLKRichText* _richText;
	TLKLabel* _textLabel;
	TLKRoundedCornerLabels* _roundedCornerLabels;
	TLKStarsView* _starRatingView;
	TLKIconsView* _iconView;

}

@property (nonatomic,retain) TLKLabel * textLabel;                                      //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) TLKRoundedCornerLabels * roundedCornerLabels;              //@synthesize roundedCornerLabels=_roundedCornerLabels - In the implementation block
@property (nonatomic,retain) TLKStarsView * starRatingView;                             //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,retain) TLKIconsView * iconView;                                   //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) TLKRichText * richText;                                    //@synthesize richText=_richText - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) unsigned long long prominence; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<TLKObserver> observer; 
@property (assign) BOOL inBatchUpdate; 
-(id)init;
-(NSString *)description;
-(id<TLKObserver>)observer;
-(void)setObserver:(id<TLKObserver>)arg1 ;
-(id)attributedString;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(TLKLabel *)textLabel;
-(TLKIconsView *)iconView;
-(void)setIconView:(TLKIconsView *)arg1 ;
-(void)setTextLabel:(TLKLabel *)arg1 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(unsigned long long)prominence;
-(TLKRichText *)richText;
-(void)setProminence:(unsigned long long)arg1 ;
-(BOOL)inBatchUpdate;
-(void)propertiesDidChange;
-(void)setRichText:(TLKRichText *)arg1 ;
-(void)setInBatchUpdate:(BOOL)arg1 ;
-(void)updateIcons:(id)arg1 ;
-(void)updateWithRichText:(id)arg1 ;
-(void)updateStarRating:(id)arg1 ;
-(void)updateRoundedCornerLabels:(id)arg1 ;
-(TLKStarsView *)starRatingView;
-(TLKRoundedCornerLabels *)roundedCornerLabels;
-(void)setStarRatingView:(TLKStarsView *)arg1 ;
-(void)setRoundedCornerLabels:(TLKRoundedCornerLabels *)arg1 ;
@end

