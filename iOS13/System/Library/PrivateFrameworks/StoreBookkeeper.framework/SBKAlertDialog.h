/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class NSString;

@interface SBKAlertDialog : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _cancelButtonTitle;
	/*^block*/id _completionHandler;
	NSString* _acceptButtonTitle;

}

@property (copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (copy) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (copy) NSString * acceptButtonTitle;              //@synthesize acceptButtonTitle=_acceptButtonTitle - In the implementation block
@property (copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)setAcceptButtonTitle:(NSString *)arg1 ;
-(BOOL)_runAsUIAlertView;
-(void)_runAsCFUserNotificationDisplayAlert;
-(NSString *)acceptButtonTitle;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4 ;
@end

