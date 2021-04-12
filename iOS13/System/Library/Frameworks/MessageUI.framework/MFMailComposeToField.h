/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFMailComposeRecipientTextView.h>

@protocol MFMailComposeToFieldDelegate;
@class MFComposeSMIMELockButton;

@interface MFMailComposeToField : MFMailComposeRecipientTextView {

	MFComposeSMIMELockButton* _smimeButton;
	BOOL _wantsEncryption;
	BOOL _canEncrypt;
	BOOL _smimeButtonVisible;
	BOOL _smimeButtonEnabled;
	id<MFMailComposeToFieldDelegate> _toFieldDelegate;

}

@property (nonatomic,readonly) MFComposeSMIMELockButton * SMIMEButton; 
@property (assign,nonatomic,__weak) id<MFMailComposeToFieldDelegate> toFieldDelegate;              //@synthesize toFieldDelegate=_toFieldDelegate - In the implementation block
@property (assign,nonatomic) BOOL smimeButtonVisible;                                              //@synthesize smimeButtonVisible=_smimeButtonVisible - In the implementation block
@property (assign,nonatomic) BOOL smimeButtonEnabled;                                              //@synthesize smimeButtonEnabled=_smimeButtonEnabled - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setExpanded:(BOOL)arg1 ;
-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1 ;
-(void)setWantsEncryption:(BOOL)arg1 canEncrypt:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setSmimeButtonEnabled:(BOOL)arg1 ;
-(void)setToFieldDelegate:(id<MFMailComposeToFieldDelegate>)arg1 ;
-(BOOL)smimeButtonEnabled;
-(void)_tappedSMIMEButton:(id)arg1 ;
-(BOOL)smimeButtonVisible;
-(void)_setSMIMEButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSmimeButtonVisible:(BOOL)arg1 ;
-(MFComposeSMIMELockButton *)SMIMEButton;
-(id<MFMailComposeToFieldDelegate>)toFieldDelegate;
@end

