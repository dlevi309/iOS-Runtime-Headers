/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTraitCollection:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)ckLayerDidBecomeVisible:(BOOL)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)stopPulseAnimation;
-(void)startShrinkAnimation;
-(void)setTypingView:(CKTypingView *)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)prepareForReuse;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(void)startPulseAnimation;
-(void)startGrowAnimation;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)layoutSubviewsForAlignmentContents;
-(CKTypingView *)typingView;
-(void)dealloc;
-(void)setOrientation:(char)arg1 ;
@end

