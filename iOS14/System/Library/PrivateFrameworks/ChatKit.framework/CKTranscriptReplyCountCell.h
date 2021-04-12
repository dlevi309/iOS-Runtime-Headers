/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKTranscriptStatusCell.h>

@interface CKTranscriptReplyCountCell : CKTranscriptStatusCell {

	double _countAlpha;

}

@property (assign,nonatomic) double countAlpha;              //@synthesize countAlpha=_countAlpha - In the implementation block
-(void)clearFilters;
-(BOOL)hidesCheckmark;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)_fadeInLabelAtStartTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCountAlpha:(double)arg1 ;
-(id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)prepareForReuse;
-(void)addFilter:(id)arg1 ;
-(BOOL)wantsDrawerLayout;
-(BOOL)shouldHideDuringDarkFSM;
-(double)countAlpha;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)layoutSubviewsForAlignmentContents;
@end

