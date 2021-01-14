/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <AppSupportUI/NUIContainerStackView.h>

@class SPUICompletionStringModel, UIColor, SearchUIImageView, SPUIMaskedLabelsStackView, SFSearchResult, SFCardSection, SPUICompletion, UIFont, NSString;

@interface SPUICompletionStringView : NUIContainerStackView {

	BOOL _focusIsOnFirstResult;
	SPUICompletionStringModel* _searchFieldModel;
	UIColor* _selectionHighlightColor;
	SearchUIImageView* _imageView;
	SPUIMaskedLabelsStackView* _labelsStackView;
	SFSearchResult* _result;
	SFCardSection* _cardSection;
	SPUICompletion* _completion;

}

@property (retain) SearchUIImageView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (retain) SPUIMaskedLabelsStackView * labelsStackView;                         //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (retain) SFSearchResult * result;                                             //@synthesize result=_result - In the implementation block
@property (retain) SFCardSection * cardSection;                                         //@synthesize cardSection=_cardSection - In the implementation block
@property (assign) BOOL focusIsOnFirstResult;                                           //@synthesize focusIsOnFirstResult=_focusIsOnFirstResult - In the implementation block
@property (retain) SPUICompletion * completion;                                         //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) SPUICompletionStringModel * searchFieldModel;              //@synthesize searchFieldModel=_searchFieldModel - In the implementation block
@property (nonatomic,retain) UIFont * fontForCompletionLabel; 
@property (nonatomic,retain) UIColor * textColorForCompletionLabel; 
@property (nonatomic,retain) UIColor * selectionHighlightColor;                         //@synthesize selectionHighlightColor=_selectionHighlightColor - In the implementation block
@property (readonly) NSString * completionText; 
@property (readonly) double trailingPaddingForFieldEditor; 
@property (readonly) BOOL hasContent; 
@property (readonly) BOOL hasPrefix; 
@property (readonly) NSString * copyableString; 
@property (readonly) BOOL completionResultIsPotentiallyPunchout; 
-(void)setResult:(SFSearchResult *)arg1 ;
-(SPUICompletionStringModel *)searchFieldModel;
-(void)setImageView:(SearchUIImageView *)arg1 ;
-(void)setTextColorForCompletionLabel:(UIColor *)arg1 ;
-(void)setCompletion:(SPUICompletion *)arg1 ;
-(NSString *)copyableString;
-(UIColor *)textColorForCompletionLabel;
-(BOOL)hasContent;
-(id)init;
-(UIColor *)selectionHighlightColor;
-(BOOL)completionResultIsPotentiallyPunchout;
-(SearchUIImageView *)imageView;
-(id)completionLabel;
-(void)updateFields;
-(void)setSearchFieldModel:(SPUICompletionStringModel *)arg1 ;
-(void)updateLayoutMargins;
-(double)trailingPaddingForFieldEditor;
-(BOOL)focusIsOnFirstResult;
-(id)bridgeLabel;
-(void)setLabelsStackView:(SPUIMaskedLabelsStackView *)arg1 ;
-(SPUICompletion *)completion;
-(void)setFocusIsOnFirstResult:(BOOL)arg1 ;
-(void)setSelectionHighlightColor:(UIColor *)arg1 ;
-(void)updateWithResult:(id)arg1 cardSection:(id)arg2 focusIsOnFirstResult:(BOOL)arg3 ;
-(void)setCardSection:(SFCardSection *)arg1 ;
-(SFSearchResult *)result;
-(NSString *)completionText;
-(SPUIMaskedLabelsStackView *)labelsStackView;
-(id)extensionLabel;
-(UIFont *)fontForCompletionLabel;
-(void)setFontForCompletionLabel:(UIFont *)arg1 ;
-(SFCardSection *)cardSection;
-(BOOL)hasPrefix;
@end

