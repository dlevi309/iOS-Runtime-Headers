/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@protocol VSCredentialEntryViewModelDelegate;
@class NSArray, VSCredentialEntryPicker, NSURL, NSString, VSExpressionEvaluator;

@interface VSCredentialEntryViewModel : VSCuratedViewModel {

	NSArray* _credentialEntryFields;
	VSCredentialEntryPicker* _picker;
	NSURL* _linkURL;
	NSString* _linkTitle;
	NSArray* _buttons;
	NSString* _recentsTitle;
	NSString* _recentsMessage;
	NSString* _additionalMessage;
	id<VSCredentialEntryViewModelDelegate> _delegate;
	VSExpressionEvaluator* _buttonExpressionEvaluator;

}

@property (nonatomic,retain) VSExpressionEvaluator * buttonExpressionEvaluator;                   //@synthesize buttonExpressionEvaluator=_buttonExpressionEvaluator - In the implementation block
@property (nonatomic,retain) NSArray * credentialEntryFields;                                     //@synthesize credentialEntryFields=_credentialEntryFields - In the implementation block
@property (nonatomic,retain) VSCredentialEntryPicker * picker;                                    //@synthesize picker=_picker - In the implementation block
@property (nonatomic,copy) NSURL * linkURL;                                                       //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy) NSString * linkTitle;                                                  //@synthesize linkTitle=_linkTitle - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                                     //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) NSString * recentsTitle;                                               //@synthesize recentsTitle=_recentsTitle - In the implementation block
@property (nonatomic,copy) NSString * recentsMessage;                                             //@synthesize recentsMessage=_recentsMessage - In the implementation block
@property (nonatomic,copy) NSString * additionalMessage;                                          //@synthesize additionalMessage=_additionalMessage - In the implementation block
@property (assign,nonatomic,__weak) id<VSCredentialEntryViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(VSCredentialEntryPicker *)picker;
-(id<VSCredentialEntryViewModelDelegate>)delegate;
-(NSURL *)linkURL;
-(NSArray *)buttons;
-(void)setDelegate:(id<VSCredentialEntryViewModelDelegate>)arg1 ;
-(void)setPicker:(VSCredentialEntryPicker *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setLinkURL:(NSURL *)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(NSArray *)credentialEntryFields;
-(void)setCredentialEntryFields:(NSArray *)arg1 ;
-(void)setLinkTitle:(NSString *)arg1 ;
-(void)setAdditionalMessage:(NSString *)arg1 ;
-(void)setButtonExpressionEvaluator:(VSExpressionEvaluator *)arg1 ;
-(VSExpressionEvaluator *)buttonExpressionEvaluator;
-(void)_bindField:(id)arg1 ;
-(void)validateCredentialEntryFields;
-(void)setRecentsTitle:(NSString *)arg1 ;
-(void)setRecentsMessage:(NSString *)arg1 ;
-(void)_unbindField:(id)arg1 ;
-(NSString *)linkTitle;
-(void)buttonTappedAtIndex:(unsigned long long)arg1 ;
-(void)pickerDidSelectRow:(unsigned long long)arg1 ;
-(void)clearFieldsAfterUsername;
-(NSString *)recentsTitle;
-(NSString *)recentsMessage;
-(NSString *)additionalMessage;
@end

