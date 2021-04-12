/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptLabelCell.h>

@class UIButton, UILabel, NSAttributedString;

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell {

	BOOL _showReportSMSSpam;
	UIButton* _reportSpamButton;
	UILabel* _internalPhishingWarningLabel;

}

@property (nonatomic,readonly) UILabel * internalPhishingWarningLabel;              //@synthesize internalPhishingWarningLabel=_internalPhishingWarningLabel - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedButtonText; 
@property (nonatomic,retain) UIButton * reportSpamButton;                           //@synthesize reportSpamButton=_reportSpamButton - In the implementation block
@property (assign,nonatomic) BOOL showReportSMSSpam;                                //@synthesize showReportSMSSpam=_showReportSMSSpam - In the implementation block
+(id)reportSpamButton;
+(id)internalPhishingWarning;
+(id)internalPhishingWarningLabel;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(UIButton *)reportSpamButton;
-(BOOL)showReportSMSSpam;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setShowReportSMSSpam:(BOOL)arg1 ;
-(void)setReportSpamButton:(UIButton *)arg1 ;
-(UILabel *)internalPhishingWarningLabel;
-(NSAttributedString *)attributedButtonText;
@end

