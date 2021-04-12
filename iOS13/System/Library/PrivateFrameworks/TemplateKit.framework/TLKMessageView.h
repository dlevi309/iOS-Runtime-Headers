/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>

@class NSString, CKTextBalloonView;

@interface TLKMessageView : TLKView {

	NSString* _messageText;
	unsigned long long _messageServiceType;
	unsigned long long _messageStatus;
	CKTextBalloonView* _textBalloonView;

}

@property (nonatomic,retain) CKTextBalloonView * textBalloonView;                //@synthesize textBalloonView=_textBalloonView - In the implementation block
@property (nonatomic,retain) NSString * messageText;                             //@synthesize messageText=_messageText - In the implementation block
@property (assign,nonatomic) unsigned long long messageServiceType;              //@synthesize messageServiceType=_messageServiceType - In the implementation block
@property (assign,nonatomic) unsigned long long messageStatus;                   //@synthesize messageStatus=_messageStatus - In the implementation block
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)setMessageStatus:(unsigned long long)arg1 ;
-(void)setMessageServiceType:(unsigned long long)arg1 ;
-(unsigned long long)messageStatus;
-(unsigned long long)messageServiceType;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)usesDefaultInsets;
-(void)setTextBalloonView:(CKTextBalloonView *)arg1 ;
-(CKTextBalloonView *)textBalloonView;
@end

