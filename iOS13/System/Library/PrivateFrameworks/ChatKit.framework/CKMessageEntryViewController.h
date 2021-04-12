/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIInputViewController.h>

@class CKMessageEntryView;

@interface CKMessageEntryViewController : UIInputViewController {

	BOOL _inputAccessoryViewControllerEnabled;
	CKMessageEntryView* _entryView;

}

@property (nonatomic,readonly) CKMessageEntryView * entryView;                      //@synthesize entryView=_entryView - In the implementation block
@property (assign,nonatomic) BOOL inputAccessoryViewControllerEnabled;              //@synthesize inputAccessoryViewControllerEnabled=_inputAccessoryViewControllerEnabled - In the implementation block
+(BOOL)_requiresProxyInterface;
-(void)loadView;
-(CKMessageEntryView *)entryView;
-(BOOL)inputAccessoryViewControllerEnabled;
-(id)initWithEntryView:(id)arg1 ;
-(void)setInputAccessoryViewControllerEnabled:(BOOL)arg1 ;
@end

