/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	BOOL _chatEligibleForContactImage;
	BOOL _wantsContactImageLayout;
	BOOL _isReply;
	BOOL _isReplyContextPreview;
	BOOL _isFromMe;
	UIButton* _failureButton;

}

@property (nonatomic,retain) UIButton * failureButton;                                     //@synthesize failureButton=_failureButton - In the implementation block
@property (assign,nonatomic) BOOL chatEligibleForContactImage;                             //@synthesize chatEligibleForContactImage=_chatEligibleForContactImage - In the implementation block
@property (assign,nonatomic) BOOL wantsContactImageLayout;                                 //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                                 //@synthesize isReply=_isReply - In the implementation block
@property (assign,nonatomic) BOOL isReplyContextPreview;                                   //@synthesize isReplyContextPreview=_isReplyContextPreview - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                                //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,readonly) BOOL failureButtonAdjustsContentAlignmentRect; 
+(double)failureButtonWidthPlusSpacing;
-(UIEdgeInsets)safeAreaInsets;
-(void)layoutSubviewsForContents;
-(BOOL)chatEligibleForContactImage;
-(void)setFailed:(BOOL)arg1 ;
-(void)setIsReplyContextPreview:(BOOL)arg1 ;
-(void)setIsFromMe:(BOOL)arg1 ;
-(id)contactImageView;
-(id)description;
-(BOOL)failed;
-(BOOL)isReplyContextPreview;
-(BOOL)isFromMe;
-(void)setChatEligibleForContactImage:(BOOL)arg1 ;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(UIButton *)failureButton;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(CGRect)contactImageViewFrame;
-(void)setFailureButton:(UIButton *)arg1 ;
-(BOOL)wantsContactImageLayout;
-(BOOL)isReply;
-(void)setIsReply:(BOOL)arg1 ;
@end

