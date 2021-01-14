/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKMessageEntryView *)entryView;
-(id)initWithEntryView:(id)arg1 ;
-(BOOL)inputAccessoryViewControllerEnabled;
-(void)setInputAccessoryViewControllerEnabled:(BOOL)arg1 ;
-(void)loadView;
@end

