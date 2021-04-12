/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UILabel, UIImageView;

@interface CKMessageEntryAudioHintView : UIView {

	UIButton* _referenceButton;
	UILabel* _hintLabel;
	UIImageView* _hintImageView;
	UIButton* _hintButton;
	UIEdgeInsets _coverInsets;

}

@property (nonatomic,retain) UIButton * referenceButton;               //@synthesize referenceButton=_referenceButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets coverInsets;                 //@synthesize coverInsets=_coverInsets - In the implementation block
@property (nonatomic,retain) UILabel * hintLabel;                      //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,retain) UIImageView * hintImageView;              //@synthesize hintImageView=_hintImageView - In the implementation block
@property (nonatomic,retain) UIButton * hintButton;                    //@synthesize hintButton=_hintButton - In the implementation block
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIEdgeInsets)coverInsets;
-(void)setCoverInsets:(UIEdgeInsets)arg1 ;
-(id)initWithReferenceButton:(id)arg1 coverInsets:(UIEdgeInsets)arg2 ;
-(void)setReferenceButton:(UIButton *)arg1 ;
-(void)setHintLabel:(UILabel *)arg1 ;
-(void)setHintImageView:(UIImageView *)arg1 ;
-(void)setHintButton:(UIButton *)arg1 ;
-(UIButton *)referenceButton;
-(UIButton *)hintButton;
-(UIImageView *)hintImageView;
-(UILabel *)hintLabel;
@end

