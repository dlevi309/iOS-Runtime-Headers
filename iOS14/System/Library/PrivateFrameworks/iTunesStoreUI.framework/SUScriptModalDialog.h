/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SUScriptModalDialogDelegate>)delegate;
-(void)setDelegate:(id<SUScriptModalDialogDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithDialog:(id)arg1 ;
-(id)copyResponseByRunningModal;
-(id)_copyResponseByRunningModal;
@end

