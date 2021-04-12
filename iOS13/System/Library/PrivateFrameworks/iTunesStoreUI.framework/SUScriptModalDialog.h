/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUScriptModalDialogDelegate;
@class ISDialog;

@interface SUScriptModalDialog : NSObject {

	ISDialog* _dialog;
	id<SUScriptModalDialogDelegate> _delegate;

}

@property (assign,nonatomic) id<SUScriptModalDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)titleForURL:(id)arg1 ;
-(void)dealloc;
-(id<SUScriptModalDialogDelegate>)delegate;
-(void)setDelegate:(id<SUScriptModalDialogDelegate>)arg1 ;
-(id)initWithDialog:(id)arg1 ;
-(id)copyResponseByRunningModal;
-(id)_copyResponseByRunningModal;
@end

