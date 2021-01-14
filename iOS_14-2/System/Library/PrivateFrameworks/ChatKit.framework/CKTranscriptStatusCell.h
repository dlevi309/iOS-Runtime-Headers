/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKTranscriptLabelCell.h>

@class UIButton, NSAttributedString;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell {

	char _buttonAlignmentRelativeToContent;
	UIButton* _statusButton;
	double _prevBalloonWidth;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText; 
@property (nonatomic,retain) UIButton * statusButton;                              //@synthesize statusButton=_statusButton - In the implementation block
@property (assign,nonatomic) char buttonAlignmentRelativeToContent;                //@synthesize buttonAlignmentRelativeToContent=_buttonAlignmentRelativeToContent - In the implementation block
@property (assign,nonatomic) double prevBalloonWidth;                              //@synthesize prevBalloonWidth=_prevBalloonWidth - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideDuringDarkFSM; 
+(id)statusButton;
+(void)zoomAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
+(void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)clearFilters;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(double)prevBalloonWidth;
-(UIButton *)statusButton;
-(char)buttonAlignmentRelativeToContent;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)prepareForReuse;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setButtonAlignmentRelativeToContent:(char)arg1 ;
-(void)setStatusButton:(UIButton *)arg1 ;
-(void)addFilter:(id)arg1 ;
-(BOOL)shouldHideDuringDarkFSM;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)setPrevBalloonWidth:(double)arg1 ;
-(NSAttributedString *)attributedButtonText;
-(void)layoutSubviewsForAlignmentContents;
-(void)setOrientation:(char)arg1 ;
@end

