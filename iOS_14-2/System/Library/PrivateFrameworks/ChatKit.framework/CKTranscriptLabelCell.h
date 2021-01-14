/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewCellProtocol.h>

@class UILabel, NSAttributedString, NSString;

@interface CKTranscriptLabelCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol> {

	BOOL _wantsContactImageLayout;
	BOOL _wantsOffsetForReplyLine;
	UILabel* _label;

}

@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) BOOL wantsContactImageLayout;                   //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL wantsOffsetForReplyLine;                   //@synthesize wantsOffsetForReplyLine=_wantsOffsetForReplyLine - In the implementation block
@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(id)label;
-(void)clearFilters;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hidesCheckmark;
-(CGRect)contentAlignmentRect;
-(void)layoutSubviewsForContents;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)_fadeInLabelAtStartTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5 ;
-(void)prepareForReuse;
-(void)addFilter:(id)arg1 ;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(void)setWantsOffsetForReplyLine:(BOOL)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)wantsContactImageLayout;
-(void)layoutSubviewsForAlignmentContents;
-(UILabel *)label;
-(BOOL)wantsOffsetForReplyLine;
-(void)setOrientation:(char)arg1 ;
@end

