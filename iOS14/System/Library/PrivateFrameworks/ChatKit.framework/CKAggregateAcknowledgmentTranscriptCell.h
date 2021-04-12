/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAssociatedMessageTranscriptCell.h>

@class CKAcknowledgmentBalloonView;

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell {

	BOOL _parentMessageIsFromMe;

}

@property (nonatomic,retain) CKAcknowledgmentBalloonView * balloonView; 
@property (assign,nonatomic) BOOL parentMessageIsFromMe;                             //@synthesize parentMessageIsFromMe=_parentMessageIsFromMe - In the implementation block
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)prepareForReuse;
-(CKAcknowledgmentBalloonView *)balloonView;
-(void)setBalloonView:(CKAcknowledgmentBalloonView *)arg1 ;
-(void)setParentMessageIsFromMe:(BOOL)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(BOOL)parentMessageIsFromMe;
-(void)layoutSubviewsForAlignmentContents;
@end

