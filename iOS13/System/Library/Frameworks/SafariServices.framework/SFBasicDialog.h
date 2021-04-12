/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFDialog.h>

@class NSArray, NSString;

@interface SFBasicDialog : _SFDialog {

	BOOL _canceledOnProvisionalNavigation;
	BOOL _canceledOnCommittedNavigation;
	BOOL _canceledOnApplicationBackground;
	BOOL _completionHandlerBlocksWebProcess;
	BOOL _alertControllerPresentsAsActionSheet;
	BOOL _shouldHideWebContent;
	NSArray* _additionalCancellationExemptions;
	long long _presentationStyle;
	NSString* _title;
	NSString* _message;
	NSString* _defaultText;
	NSString* _textPlaceholder;
	NSString* _defaultPassword;
	NSString* _passwordPlaceholder;
	NSArray* _actions;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                       //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * defaultText;                                   //@synthesize defaultText=_defaultText - In the implementation block
@property (nonatomic,copy) NSString * textPlaceholder;                               //@synthesize textPlaceholder=_textPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * defaultPassword;                               //@synthesize defaultPassword=_defaultPassword - In the implementation block
@property (nonatomic,copy) NSString * passwordPlaceholder;                           //@synthesize passwordPlaceholder=_passwordPlaceholder - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                        //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL alertControllerPresentsAsActionSheet;              //@synthesize alertControllerPresentsAsActionSheet=_alertControllerPresentsAsActionSheet - In the implementation block
@property (assign,nonatomic) BOOL shouldHideWebContent;                              //@synthesize shouldHideWebContent=_shouldHideWebContent - In the implementation block
@property (assign,nonatomic) BOOL canceledOnProvisionalNavigation;                   //@synthesize canceledOnProvisionalNavigation=_canceledOnProvisionalNavigation - In the implementation block
@property (assign,nonatomic) BOOL canceledOnCommittedNavigation;                     //@synthesize canceledOnCommittedNavigation=_canceledOnCommittedNavigation - In the implementation block
@property (assign,nonatomic) BOOL canceledOnApplicationBackground;                   //@synthesize canceledOnApplicationBackground=_canceledOnApplicationBackground - In the implementation block
@property (nonatomic,copy) NSArray * additionalCancellationExemptions;               //@synthesize additionalCancellationExemptions=_additionalCancellationExemptions - In the implementation block
@property (assign,nonatomic) BOOL completionHandlerBlocksWebProcess;                 //@synthesize completionHandlerBlocksWebProcess=_completionHandlerBlocksWebProcess - In the implementation block
@property (assign,nonatomic) long long presentationStyle;                            //@synthesize presentationStyle=_presentationStyle - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)actions;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)presentationStyle;
-(void)setActions:(NSArray *)arg1 ;
-(BOOL)completionHandlerBlocksWebProcess;
-(void)didCompleteWithResponse:(id)arg1 ;
-(void)setTextPlaceholder:(NSString *)arg1 ;
-(void)setPasswordPlaceholder:(NSString *)arg1 ;
-(void)setShouldHideWebContent:(BOOL)arg1 ;
-(void)setCompletionHandlerBlocksWebProcess:(BOOL)arg1 ;
-(void)setDefaultText:(NSString *)arg1 ;
-(void)setCanceledOnProvisionalNavigation:(BOOL)arg1 ;
-(void)setAdditionalCancellationExemptions:(NSArray *)arg1 ;
-(void)setAlertControllerPresentsAsActionSheet:(BOOL)arg1 ;
-(void)setCanceledOnApplicationBackground:(BOOL)arg1 ;
-(BOOL)canceledOnProvisionalNavigation;
-(BOOL)canceledOnCommittedNavigation;
-(NSArray *)additionalCancellationExemptions;
-(BOOL)canceledOnApplicationBackground;
-(id)newDialogViewRepresentation;
-(id)newViewControllerRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)defaultText;
-(NSString *)textPlaceholder;
-(NSString *)defaultPassword;
-(NSString *)passwordPlaceholder;
-(BOOL)shouldHideWebContent;
-(void)setCanceledOnCommittedNavigation:(BOOL)arg1 ;
-(void)setDefaultPassword:(NSString *)arg1 ;
-(BOOL)alertControllerPresentsAsActionSheet;
@end

