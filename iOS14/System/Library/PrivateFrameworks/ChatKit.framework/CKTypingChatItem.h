/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@interface CKTypingChatItem : CKChatItem

@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(unsigned long long)layoutType;
-(char)transcriptOrientation;
-(BOOL)displayDuringSend;
-(UIEdgeInsets)contentInsets;
-(Class)cellClass;
-(BOOL)wantsDrawerLayout;
-(BOOL)isFromMe;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(id)layoutItemSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
@end

