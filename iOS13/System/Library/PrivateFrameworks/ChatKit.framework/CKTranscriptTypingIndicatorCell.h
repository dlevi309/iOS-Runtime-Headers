/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>
#import <libobjc.A.dylib/CKLayerDelegate.h>

@class CKTypingView;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell <CKLayerDelegate> {

	CKTypingView* _typingView;

}

@property (nonatomic,retain) CKTypingView * typingView;                                            //@synthesize typingView=_typingView - In the implementation block
@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(void)dealloc;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTraitCollection:(id)arg1 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)ckLayerDidBecomeVisible:(BOOL)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(void)startPulseAnimation;
-(CKTypingView *)typingView;
-(void)startGrowAnimation;
-(void)stopPulseAnimation;
-(void)startShrinkAnimation;
-(void)setTypingView:(CKTypingView *)arg1 ;
@end

