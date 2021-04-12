/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CKAudioProgressView, UIDateLabel;

@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell {

	CKAudioProgressView* _audioPlaybackView;

}

@property (nonatomic,retain) CKAudioProgressView * audioPlaybackView;              //@synthesize audioPlaybackView=_audioPlaybackView - In the implementation block
@property (nonatomic,retain) UIDateLabel * previewTitleLabel; 
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(void)configureWithAttachmentItem:(id)arg1 ;
-(id)formattedDurationTextForAsset:(id)arg1 ;
-(id)formattedCreatedDateTextFromDate:(id)arg1 ;
-(CKAudioProgressView *)audioPlaybackView;
-(void)setAudioPlaybackView:(CKAudioProgressView *)arg1 ;
@end

