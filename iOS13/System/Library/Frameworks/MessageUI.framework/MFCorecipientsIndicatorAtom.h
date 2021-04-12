/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFModernAtomView.h>

@protocol MFCorecipientsIndicatorAtomDelegate;
@class NSArray;

@interface MFCorecipientsIndicatorAtom : MFModernAtomView {

	BOOL _touchesWereCancelled;
	id<MFCorecipientsIndicatorAtomDelegate> _delegate;
	NSArray* _recipients;

}

@property (assign,nonatomic,__weak) id<MFCorecipientsIndicatorAtomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                 //@synthesize recipients=_recipients - In the implementation block
-(id)init;
-(id<MFCorecipientsIndicatorAtomDelegate>)delegate;
-(void)setDelegate:(id<MFCorecipientsIndicatorAtomDelegate>)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithRecipients:(id)arg1 ;
@end

