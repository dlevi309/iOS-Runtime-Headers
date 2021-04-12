/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFDialog.h>
#import <libobjc.A.dylib/_SFAuthenticatorDialog.h>

@class NSString, _SFDialogView, NSArray;

@interface SFAuthenticatorDialog : _SFDialog <_SFAuthenticatorDialog> {

	_SFDialogView* _dialogView;
	NSString* _relyingPartyID;
	NSString* _title;
	NSString* _message;
	/*^block*/id _completionHandler;
	NSArray* _actions;

}

@property (nonatomic,retain) NSString * relyingPartyID;              //@synthesize relyingPartyID=_relyingPartyID - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                     //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSArray * actions;                      //@synthesize actions=_actions - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)actions;
-(long long)presentationStyle;
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)relyingPartyID;
-(void)transitionToState:(int)arg1 forPanel:(id)arg2 ;
-(void)didCompleteWithResponse:(id)arg1 ;
-(id)initWithPanel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newDialogViewRepresentation;
-(void)setRelyingPartyID:(NSString *)arg1 ;
-(void)_shake;
@end

