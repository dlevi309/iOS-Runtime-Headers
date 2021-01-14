/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)recipients;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(id<MFCorecipientsIndicatorAtomDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithRecipients:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<MFCorecipientsIndicatorAtomDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

