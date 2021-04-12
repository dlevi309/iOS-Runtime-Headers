/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <iTunesStoreUI/SUNavigationController.h>
#import <libobjc.A.dylib/SKUIComposeReviewFormDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class SKUIComposeReviewFormViewController, SUPlaceholderViewController, NSString, UIAlertAction, SKUIWriteAReviewTemplateViewElement, SKUIReviewMetadata;

@interface SKUIComposeReviewViewController : SUNavigationController <SKUIComposeReviewFormDelegate, UITextFieldDelegate> {

	SKUIComposeReviewFormViewController* _formViewController;
	SUPlaceholderViewController* _placeholderViewController;
	NSString* _nickname;
	BOOL _nicknameShouldResetOnError;
	UIAlertAction* _nicknameOKAction;
	BOOL _edit;
	SKUIWriteAReviewTemplateViewElement* _templateViewElement;

}

@property (assign,getter=isEdit,nonatomic) BOOL edit;                                                //@synthesize edit=_edit - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeReviewDelegate> delegate; 
@property (nonatomic,retain) SKUIWriteAReviewTemplateViewElement * templateViewElement;              //@synthesize templateViewElement=_templateViewElement - In the implementation block
@property (nonatomic,copy,readonly) SKUIReviewMetadata * editedReviewMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setRating:(float)arg1 ;
-(void)_setNickname:(id)arg1 ;
-(void)_cancelAction:(id)arg1 ;
-(void)setTemplateViewElement:(SKUIWriteAReviewTemplateViewElement *)arg1 ;
-(SKUIWriteAReviewTemplateViewElement *)templateViewElement;
-(SKUIReviewMetadata *)editedReviewMetadata;
-(void)_loadReviewWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_setNicknameShouldResetOnError:(BOOL)arg1 ;
-(void)_sendDidSubmit;
-(void)_sendDidCancel;
-(void)_promptForNickname;
-(void)_attemptReviewSubmission;
-(void)submitReview;
-(void)setEdit:(BOOL)arg1 ;
-(BOOL)isEdit;
-(void)_finishLoadWithOutput:(id)arg1 error:(id)arg2 ;
-(void)composeReviewFormDidCancel:(id)arg1 ;
-(void)composeReviewFormDidSubmit:(id)arg1 ;
-(void)loadReviewWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

