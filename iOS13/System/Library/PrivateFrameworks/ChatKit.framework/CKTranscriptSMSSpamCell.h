/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString;

@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell {

	NSAttributedString* _attributedButtonText;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText;              //@synthesize attributedButtonText=_attributedButtonText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedButtonText;
@end

