/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)layoutType;
-(char)transcriptOrientation;
-(UIImage *)iconImage;
-(Class)cellClass;
-(BOOL)_wantsCenteredOrientation;
-(BOOL)_wantsIconImage;
-(double)iconWidthPlusPadding;
-(unsigned long long)_breadcrumbOptionFlags;
-(CKTranscriptPluginChatItem *)previousPluginChatItem;
-(void)setPreviousPluginChatItem:(CKTranscriptPluginChatItem *)arg1 ;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
@end

