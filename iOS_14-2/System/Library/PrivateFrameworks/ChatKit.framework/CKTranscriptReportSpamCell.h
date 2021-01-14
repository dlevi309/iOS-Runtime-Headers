/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)internalPhishingWarning;
+(id)reportSpamButton;
+(id)internalPhishingWarningLabel;
-(void)clearFilters;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setShowReportSMSSpam:(BOOL)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(UIButton *)reportSpamButton;
-(BOOL)showReportSMSSpam;
-(void)setReportSpamButton:(UIButton *)arg1 ;
-(NSAttributedString *)attributedButtonText;
-(UILabel *)internalPhishingWarningLabel;
-(void)layoutSubviewsForAlignmentContents;
@end

