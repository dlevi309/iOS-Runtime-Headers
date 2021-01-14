/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton, NSMutableArray, NSString, UIColor;

@interface STSSearchNoticeView : UIView {

	UILabel* _textLabel;
	UIButton* _continueButton;
	NSMutableArray* _constraints;
	BOOL _contentCentered;
	NSString* _text;
	/*^block*/id _continueButtonAction;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,getter=isContentCentered,nonatomic) BOOL contentCentered;              //@synthesize contentCentered=_contentCentered - In the implementation block
@property (nonatomic,copy) id continueButtonAction;                                      //@synthesize continueButtonAction=_continueButtonAction - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)textColor;
-(id)init;
-(UIEdgeInsets)contentInsets;
-(void)_continuePressed:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setContinueButtonAction:(id)arg1 ;
-(id)continueButtonAction;
-(void)setContentCentered:(BOOL)arg1 ;
-(BOOL)isContentCentered;
@end

