/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@protocol VSTwoFactorEntryViewModelDelegate;
@class VSTwoFactorEntryTextField, NSString, NSArray, VSExpressionEvaluator;

@interface VSTwoFactorEntryViewModel : VSCuratedViewModel {

	id<VSTwoFactorEntryViewModelDelegate> _delegate;
	VSTwoFactorEntryTextField* _twoFactorTextField;
	NSString* _headerText;
	NSArray* _buttons;
	NSString* _originalTwoFacorCode;
	VSExpressionEvaluator* _buttonExpressionEvaluator;

}

@property (nonatomic,copy) NSString * originalTwoFacorCode;                                      //@synthesize originalTwoFacorCode=_originalTwoFacorCode - In the implementation block
@property (nonatomic,retain) VSExpressionEvaluator * buttonExpressionEvaluator;                  //@synthesize buttonExpressionEvaluator=_buttonExpressionEvaluator - In the implementation block
@property (assign,nonatomic,__weak) id<VSTwoFactorEntryViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSTwoFactorEntryTextField * twoFactorTextField;                     //@synthesize twoFactorTextField=_twoFactorTextField - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                                //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                                    //@synthesize buttons=_buttons - In the implementation block
-(id)init;
-(id<VSTwoFactorEntryViewModelDelegate>)delegate;
-(void)setDelegate:(id<VSTwoFactorEntryViewModelDelegate>)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(void)configureWithRequest:(id)arg1 ;
-(VSTwoFactorEntryTextField *)twoFactorTextField;
-(void)setTwoFactorTextField:(VSTwoFactorEntryTextField *)arg1 ;
-(void)buttonAtIndexWasPressed:(unsigned long long)arg1 ;
-(void)setButtonExpressionEvaluator:(VSExpressionEvaluator *)arg1 ;
-(void)setOriginalTwoFacorCode:(NSString *)arg1 ;
-(NSString *)originalTwoFacorCode;
-(VSExpressionEvaluator *)buttonExpressionEvaluator;
@end

