/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKEffectPickerViewDelegate.h>
#import <libobjc.A.dylib/CKEffectPickerViewControllerProtocol.h>

@protocol CKEffectPickerViewControllerDelegate;
@class NSAttributedString, CKEffectPickerView;

@interface CKEffectPickerViewController : UIViewController <CKEffectPickerViewDelegate, CKEffectPickerViewControllerProtocol> {

	id<CKEffectPickerViewControllerDelegate> _delegate;
	NSAttributedString* _text;
	CKEffectPickerView* _pickerView;
	CGPoint _balloonViewOrigin;
	CGRect _sendButtonFrame;

}

@property (nonatomic,copy) NSAttributedString * text;                                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGRect sendButtonFrame;                                         //@synthesize sendButtonFrame=_sendButtonFrame - In the implementation block
@property (assign,nonatomic) CGPoint balloonViewOrigin;                                      //@synthesize balloonViewOrigin=_balloonViewOrigin - In the implementation block
@property (nonatomic,retain) CKEffectPickerView * pickerView;                                //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) id<CKEffectPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)handleTouchUp:(CGPoint)arg1 ;
-(id<CKEffectPickerViewControllerDelegate>)delegate;
-(void)updateHintTransition:(double)arg1 ;
-(void)handleTouchMoved:(CGPoint)arg1 ;
-(CGPoint)balloonViewOrigin;
-(void)setBalloonViewOrigin:(CGPoint)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSendButtonFrame:(CGRect)arg1 ;
-(CGRect)sendButtonFrame;
-(void)setSemanticContentAttribute:(id)arg1 forceLTR:(BOOL)arg2 ;
-(void)setPickerView:(CKEffectPickerView *)arg1 ;
-(void)touchUpInsideCloseButton;
-(void)effectSelectedWithIdentifier:(id)arg1 ;
-(void)effectPickerViewDidFinishAnimatingIn:(id)arg1 ;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)updateColor:(char)arg1 ;
-(void)setCloseButtonYPosition:(double)arg1 ;
-(void)presentPicker;
-(id)initWithComposition:(id)arg1 sendButtonFrame:(CGRect)arg2 balloonViewOrigin:(CGPoint)arg3 color:(char)arg4 ;
-(void)setDelegate:(id<CKEffectPickerViewControllerDelegate>)arg1 ;
-(NSAttributedString *)text;
-(void)setShowingInStandAloneWindow:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CKEffectPickerView *)pickerView;
@end

