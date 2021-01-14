/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@interface CKSenderChatItem : CKChatItem
-(BOOL)isEditable;
-(unsigned long long)layoutType;
-(char)transcriptOrientation;
-(UIEdgeInsets)contentInsets;
-(id)cellIdentifier;
-(Class)cellClass;
-(BOOL)wantsDrawerLayout;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
@end

