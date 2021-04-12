/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	BOOL _wantsContactImageLayout;
	UIButton* _failureButton;

}

@property (nonatomic,retain) UIButton * failureButton;                                     //@synthesize failureButton=_failureButton - In the implementation block
@property (assign,nonatomic) BOOL wantsContactImageLayout;                                 //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,readonly) BOOL failureButtonAdjustsContentAlignmentRect; 
+(double)failureButtonWidthPlusSpacing;
-(id)description;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(id)contactImageView;
-(void)layoutSubviewsForContents;
-(UIButton *)failureButton;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(BOOL)wantsContactImageLayout;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(void)setFailureButton:(UIButton *)arg1 ;
@end

