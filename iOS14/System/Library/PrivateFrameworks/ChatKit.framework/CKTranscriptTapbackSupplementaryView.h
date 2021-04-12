/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCollectionSupplementaryView.h>

@class CKAcknowledgmentBalloonView;

@interface CKTranscriptTapbackSupplementaryView : CKTranscriptCollectionSupplementaryView {

	CKAcknowledgmentBalloonView* _balloonView;

}

@property (nonatomic,retain) CKAcknowledgmentBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
+(id)supplementaryViewKindPrefix;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CKAcknowledgmentBalloonView *)balloonView;
-(void)setBalloonView:(CKAcknowledgmentBalloonView *)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
@end

