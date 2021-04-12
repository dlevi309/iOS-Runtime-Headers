/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@interface CKTypingChatItem : CKChatItem

@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(UIEdgeInsets)contentInsets;
-(BOOL)isFromMe;
-(Class)cellClass;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(char)transcriptOrientation;
-(BOOL)displayDuringSend;
-(BOOL)wantsDrawerLayout;
@end

