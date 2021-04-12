/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIComposeTextFieldListViewDelegate.h>

@protocol SKUIComposeReviewHeaderDelegate;
@class SKStarRatingControl, SKUIReviewMetadata, SKUIComposeTextFieldListView, UIResponder, NSString;

@interface SKUIComposeReviewHeaderView : UIView <SKUIComposeTextFieldListViewDelegate> {

	id<SKUIComposeReviewHeaderDelegate> _delegate;
	SKStarRatingControl* _ratingControl;
	SKUIReviewMetadata* _review;
	long long _style;
	SKUIComposeTextFieldListView* _textFieldListView;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeReviewHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIReviewMetadata * review;                                      //@synthesize review=_review - In the implementation block
@property (nonatomic,readonly) UIResponder * initialFirstResponder; 
@property (assign,nonatomic) float rating; 
@property (nonatomic,readonly) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)rating;
-(SKUIReviewMetadata *)review;
-(void)setReview:(SKUIReviewMetadata *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id<SKUIComposeReviewHeaderDelegate>)delegate;
-(void)setRating:(float)arg1 ;
-(void)setDelegate:(id<SKUIComposeReviewHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(NSString *)title;
-(void)dealloc;
-(UIResponder *)initialFirstResponder;
-(long long)numberOfColumnsInTextFieldList:(id)arg1 ;
-(long long)numberOfFieldsInTextFieldList:(id)arg1 ;
-(id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2 ;
-(void)textFieldListValidityDidChange:(id)arg1 ;
-(void)textFieldListValuesDidChange:(id)arg1 ;
-(long long)composeReviewStyle;
@end

