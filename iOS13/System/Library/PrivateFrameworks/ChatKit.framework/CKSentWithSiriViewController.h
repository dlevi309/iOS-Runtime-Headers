/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class CKConversation, UIScrollView, UIView, UILabel, UIImageView, NSString;

@interface CKSentWithSiriViewController : UIViewController <UIScrollViewDelegate> {

	CKConversation* _conversation;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _contextDescriptionLabel;
	UIImageView* _heroImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) CKConversation * conversation;                  //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                      //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILabel * contextDescriptionLabel;              //@synthesize contextDescriptionLabel=_contextDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * heroImageView;                    //@synthesize heroImageView=_heroImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                          //@synthesize detailLabel=_detailLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)inputAccessoryViewController;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(id)initWithConversation:(id)arg1 ;
-(id)_titleLabelText;
-(id)localizedStringWithLanguageCode:(id)arg1 format:(id)arg2 ;
-(UILabel *)contextDescriptionLabel;
-(void)setContextDescriptionLabel:(UILabel *)arg1 ;
-(UIImageView *)heroImageView;
-(void)setHeroImageView:(UIImageView *)arg1 ;
@end

