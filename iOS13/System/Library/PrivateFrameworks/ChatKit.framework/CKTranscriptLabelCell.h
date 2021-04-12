/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UILabel, NSAttributedString;

@interface CKTranscriptLabelCell : CKTranscriptCell {

	BOOL _wantsContactImageLayout;
	UILabel* _label;

}

@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) BOOL wantsContactImageLayout;                   //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
+(id)label;
-(void)setOrientation:(char)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)layoutSubviewsForContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(BOOL)wantsContactImageLayout;
@end

