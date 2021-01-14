/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString;

@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell {

	NSAttributedString* _attributedButtonText;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText;              //@synthesize attributedButtonText=_attributedButtonText - In the implementation block
-(void)clearFilters;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(NSAttributedString *)attributedButtonText;
-(void)layoutSubviewsForAlignmentContents;
@end

