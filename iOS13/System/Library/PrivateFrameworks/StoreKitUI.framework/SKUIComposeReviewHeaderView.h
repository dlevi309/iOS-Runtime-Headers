/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<SKUIComposeReviewHeaderDelegate>)delegate;
-(void)setDelegate:(id<SKUIComposeReviewHeaderDelegate>)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(void)sizeToFit;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(SKUIReviewMetadata *)review;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)setReview:(SKUIReviewMetadata *)arg1 ;
-(UIResponder *)initialFirstResponder;
-(long long)numberOfColumnsInTextFieldList:(id)arg1 ;
-(long long)numberOfFieldsInTextFieldList:(id)arg1 ;
-(id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2 ;
-(void)textFieldListValidityDidChange:(id)arg1 ;
-(void)textFieldListValuesDidChange:(id)arg1 ;
-(long long)composeReviewStyle;
@end

