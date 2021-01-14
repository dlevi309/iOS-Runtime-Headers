/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpanded:(BOOL)arg1 ;
-(void)setToFieldDelegate:(id<MFMailComposeToFieldDelegate>)arg1 ;
-(id<MFMailComposeToFieldDelegate>)toFieldDelegate;
-(BOOL)smimeButtonEnabled;
-(void)_tappedSMIMEButton:(id)arg1 ;
-(BOOL)smimeButtonVisible;
-(void)_setSMIMEButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSmimeButtonVisible:(BOOL)arg1 ;
-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setSmimeButtonEnabled:(BOOL)arg1 ;
-(void)setWantsEncryption:(BOOL)arg1 canEncrypt:(BOOL)arg2 animated:(BOOL)arg3 ;
-(MFComposeSMIMELockButton *)SMIMEButton;
-(void)dealloc;
@end

