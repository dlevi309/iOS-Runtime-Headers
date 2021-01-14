/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class IMBalloonPluginDataSource, LPLinkView, LPLinkMetadata;

@interface CKRichLinkReplyPreviewBalloonView : CKColoredBalloonView {

	IMBalloonPluginDataSource* _dataSource;
	LPLinkView* _linkView;
	LPLinkMetadata* _linkMetadata;

}

@property (nonatomic,retain) LPLinkView * linkView;                               //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * linkMetadata;                       //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)prepareForDisplay;
-(IMBalloonPluginDataSource *)dataSource;
-(void)prepareForReuse;
-(id)description;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(void)layoutSubviews;
-(LPLinkMetadata *)linkMetadata;
-(LPLinkView *)linkView;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(void)configureForTranscriptPlugin:(id)arg1 ;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
@end

