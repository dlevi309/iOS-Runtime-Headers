/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAssociatedMessageTranscriptCell.h>

@class CKAcknowledgmentBalloonView;

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell {

	BOOL _parentMessageIsFromMe;

}

@property (nonatomic,retain) CKAcknowledgmentBalloonView * balloonView; 
@property (assign,nonatomic) BOOL parentMessageIsFromMe;                             //@synthesize parentMessageIsFromMe=_parentMessageIsFromMe - In the implementation block
-(void)prepareForReuse;
-(CKAcknowledgmentBalloonView *)balloonView;
-(void)setBalloonView:(CKAcknowledgmentBalloonView *)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(BOOL)parentMessageIsFromMe;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setParentMessageIsFromMe:(BOOL)arg1 ;
@end

