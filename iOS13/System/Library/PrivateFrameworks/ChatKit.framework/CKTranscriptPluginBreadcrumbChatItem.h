/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMultilineStampChatItem.h>

@class CKTranscriptPluginChatItem, IMTranscriptPluginBreadcrumbChatItem, UIImage;

@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampChatItem {

	CKTranscriptPluginChatItem* _previousPluginChatItem;

}

@property (nonatomic,readonly) IMTranscriptPluginBreadcrumbChatItem * IMChatItem; 
@property (nonatomic,readonly) UIImage * iconImage; 
@property (nonatomic,readonly) double iconWidthPlusPadding; 
@property (nonatomic,retain) CKTranscriptPluginChatItem * previousPluginChatItem;              //@synthesize previousPluginChatItem=_previousPluginChatItem - In the implementation block
-(UIImage *)iconImage;
-(Class)cellClass;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(char)transcriptOrientation;
-(BOOL)_wantsCenteredOrientation;
-(double)iconWidthPlusPadding;
-(BOOL)_wantsIconImage;
-(unsigned long long)_breadcrumbOptionFlags;
-(CKTranscriptPluginChatItem *)previousPluginChatItem;
-(void)setPreviousPluginChatItem:(CKTranscriptPluginChatItem *)arg1 ;
@end

