/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@protocol CKBalloonTextViewInteractionDelegate;
@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {

	NSAttributedString* _attributedText;
	id<CKBalloonTextViewInteractionDelegate> _interactionDelegate;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                                                //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic,__weak) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textView;
-(NSString *)description;
-(void)setInteractionDelegate:(id<CKBalloonTextViewInteractionDelegate>)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)didMoveToWindow;
-(void)_interactionStartedFromPreviewItemController:(id)arg1 ;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1 ;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id<CKBalloonTextViewInteractionDelegate>)interactionDelegate;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 ;
-(id)_textWithHyphenationAppliedForAttributedText:(id)arg1 ;
@end

